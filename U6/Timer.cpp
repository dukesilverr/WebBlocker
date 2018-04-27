#include <ctime>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <cstdlib>
#include <list>
#include <sstream>
#include <windows.h>
#include "Timer.h"
#include <cassert>
#include <exception>
#include <stdexcept>
//#define NDEBUG
#define DEBUG

#define DEBUG_PREFIX "--> "
namespace Project {
	class Timer::Implementation {
	private:
		clock_t timerh;
		clock_t timermin;
		clock_t timersec;
	public:
		friend class Timer;
		Implementation() {
		
		}
		~Implementation() {
		
		}
	};
	/*Timer::Timer(const Timer &other) : impl(new Implementation(*(other.impl))) {
	}
	Timer& Timer::operator=(const Timer &other) {
		if (&other != this) {
			delete impl;
		}
		impl = new Implementation(*(other.impl));
		return *this;
	}
	*/
	void Timer::printTest1(bool result)
	{
		if (result) {
			std::clog << "OK!" << std::endl;
		}
		else {
			std::clog << "Testing failed." << std::endl;
		}
	}

	/*std::string Timer::getWeb() {
		std::stringstream ss;
		ss << impl->webpage;
		return ss.str();
	}
	*/
	Timer::Timer(clock_t timerh, clock_t timermin, clock_t timersec ) : impl(new Timer::Implementation()) {
#ifdef DEBUG
		std::clog << DEBUG_PREFIX "Constructor Timer (3 arg) with default values of time(0:0:0) called" << std::endl;
#endif 
		init();
		setTimerh(timerh);
		setTimermin(timermin);
		setTimersec(timersec);
	}

	void Timer::init()
	{
#ifdef DEBUG
		std::clog << DEBUG_PREFIX "Initializing default timer values!" << std::endl;
#endif	
		impl->timerh = 0;// username is atleast one symbol
		impl->timermin = 0;// password can be empty?
		impl->timersec = 0;
	}
	Timer::Timer() : impl(new Timer::Implementation())
	{
		init();
#ifdef DEBUG
		std::clog << DEBUG_PREFIX "Constructor Timer default called" << std::endl;
#endif 
	}

	Timer::~Timer() {
		delete impl;
#ifdef DEBUG
		std::clog << DEBUG_PREFIX "Destructor Timer called" << std::endl;
#endif 
	}
	void Timer::setTimerh(clock_t h) {
#ifdef DEBUG
		std::clog << DEBUG_PREFIX "SetTimerh (" << h << ") called" << std::endl;
#endif 
		if (h >= 0 && h < 24) {
			impl->timerh = h;
		}
		else {
#ifdef DEBUG
			std::clog << DEBUG_PREFIX " (" << h << ") - invalid argument" << std::endl;
#endif 
			throw std::invalid_argument("Hours must be between 0 and 23!");
		}
	}



	void Timer::setTimermin(clock_t min) {
#ifdef DEBUG
		std::clog << DEBUG_PREFIX "SetTimermin (" << min << ") called" << std::endl;
#endif 	
		if (min >= 0 && min < 60) {
			impl->timermin = min;
		}
		else {
#ifdef DEBUG
			std::clog << DEBUG_PREFIX " (" << min << ") - invalid argument" << std::endl;
#endif 
			throw std::invalid_argument("Minutes must be between 0 and 59!");
		}
	}



	void Timer::setTimersec(clock_t sec) {
#ifdef DEBUG
		std::clog << DEBUG_PREFIX "SetTimersec (" << sec << ") called" << std::endl;
#endif 
		if (sec >= 0 && sec < 60) {
			impl->timersec = sec;
		}
		else {
#ifdef DEBUG
			std::clog << DEBUG_PREFIX " (" << sec << ") - invalid argument" << std::endl;
#endif 
			throw std::invalid_argument("Seconds must be between 0 and 59!");
		}
	}


	/*WebPage& Timer::getWeb()
	{
#ifdef DEBUG2
		clog << DEBUG_PREFIX "get_bike() called" << endl;
#endif
		return i->webpage;
	}
	*/
	clock_t Timer::getTimerh() {
		return impl->timerh;
	}
	clock_t Timer::getTimermin() {
		return impl->timermin;
	}
	clock_t Timer::getTimersec() {
		return impl->timersec;
	}
	template std::string Timer::toString() const;
	std::ostream & operator<<(std::ostream & os, const Timer& p) 
	{
		os << p.toString<std::string>();
		return os;
	}

	std::istream & operator >> (std::istream & is, Timer& p)
	{	
		clock_t timerh;
		clock_t timermin;
		clock_t timersec;
		is >> timerh;
		is >> timermin;
		is >> timersec;
		p.setTimerh(timerh);
		p.setTimermin(timermin);
		p.setTimersec(timersec);
		return is;
	}

	void Timer::testOperator1()
	{
		Timer u1(0,5,0);
		std::string str1(u1.toString<std::string>());
		try
		{
			std::stringstream ss;
			ss << u1;
			ss >> u1;
			std::string str2(u1.toString<std::string>());
			Timer::printTest1(str1.compare(str2) == 0);
		}
		catch (...)
		{
			Timer::printTest1(false);
#ifdef DEBUG
			std::clog << DEBUG_PREFIX "Operator failed! " << std::endl;
#endif

		}
	}

	void Timer::timerTest1() {
		Timer t(0,0,3);
		t.setTimersec(2);
		if (t.getTimersec() == 2) {
			std::clog << "OK!" << std::endl;

		}
		else {
			std::clog << "Test 1 failed!" << std::endl;
		}
	}


	void Timer::timerTest2() {
		Timer t(0,0,1);
		try {
			t.setTimersec(-9);
			throw 1;

		}
		catch (std::invalid_argument) {
			std::clog << "OK!" << std::endl;
		}
		catch (...) {
			std::clog << "Test 2 failed!" << std::endl;
		}
	}



	void Timer::timerTest3() {
		Timer t(0,0,5);
		int t1 = t.getTimersec();
		try {
			t.setTimersec(100);
		}
		catch (...) {
		}
		int t2 = t.getTimersec();
		if (t1 == t2) {
			std::clog << "OK!" << std::endl;
		}
		else {
			std::clog << "Test 3 failed!" << std::endl;
		}
	}

	template <typename T>
	T Timer::toString() const{
		std::stringstream ss;
		ss << impl->timerh <<" " << impl->timermin<< " " << impl->timersec << std::endl;
		return ss.str();
	}
	template std::string Timer::toString() const;

	void Timer::timerGo() {
		clock_t sec = 0;
		clock_t min = 0;
		clock_t hour = 0;
		while (true) {
			if ((sec == getTimersec()) && (min == getTimermin()) && (hour == getTimerh())) {
				break;
			}
			Sleep(1000);
			sec = sec + 1;
			if (sec == 60) {
				min = min + 1;
				sec = 0;
			}
			if (min == 60) {
				hour = hour + 1;
				min = 0;
			}
			//system("CLS");
#ifdef DEBUG
			std::clog << DEBUG_PREFIX "Method TimerGo called " << hour << ":" << min << ":" << sec << std::endl;
#endif
		}
		
	}
	

}