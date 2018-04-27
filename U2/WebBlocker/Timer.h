#ifndef TIMER_H
#define TIMER_H

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
#include <cassert>
#include <exception>
#include <stdexcept>
namespace Project {
	//!Klasë Timer priskiria teisingas reikðmes valandoms, minutës, sekundëms . Nustaèius laikà, klasës paskirtis paleisti laikmatá.
	class Timer {
		clock_t timerh;
		clock_t timermin;
		clock_t timersec;
	public:
		//!Operatorius atspausdina klasës objekto turiná. 
		friend std::ostream& operator<<(std::ostream& os, const Timer& p); 
		//!Operatorius raðo á objekto turiná.
		friend std::istream& operator >> (std::istream& is, Timer& p);
		//!Konstruktorius be paduodmø parametrø priskiria default'ines reikðmes valandoms, minutëms ir sekundëms (0). 
		Timer();
		//!Destruktorius iðtrina sukurtus klasës Timer objektus.
		~Timer();
		//!Metodas setTimerh priskiria valandoms reikðmæ, jei ji yra tarp 0 ir 23, kitu atvëju meta klaidà.
		void setTimerh(clock_t h);
		//!Metodas setTimermin priskiria minutëms reikðmæ, jei ji yra tarp 0 ir 59, kitu atvëju meta klaidà.
		void setTimermin(clock_t min);
		//!metodas setTimersec() priskiria sekundëms reikðmæ, jei ji yra tarp 0 ir 59, kitu atvëju meta klaidà.
		void setTimersec(clock_t sec);
		//!Metodas getTimerh() gauna priskirtos valandos reikðmæ. 
		clock_t getTimerh();
		//!Metodas getTimermin() gauna priskirtos minutës reikðmæ. 
		clock_t getTimermin();
		//!Metodas getTimersec() gauna priskirtos sekundës reikðmæ. 
		clock_t getTimersec();
		//!Metodas toString paverèia objekto informacijà á tekstinæ eilutæ.
		std::string toString();
		//!Metodas timerGo() pagal priskirtas valandø, minuèiø ir sekundþiø reikðmes paleidþia mini laikmatá.
		void timerGo();
	
		//!Metodas printTest1(bool result) patikrina ar gauta teisinga reikðmë.
		static void printTest1(bool result);
		//!Metodas testOperator1() testuoja ar gerai veikia toString() metodas.
		static void testOperator1();
		//!Kiti testai
		static void timerTest1();
		static void timerTest2();
		static void timerTest3();
	};
}
#endif