////////////////////////////////////////////////////////////////////////////////
//
//  OpenHantek
/// \file dsocontrol.h
/// \brief Declares the abstract Control class.
//
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


#ifndef DSOCONTROL_H
#define DSOCONTROL_H


#include <QStringList>
#include <QThread>


#include "dso.h"
#include "helper.h"


class QMutex;


/// \class DsoControl
/// \brief A abstraction layer that enables protocol-independent dso usage.
class DsoControl : public QThread {
	Q_OBJECT
	
	public:
		DsoControl(QObject *parent = 0);
		
		virtual unsigned int getChannelCount() = 0; ///< Get the number of channels for this oscilloscope
		
		const QStringList *getSpecialTriggerSources();
	
	protected:
		bool sampling; ///< true, if the oscilloscope is taking samples
		bool terminate; ///< true, if the thread should be terminated
		
		QStringList specialTriggerSources; ///< Names of the special trigger sources
		
	signals:
		void deviceConnected(); ///< The oscilloscope device has been disconnected
		void deviceDisconnected(); ///< The oscilloscope device has been connected
		void samplingStarted(); ///< The oscilloscope started sampling/waiting for trigger
		void samplingStopped(); ///< The oscilloscope stopped sampling/waiting for trigger
		void statusMessage(const QString &message, int timeout); ///< Status message about the oscilloscope
		void samplesAvailable(const QList<double *> *data, const QList<unsigned int> *size, double samplerate, QMutex *mutex); ///< New sample data is available
	
	public slots:
		virtual void connectDevice();
		virtual void disconnectDevice();
		
		virtual void startSampling();
		virtual void stopSampling();
		
		virtual unsigned long int setSamplerate(unsigned long int samplerate) = 0; ///< Set the samplerate that should be met
		virtual unsigned long int setBufferSize(unsigned long int size) = 0; ///< Set the needed buffer size
		
		virtual int setTriggerMode(Dso::TriggerMode mode) = 0; ///< Set the trigger mode
		virtual int setTriggerSource(bool special, unsigned int id) = 0; ///< Set the trigger source
		virtual double setTriggerLevel(unsigned int channel, double level) = 0; ///< Set the trigger level for a channel
		virtual int setTriggerSlope(Dso::Slope slope) = 0; ///< Set the slope that causes triggering
		virtual double setTriggerPosition(double position) = 0; ///< Set the pretrigger position (0.0 = left, 1.0 = right side)
		
		virtual int setChannelUsed(unsigned int channel, bool used) = 0; ///< Enable/disable a channel
		virtual int setCoupling(unsigned int channel, Dso::Coupling coupling) = 0; ///< Set the coupling for a channel
		virtual double setGain(unsigned int channel, double gain) = 0; ///< Set the gain for a channel
		virtual double setOffset(unsigned int channel, double offset) = 0; ///< Set the graph offset of a channel
		
#ifdef DEBUG
		virtual int stringCommand(QString command) = 0; ///< Sends commands directly, for debugging
#endif
};


#endif
