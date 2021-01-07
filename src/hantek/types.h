////////////////////////////////////////////////////////////////////////////////
//
//  OpenHantek
/// \file hantek/types.h
/// \brief Declares types needed for the Hantek::Device class.
//
//  Copyright (C) 2008, 2009  Oleg Khudyakov
//  prcoder@potrebitel.ru
//  Copyright (C) 2010  Oliver Haag
//  oliver.haag@gmail.com
//
//  This program is free software: you can redistribute it and/or modify it
//  under the terms of the GNU General Public License as published by the Free
//  Software Foundation, either version 3 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope that it will be useful, but WITHOUT
//  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
//  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
//  more details.
//
//  You should have received a copy of the GNU General Public License along with
//  this program.  If not, see <http://www.gnu.org/licenses/>.
//
////////////////////////////////////////////////////////////////////////////////


#ifndef HANTEK_TYPES_H
#define HANTEK_TYPES_H


#include "helper.h"


#define HANTEK_VENDOR_ID         0x04b5 ///< VID for Hantek DSOs with loaded fw
#define HANTEK_EP_OUT              0x02 ///< OUT Endpoint for bulk transfers
#define HANTEK_EP_IN               0x86 ///< IN Endpoint for bulk transfers
#define HANTEK_TIMEOUT              500 ///< Timeout for USB transfers in ms
#define HANTEK_ATTEMPTS_DEFAULT       3 ///< The number of transfer attempts

#define HANTEK_CHANNELS               2 ///< Number of physical channels
#define HANTEK_SPECIAL_CHANNELS       2 ///< Number of special channels


////////////////////////////////////////////////////////////////////////////////
/// \namespace Hantek                                             hantek/types.h
/// \brief All %Hantek DSO device specific things.
namespace Hantek {
	//////////////////////////////////////////////////////////////////////////////
	/// \enum CommandCode                                           hantek/types.h
	/// \brief All supported bulk commands.
	/// Indicies given in square brackets specify byte numbers in little endian format.
	enum CommandCode {
		/// <p>
		///   This command sets channel and trigger filter:
		///   <table>
		///     <tr>
		///       <td>0x00</td>
		///       <td>0x0f</td>
		///       <td>FilterBits</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///     </tr>
		///   </table>
		/// </p>
		COMMAND_SETFILTER,
		
		/// <p>
		///   This command sets trigger and timebase:
		///   <table>
		///     <tr>
		///       <td>0x01</td>
		///       <td>0x00</td>
		///       <td>Tsr1Bits</td>
		///       <td>Tsr2Bits</td>
		///       <td>SamplerateSlow[0]</td>
		///       <td>SamplerateSlow[1]</td>
		///     </tr>
		///   </table>
		///   <table>
		///     <tr>
		///       <td>TriggerPosition[0]</td>
		///       <td>TriggerPosition[1]</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>TriggerPosition[2]</td>
		///       <td>0x00</td>
		///     </tr>
		///   </table>
		/// </p>
		/// <p>
		///   The samplerate is set relative to the maximum sample rate by a divider that is set in Tsr1Bits.samplerateFast and the 16-bit value in the two SamplerateSlow bytes.<br />
		///   Without using fast rate mode, the samplerate is:<br />
		///   <i>Samplerate = SamplerateMax / (1comp(SamplerateSlow) * 2 + Tsr1Bits.samplerateFast)</i><br />
		///   SamplerateMax is 50 MHz for the DSO-2090.<br />
		///   When using fast rate mode the resulting samplerate is twice (For DSO-2150 three times) as fast, when using the large buffer it is half as fast. When Tsr1Bits.bufferSize is 0 (Roll mode) the sampling rate is divided by 1000. Setting Tsr1Bits.samplerateFast to 0 doesn't work, the result will be the same as Tsr1Bits.samplerateFast = 1. SamplerateSlow can't be used together with fast rate mode, the result is always the the same as SlowValue = 0.
		/// </p>
		/// <p>
		///   The TriggerPosition sets the position of the pretrigger in samples. The left side (0 %) is 0x77660 when using the small buffer and 0x78000 when using the large buffer.
		/// </p>
		COMMAND_SETTRIGGERANDSAMPLERATE,
		
		/// <p>
		///   This command forces triggering:
		///   <table>
		///     <tr>
		///       <td>0x02</td>
		///       <td>0x00</td>
		///     </tr>
		///   </table>
		/// </p>
		COMMAND_FORCETRIGGER,
		
		/// <p>
		///   This command starts to capture data:
		///   <table>
		///     <tr>
		///       <td>0x03</td>
		///       <td>0x00</td>
		///     </tr>
		///   </table>
		/// </p>
		COMMAND_STARTSAMPLING,
		
		/// <p>
		///   This command sets the trigger:
		///   <table>
		///     <tr>
		///       <td>0x04</td>
		///       <td>0x00</td>
		///     </tr>
		///   </table>
		/// </p>
		COMMAND_ENABLETRIGGER,
		
		/// <p>
		///   This command reads data from the hardware:
		///   <table>
		///     <tr>
		///       <td>0x05</td>
		///       <td>0x00</td>
		///     </tr>
		///   </table>
		/// </p>
		/// <p>
		///   The oscilloscope returns the sample data, that will be split if it's larger than the IN endpoint packet length:
		///   <table>
		///     <tr>
		///       <td>Sample[0]</td>
		///       <td>...</td>
		///       <td>Sample[511]</td>
		///     </tr>
		///     <tr>
		///       <td>Sample[512]</td>
		///       <td>...</td>
		///       <td>Sample[1023]</td>
		///     </tr>
		///     <tr>
		///       <td>Sample[1024]</td>
		///       <td>...</td>
		///       <td>...</td>
		///     </tr>
		///   </table>
		///   Because of the 9 bit data model, the DSO-5200 transmits an additional MSB for each sample afterwards.
		/// </p>
		COMMAND_GETDATA,
		
		/// <p>
		///   This command checks the capture state:
		///   <table>
		///     <tr>
		///       <td>0x06</td>
		///       <td>0x00</td>
		///     </tr>
		///   </table>
		/// </p>
		/// <p>
		///   The oscilloscope returns it's capture state and the trigger point. Not sure about this, looks like 248 16-bit words with nearly constant values. These can be converted to the start address of the data in the buffer (See Hantek::Control::calculateTriggerPoint):
		///   <table>
		///     <tr>
		///       <td>#CaptureState</td>
		///       <td>0x00</td>
		///       <td>TriggerPoint[0]</td>
		///       <td>TriggerPoint[1]</td>
		///       <td>...</td>
		///     </tr>
		///   </table>
		/// </p>
		COMMAND_GETCAPTURESTATE,
		
		/// <p>
		///   This command sets the gain:
		///   <table>
		///     <tr>
		///       <td>0x07</td>
		///       <td>0x0f</td>
		///       <td>GainBits</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///     </tr>
		///   </table>
		///   It is usually used in combination with #CONTROL_SETRELAYS.
		/// </p>
		COMMAND_SETGAIN,
		
		/// <p>
		///   This command sets the logical data (And what the hell is this?...):
		///   <table>
		///     <tr>
		///       <td>0x08</td>
		///       <td>0x0f</td>
		///       <td>Data | 0x01</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///     </tr>
		///   </table>
		/// </p>
		COMMAND_SETLOGICALDATA,
		
		/// <p>
		///   This command reads the logical data (And what the hell is this?...):
		///   <table>
		///     <tr>
		///       <td>0x09</td>
		///       <td>0x00</td>
		///     </tr>
		///   </table>
		/// </p>
		/// <p>
		///   The oscilloscope returns the logical data, which is 64 or 512 bytes long:
		///   <table>
		///     <tr>
		///       <td>?</td>
		///       <td>?</td>
		///       <td>?</td>
		///       <td>...</td>
		///     </tr>
		///   </table>
		/// </p>
		COMMAND_GETLOGICALDATA,
		
		/// <p>
		///   This command isn't used for the DSO-2090 and DSO-5200:
		///   <table>
		///     <tr>
		///       <td>0x0a</td>
		///       <td>...</td>
		///     </tr>
		///   </table>
		/// </p>
		COMMAND_UNKNOWN_0A,
		
		/// <p>
		///   This command isn't used for the DSO-2090 and DSO-5200:
		///   <table>
		///     <tr>
		///       <td>0x0b</td>
		///       <td>...</td>
		///     </tr>
		///   </table>
		/// </p>
		COMMAND_UNKNOWN_0B,
		
		/// <p>
		///   This command sets the sampling rate for the DSO-5200:
		///   <table>
		///     <tr>
		///       <td>0x0c</td>
		///       <td>0x00</td>
		///       <td>SamplerateSlow[0]</td>
		///       <td>SamplerateSlow[1]</td>
		///       <td>SamplerateFast</td>
		///       <td>0x00</td>
		///     </tr>
		///   </table>
		/// </p>
		/// <p>
		///   The values are similar to the ones used on the DSO-2090. The formula is a bit different here:<br />
		///   <i>Samplerate = SamplerateMax / (2comp(SamplerateSlow) * 2 + 4 - SamplerateFast)</i><br />
		///   SamplerateMax is 100 MS/s for the DSO-5200 in default configuration and 250 MS/s in fast rate mode though, the modifications regarding buffer size are the the same that apply for the DSO-2090.
		/// </p>
		COMMAND_SETSAMPLERATE5200,
		
		/// <p>
		///   This command sets the trigger position and buffer size for the DSO-5200:
		///   <table>
		///     <tr>
		///       <td>0x0d</td>
		///       <td>0x00</td>
		///       <td>TriggerPositionPre[0]</td>
		///       <td>TriggerPositionPre[1]</td>
		///       <td>#DTriggerPositionUsed</td>
		///     </tr>
		///   </table>
		///   <table>
		///     <tr>
		///       <td>0xff</td>
		///       <td>TriggerPositionPost[0]</td>
		///       <td>TriggerPositionPost[1]</td>
		///       <td>DBufferBits</td>
		///       <td>0xff</td>
		///     </tr>
		///   </table>
		/// </p>
		/// <p>
		///   The TriggerPositionPre and TriggerPositionPost values set the pretrigger position. Both values have a range from 0xd7ff (0xc7ff for 14 kiS buffer) to 0xfffe. On the left side (0 %) the TriggerPositionPre value is minimal, on the right side (100 %) it is maximal. The TriggerPositionPost value is maximal for 0 % and minimal for 100%.
		/// </p>
		COMMAND_SETBUFFER5200,
		
		/// <p>
		///   This command sets the channel and trigger settings for the DSO-5200:
		///   <table>
		///     <tr>
		///       <td>0x0e</td>
		///       <td>0x00</td>
		///       <td>ETsrBits</td>
		///       <td>0x00</td>
		///       <td>Unknown (0x02)</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///     </tr>
		///   </table>
		/// </p>
		COMMAND_SETTRIGGER5200,
		
		COMMAND_COUNT ///< Total number of commands
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \enum ControlCode                                           hantek/types.h
	/// \brief All supported control commands.
	enum ControlCode {
		/// <p>
		///   The 0xa2 control read/write command gives access to a #ControlValue.
		/// </p>
		CONTROL_VALUE = 0xa2,
		
		/// <p>
		///   The 0xb2 control read command gets the speed level of the USB connection:
		///   <table>
		///     <tr>
		///       <td>#ConnectionSpeed</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///     </tr>
		///   </table>
		/// </p>
		CONTROL_GETSPEED = 0xb2,
		
		/// <p>
		///   The 0xb3 control write command is sent before any bulk command:
		///   <table>
		///     <tr>
		///       <td>0x0f</td>
		///       <td>#CommandIndex</td>
		///       <td>#CommandIndex</td>
		///       <td>#CommandIndex</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///     </tr>
		///   </table>
		/// </p>
		CONTROL_BEGINCOMMAND = 0xb3,
		
		/// <p>
		///   The 0xb4 control write command sets the channel offsets:
		///   <table>
		///     <tr>
		///       <td>Ch1Offset[1]</td>
		///       <td>Ch1Offset[0]</td>
		///       <td>Ch2Offset[1]</td>
		///       <td>Ch2Offset[0]</td>
		///       <td>TriggerOffset[1]</td>
		///       <td>TriggerOffset[0]</td>
		///     </tr>
		///   </table>
		///   <table>
		///     <tr>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///     </tr>
		///   </table>
		/// </p>
		CONTROL_SETOFFSET = 0xb4,
		
		/// <p>
		///   The 0xb5 control write command sets the internal relays:
		///   <table>
		///     <tr>
		///       <td>0x00</td>
		///       <td>0x04 ^ (Ch1Gain < 1 V)</td>
		///       <td>0x08 ^ (Ch1Gain < 100 mV)</td>
		///       <td>0x02 ^ (Ch1Coupling == DC)</td>
		///     </tr>
		///   </table>
		///   <table>
		///     <tr>
		///       <td>0x20 ^ (Ch2Gain < 1 V)</td>
		///       <td>0x40 ^ (Ch2Gain < 100 mV)</td>
		///       <td>0x10 ^ (Ch2Coupling == DC)</td>
		///       <td>0x01 ^ (Trigger == EXT)</td>
		///     </tr>
		///   </table>
		///   <table>
		///     <tr>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///       <td>0x00</td>
		///     </tr>
		///   </table>
		/// </p>
		/// <p>
		///   The limits are <= instead of < for the 10 bit models, since those support voltages up to 10 V.
		/// </p>
		CONTROL_SETRELAYS = 0xb5
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \enum ControlValue                                          hantek/types.h
	/// \brief All supported values for control commands.
	enum ControlValue {
		/// Value 0x08 is the calibration data for the channels offsets. It holds the offset value for the top and bottom of the scope screen for every gain step on every channel. The data is stored as a three-dimensional array:<br />
		/// <i>channelLevels[channel][#Gain][#LevelOffset]</i>
		VALUE_CHANNELLEVEL = 0x08,
		
		/// Value 0x0a is the address of the device. It has a length of one byte.
		VALUE_DEVICEADDRESS = 0x0a,
		
		/// Value 0x60 seems to be some calibration data with a length of four bytes. What it is good for is unknown so far.
		VALUE_CALIBRATIONDATA = 0x60,
		
		/// Value 0x70 is an additional data that is used on the DSO-5200, it's six bytes long.
		VALUE_UNKNOWN_70 = 0x70
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \enum Model                                                 hantek/types.h
	/// \brief All supported Hantek DSO models.
	enum Model {
		MODEL_UNKNOWN = -1,
		MODEL_DSO2090, MODEL_DSO2100, MODEL_DSO2150, MODEL_DSO2250,
		MODEL_DSO5200, MODEL_DSO5200A,
		MODEL_COUNT
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \enum ConnectionSpeed                                       hantek/types.h
	/// \brief The speed level of the USB connection.
	enum ConnectionSpeed {
		CONNECTION_FULLSPEED = 0, ///< FullSpeed USB, 64 byte bulk transfers
		CONNECTION_HIGHSPEED = 1  ///< HighSpeed USB, 512 byte bulk transfers
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \enum Samplerate                                            hantek/types.h
	/// \brief The different samplerates supported by Hantek DSOs.
	enum Samplerate {
		SAMPLERATE_100MS,
		SAMPLERATE_50MS, SAMPLERATE_25MS, SAMPLERATE_10MS,
		SAMPLERATE_5MS, SAMPLERATE_2_5MS, SAMPLERATE_1MS,
		SAMPLERATE_500KS, SAMPLERATE_250KS, SAMPLERATE_100KS,
		SAMPLERATE_50KS, SAMPLERATE_25KS, SAMPLERATE_10KS,
		SAMPLERATE_5KS, SAMPLERATE_2_5KS, SAMPLERATE_1KS,
		SAMPLERATE_COUNT
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \enum Gain                                                  hantek/types.h
	/// \brief The different gain steps supported by Hantek DSOs.
	enum Gain {
		GAIN_10MV, GAIN_20MV, GAIN_50MV,
		GAIN_100MV, GAIN_200MV, GAIN_500MV,
		GAIN_1V, GAIN_2V, GAIN_5V,
		GAIN_COUNT
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \enum UsedChannels                                          hantek/types.h
	/// \brief The enabled channels.
	enum UsedChannels {
		USED_CH1, USED_CH2,
		USED_CH1CH2
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \enum TriggerSource                                         hantek/types.h
	/// \brief The possible trigger sources.
	enum TriggerSource {
		TRIGGER_CH2, TRIGGER_CH1,
		TRIGGER_ALT,
		TRIGGER_EXT, TRIGGER_EXT10
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \enum BufferSize                                            hantek/types.h
	/// \brief The size of the sample buffer.
	enum BufferSize {
		BUFFER_SMALL = 10240,
		BUFFER_LARGE5200 = 14336,
		BUFFER_LARGE = 32768
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \enum BufferSizeId                                          hantek/types.h
	/// \brief The size id for CommandSetTriggerAndSamplerate.
	enum BufferSizeId {
		BUFFERID_ROLL = 0, ///< Used for the roll mode
		BUFFERID_SMALL, ///< The standard buffer with 10240 samples
		BUFFERID_LARGE ///< The large buffer, 32768 samples (14336 for DSO-5200)
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \enum CaptureState                                          hantek/types.h
	/// \brief The different capture states which the oscilloscope returns.
	enum CaptureState {
		CAPTURE_WAITING = 0,
		CAPTURE_SAMPLING = 1,
		CAPTURE_READY = 2,
		CAPTURE_READY5200 = 7
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \enum CommandIndex                                          hantek/types.h
	/// \brief Can be set by CONTROL_BEGINCOMMAND, maybe it allows multiple commands at the same time?
	enum CommandIndex {
		COMMANDINDEX_0 = 0x03, ///< Used most of the time
		COMMANDINDEX_1 = 0x0a,
		COMMANDINDEX_2 = 0x09,
		COMMANDINDEX_3 = 0x01, ///< Used for #COMMAND_SETTRIGGERANDSAMPLERATE sometimes
		COMMANDINDEX_4 = 0x02,
		COMMANDINDEX_5 = 0x08
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \enum LevelOffset                                           hantek/types.h
	/// \brief The array indicies for the CalibrationData.
	enum LevelOffset {
		OFFSET_START, ///< The channel level at the bottom of the scope
		OFFSET_END, ///< The channel level at the top of the scope
		OFFSET_COUNT
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \enum DTriggerPositionUsed                                  hantek/types.h
	/// \brief The trigger position states for the 0x0d command.
	enum DTriggerPositionUsed {
		DTRIGGERPOSITION_OFF = 0, ///< Used for Roll mode
		DTRIGGERPOSITION_ON = 7 ///< Used for normal operation
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \struct FilterBits                                          hantek/types.h
	/// \brief The bits for COMMAND_SETFILTER.
	struct FilterBits {
		unsigned char channel1:1; ///< Set to true when channel 1 isn't used
		unsigned char channel2:1; ///< Set to true when channel 2 isn't used
		unsigned char trigger:1; ///< Set to true when trigger isn't used
		unsigned char reserved:5; ///< Unused bits
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \struct GainBits                                            hantek/types.h
	/// \brief The gain bits for COMMAND_SETGAIN.
	struct GainBits {
		unsigned char channel1:2; ///< Gain for CH1, 0 = 1e* V, 1 = 2e*, 2 = 5e*
		unsigned char channel2:2; ///< Gain for CH1, 0 = 1e* V, 1 = 2e*, 2 = 5e*
		unsigned char reserved:4; ///< Unused bits
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \struct Tsr1Bits                                            hantek/types.h
	/// \brief Trigger and samplerate bits (Byte 1).
	struct Tsr1Bits {
		unsigned char triggerSource:2; ///< The trigger source, see Hantek::TriggerSource
		unsigned char bufferSize:3; ///< See #BufferSizeId
		unsigned char samplerateFast:3; ///< samplerate value for fast sampling rates
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \struct Tsr2Bits                                            hantek/types.h
	/// \brief Trigger and samplerate bits (Byte 2).
	struct Tsr2Bits {
		unsigned char usedChannels:2; ///< Used channels, see Hantek::UsedChannels
		unsigned char fastRate:1; ///< true, if one channels uses all buffers
		unsigned char triggerSlope:1; ///< The trigger slope, see Dso::Slope, inverted when Tsr1Bits.samplerateFast is uneven
		unsigned char reserved:4; ///< Unused bits
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \struct DBufferBits                                         hantek/types.h
	/// \brief Buffer mode bits for 0x0d command.
	struct DBufferBits {
		unsigned char triggerPositionUsed:3; ///< See #DTriggerPositionUsed
		unsigned char bufferSize:3; ///< See #BufferSizeId
		unsigned char reserved:2; ///< Unused bits
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \struct ETsrBits                                            hantek/types.h
	/// \brief Trigger and samplerate bits for 0x0e command.
	struct ETsrBits {
		unsigned char fastRate:1; ///< false, if one channels uses all buffers
		unsigned char usedChannels:2; ///< Used channels, see Hantek::UsedChannels
		unsigned char triggerSource:2; ///< The trigger source, see Hantek::TriggerSource
		unsigned char triggerSlope:2; ///< The trigger slope, see Dso::Slope
		unsigned char triggerPulse:1; ///< Pulses are causing trigger events
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \class CommandSetFilter                                     hantek/types.h
	/// \brief The COMMAND_SETFILTER builder.
	class CommandSetFilter : public Helper::DataArray<unsigned char> {
		public:
			CommandSetFilter();
			CommandSetFilter(bool channel1, bool channel2, bool trigger);
			
			bool getChannel(unsigned int channel);
			void setChannel(unsigned int channel, bool filtered);
			bool getTrigger();
			void setTrigger(bool filtered);
		
		private:
			void init();
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \class CommandSetTriggerAndSamplerate                       hantek/types.h
	/// \brief The COMMAND_SETTRIGGERANDSAMPLERATE builder.
	class CommandSetTriggerAndSamplerate : public Helper::DataArray<unsigned char> {
		public:
			CommandSetTriggerAndSamplerate();
			CommandSetTriggerAndSamplerate(unsigned short int samplerateSlow, unsigned long int triggerPosition, unsigned char triggerSource = 0, unsigned char bufferSize = 0, unsigned char samplerateFast = 0, unsigned char usedChannels = 0, bool fastRate = false, unsigned char triggerSlope = 0);
			
			unsigned char getTriggerSource();
			void setTriggerSource(unsigned char value);
			unsigned char getBufferSize();
			void setBufferSize(unsigned char value);
			unsigned char getSamplerateFast();
			void setSamplerateFast(unsigned char value);
			unsigned char getUsedChannels();
			void setUsedChannels(unsigned char value);
			bool getFastRate();
			void setFastRate(bool fastRate);
			unsigned char getTriggerSlope();
			void setTriggerSlope(unsigned char slope);
			unsigned short int getSamplerateSlow();
			void setSamplerateSlow(unsigned short int samplerate);
			unsigned long int getTriggerPosition();
			void setTriggerPosition(unsigned long int position);
		
		private:
			void init();
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \class CommandForceTrigger                                  hantek/types.h
	/// \brief The COMMAND_FORCETRIGGER builder.
	class CommandForceTrigger : public Helper::DataArray<unsigned char> {
		public:
			CommandForceTrigger();
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \class CommandCaptureStart                                  hantek/types.h
	/// \brief The COMMAND_CAPTURESTART builder.
	class CommandCaptureStart : public Helper::DataArray<unsigned char> {
		public:
			CommandCaptureStart();
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \class CommandTriggerEnabled                                hantek/types.h
	/// \brief The COMMAND_TRIGGERENABLED builder.
	class CommandTriggerEnabled : public Helper::DataArray<unsigned char> {
		public:
			CommandTriggerEnabled();
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \class CommandGetData                                       hantek/types.h
	/// \brief The COMMAND_GETDATA builder.
	class CommandGetData : public Helper::DataArray<unsigned char> {
		public:
			CommandGetData();
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \class CommandGetCaptureState                               hantek/types.h
	/// \brief The COMMAND_GETCAPTURESTATE builder.
	class CommandGetCaptureState : public Helper::DataArray<unsigned char> {
		public:
			CommandGetCaptureState();
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \class ResponseGetCaptureState                              hantek/types.h
	/// \brief The parser for the COMMAND_GETCAPTURESTATE response.
	class ResponseGetCaptureState : public Helper::DataArray<unsigned char> {
		public:
			ResponseGetCaptureState();
			
			CaptureState getCaptureState();
			unsigned int getTriggerPoint();
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \class CommandSetGain                                       hantek/types.h
	/// \brief The COMMAND_SETGAIN builder.
	class CommandSetGain : public Helper::DataArray<unsigned char> {
		public:
			CommandSetGain();
			CommandSetGain(unsigned char channel1, unsigned char channel2);
			
			unsigned char getGain(unsigned int channel);
			void setGain(unsigned int channel, unsigned char value);
		
		private:
			void init();
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \class CommandSetLogicalData                                hantek/types.h
	/// \brief The COMMAND_SETLOGICALDATA builder.
	class CommandSetLogicalData : public Helper::DataArray<unsigned char> {
		public:
			CommandSetLogicalData();
			CommandSetLogicalData(unsigned char data);
			
			unsigned char getData();
			void setData(unsigned char data);
		
		private:
			void init();
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \class CommandGetLogicalData                                hantek/types.h
	/// \brief The COMMAND_GETLOGICALDATA builder.
	class CommandGetLogicalData : public Helper::DataArray<unsigned char> {
		public:
			CommandGetLogicalData();
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \class ControlGetSpeed                                      hantek/types.h
	/// \brief The CONTROL_GETSPEED parser.
	class ControlGetSpeed : public Helper::DataArray<unsigned char> {
		public:
			ControlGetSpeed();
			
			ConnectionSpeed getSpeed();
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \class ControlBeginCommand                                  hantek/types.h
	/// \brief The CONTROL_BEGINCOMMAND builder.
	class ControlBeginCommand : public Helper::DataArray<unsigned char> {
		public:
			ControlBeginCommand(CommandIndex index = COMMANDINDEX_0);
			
			CommandIndex getIndex();
			void setIndex(CommandIndex index);
		
		private:
			void init();
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \class ControlSetOffset                                     hantek/types.h
	/// \brief The CONTROL_SETOFFSET builder.
	class ControlSetOffset : public Helper::DataArray<unsigned char> {
		public:
			ControlSetOffset();
			ControlSetOffset(unsigned short int channel1, unsigned short int channel2, unsigned short int trigger);
			
			unsigned short int getChannel(unsigned int channel);
			void setChannel(unsigned int channel, unsigned short int offset);
			unsigned short int getTrigger();
			void setTrigger(unsigned short int level);
		
		private:
			void init();
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \class ControlSetRelays                                     hantek/types.h
	/// \brief The CONTROL_SETRELAYS builder.
	class ControlSetRelays : public Helper::DataArray<unsigned char> {
		public:
			ControlSetRelays(bool ch1Below1V = false, bool ch1Below100mV = false, bool ch1CouplingDC = false, bool ch2Below1V = false, bool ch2Below100mV = false, bool ch2CouplingDC = false, bool triggerExt = false);
			
			bool getBelow1V(unsigned int channel);
			void setBelow1V(unsigned int channel, bool below);
			bool getBelow100mV(unsigned int channel);
			void setBelow100mV(unsigned int channel, bool below);
			bool getCoupling(unsigned int channel);
			void setCoupling(unsigned int channel, bool dc);
			bool getTrigger();
			void setTrigger(bool ext);
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \class CommandSetSamplerate5200                             hantek/types.h
	/// \brief The COMMAND_SETSAMPLERATE5200 builder.
	class CommandSetSamplerate5200 : public Helper::DataArray<unsigned char> {
		public:
			CommandSetSamplerate5200();
			CommandSetSamplerate5200(unsigned short int samplerateSlow, unsigned char samplerateFast);
			
			unsigned char getSamplerateFast();
			void setSamplerateFast(unsigned char value);
			unsigned short int getSamplerateSlow();
			void setSamplerateSlow(unsigned short int samplerate);
		
		private:
			void init();
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \class CommandSetBuffer5200                                 hantek/types.h
	/// \brief The COMMAND_SETBUFFER5200 builder.
	class CommandSetBuffer5200 : public Helper::DataArray<unsigned char> {
		public:
			CommandSetBuffer5200();
			CommandSetBuffer5200(unsigned short int triggerPositionPre, unsigned short int triggerPositionPost, unsigned char usedPre = 0, unsigned char usedPost = 0, unsigned char bufferSize = 0);
			
			unsigned short int getTriggerPositionPre();
			void setTriggerPositionPre(unsigned short int value);
			unsigned short int getTriggerPositionPost();
			void setTriggerPositionPost(unsigned short int value);
			unsigned char getUsedPre();
			void setUsedPre(unsigned char value);
			unsigned char getUsedPost();
			void setUsedPost(unsigned char value);
			unsigned char getBufferSize();
			void setBufferSize(unsigned char value);
		
		private:
			void init();
	};
	
	//////////////////////////////////////////////////////////////////////////////
	/// \class CommandSetTrigger5200                                hantek/types.h
	/// \brief The COMMAND_SETTRIGGER5200 builder.
	class CommandSetTrigger5200 : public Helper::DataArray<unsigned char> {
		public:
			CommandSetTrigger5200();
			CommandSetTrigger5200(unsigned char triggerSource, unsigned char usedChannels, bool fastRate = false, unsigned char triggerSlope = 0, unsigned char triggerPulse = 0);
			
			unsigned char getTriggerSource();
			void setTriggerSource(unsigned char value);
			unsigned char getUsedChannels();
			void setUsedChannels(unsigned char value);
			bool getFastRate();
			void setFastRate(bool fastRate);
			unsigned char getTriggerSlope();
			void setTriggerSlope(unsigned char slope);
			bool getTriggerPulse();
			void setTriggerPulse(bool pulse);
		
		private:
			void init();
	};
}


#endif
