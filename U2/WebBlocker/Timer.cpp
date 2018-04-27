#include <string>
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
#define NDEBUG
//#define DEBUG

#define DEBUG_PREFIX "--> "
using namespace Project;

		std::ostream & Project::operator<<(std::ostream & os, const Timer& p)
	{
		os << p.timerh << ":" << p.timermin << ":" << p.timersec;
		return os; // super
	}

	std::istream & Project::operator >> (std::istream & is, Timer& p)
	{
		is >> p.timerh >> p.timermin >> p.timerh;
		return is;
	}
	//super
	Timer::Timer() {
	#ifdef DEBUG
		std::clog << DEBUG_PREFIX "Constructor Timer (0 arg) with default values of time(0:0:0) called" << std::endl;
	#endif 
		timerh = 0; //super
		timermin = 0;
		timersec = 0;
	}
	Timer::~Timer(){
	#ifdef DEBUG
		std::clog << DEBUG_PREFIX "Destructor Timer called" << std::endl;
	#endif 
	}


	void Timer::setTimerh(clock_t h) {
	#ifdef DEBUG
		std::clog << DEBUG_PREFIX "SetTimerh (" << h << ") called" << std::endl;
	#endif 
		if (h >= 0 && h < 24) {
			timerh = h;
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
			timermin = min;
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
			timersec = sec;
		}
		else {
	#ifdef DEBUG
			std::clog << DEBUG_PREFIX " (" << sec << ") - invalid argument" << std::endl;
	#endif 
			throw std::invalid_argument("Seconds must be between 0 and 59!");
		}
	}


	clock_t Timer::getTimerh() {
		return timerh;
	}
	clock_t Timer::getTimermin() {
		return timermin;
	}
	clock_t Timer::getTimersec() {
		return timersec;
	}

	std::string Timer::toString() {
		std::stringstream ss;
		ss << timerh << ":" << timermin << ":" << timersec << std::endl;
		return ss.str();
	}


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
			system("CLS");
	#ifdef DEBUG
			std::clog << DEBUG_PREFIX "Method TimerGo called " << hour << ":" << min << ":" << sec << std::endl;
	#endif
		}
		system("pause");
	}

	void Project::Timer::printTest1(bool result)
	{
		if (result){
			std::clog << "OK!" << std::endl;
		}
		else{
			std::clog << "Testing failed." << std::endl;
		}
	}
	
	void Timer::testOperator1()
	{
		Timer u1;
		u1.setTimermin(5);
		std::string str1(u1.toString());
		try
		{
			std::stringstream ss;
			ss << u1;
			ss >> u1;
			std::string str2(u1.toString());
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
		Timer t;
		t.setTimersec(2);
		if (t.getTimersec() == 2) {
			std::clog << "OK!" << std::endl;

		}
		else {
			std::clog << "Test 1 failed!" << std::endl;
		}
	}


	void Timer::timerTest2() {
		Timer t;
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
		Timer t;
		t.setTimersec(5);
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