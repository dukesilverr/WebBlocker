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
	/*Klasë Timer priskiria teisingas reikðmes valandoms, minutës, sekundëms . Nustaèius laikà, klasës paskirtis paleisti laikmatá.*/
	
	class Timer {
		class Implementation;
		Implementation *impl;
		Timer(const Timer &other);
		Timer& operator=(const Timer &other);
	public:
		friend class Implementation;
		
		//Timer(std::string web);
		//std::string getWeb();
		/*Operatorius atspausdina klasës objekto turiná.  */
		friend std::ostream& operator<<(std::ostream& os, const Timer& p);
		/*Operatorius raðo á objekto turiná.*/
		friend std::istream& operator>>(std::istream& is, Timer& p);
		void init();
		void timerGo();
		/*Konstruktorius be paduodmø parametrø priskiria default'ines reikðmes valandoms, minutëms ir sekundëms (0). */
		Timer();
		Timer(clock_t timerh, clock_t timermin, clock_t timersec);
		/*Destruktorius iðtrina sukurtus klasës Timer objektus.*/
		~Timer();
			/*Metodas setTimerh priskiria valandoms reikðmæ, jei ji yra tarp 0 ir 23, kitu atvëju meta klaidà.*/
		void setTimerh(clock_t h);
		/*Metodas setTimermin priskiria minutëms reikðmæ, jei ji yra tarp 0 ir 59, kitu atvëju meta klaidà.*/
		void setTimermin(clock_t min);
		/*metodas setTimersec() priskiria sekundëms reikðmæ, jei ji yra tarp 0 ir 59, kitu atvëju meta klaidà.*/
		void setTimersec(clock_t sec);
		//WebPage & getWeb();
		/*Metodas getTimerh() gauna priskirtos valandos reikðmæ. */
		clock_t getTimerh();
		/*Metodas getTimermin() gauna priskirtos minutës reikðmæ. */
		clock_t getTimermin();
		/*Metodas getTimersec() gauna priskirtos sekundës reikðmæ. */
		clock_t getTimersec();
		template <typename T>
		/*Metodas toString paverèia objekto informacijà á tekstinæ eilutæ.*/
		T toString() const;
		/*Metodas printTest1(bool result) patikrina ar gauta teisinga reikðmë.*/
		static void printTest1(bool result);
		/*Metodas testOperator1() testuoja ar gerai veikia toString() metodas.*/
		static void testOperator1();

		static void timerTest1();
		static void timerTest2();
		static void timerTest3();
	};
}
#endif