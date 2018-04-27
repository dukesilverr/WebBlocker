#ifndef USER_H
#define USER_H
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
namespace Project {
	//!Klasës User paskirtis inicializuoti vartotojà, leisti registruotis, prisijungti.
	class User {
		//!Kintamieji laiko vartotojo vardo, pavardës, slaptaþodþio reikðmes.
		std::string name;
		std::string surname;
		std::string password;
		//!Kintamieji skirti objektø numeracijai ir skaièiavimui.
		int personId;
		static int lastId;
		static int number;
		//!Metodas tikrina ar teisinga paduota eilutë. (Vardas,pavardë  - ið didþiosios raidës, ne tuðèias þodis ir ne tarpas.)
		bool correct(std::string word);
		//!Metodas tikrina ar eilutës (vartotojo slaptaþodþio) ilgis nemaþesnis nei 5.
		bool correctPassword(std::string word);
		//!Metodas inicializuoja klasës objekto laukus, jei jø reikðmës atitinka reikalavimus.
		void initialize(std::string name, std::string surname, std::string password);
	public:	
		//!Metodas gràþina gyvø objektø skaièiø klasëje.
		static int getNumberOfObjects();
		//!Perraðomi I/O operatoriai
		friend std::ostream& operator<<(std::ostream& os, const User& p);
		friend std::istream& operator >> (std::istream& is, User& p);
		//!Numatytasis konstruktorius.
		User();
		//!Konstruktorius inicializuojanti objekto reikðmes - vardà ir pavardæ.
		User(std::string name, std::string surname);
		//!Konstruktorius inicializuojanti objekto reikðmes - vardà ir pavardæ, slaptaþodá.
		User(std::string name, std::string surname, std::string password);
		//!Destruktorius.
		~User();
		//!Setter'iai ir getter'iai.
		void setName(std::string n);
		void setPassword(std::string pasw);
		void setSurname(std::string s);
		int getPersonId();
		std::string getName();
		std::string getPassword();
		std::string getSurname();
		//!Metodas gràþinantis tekstinæ objekto reprezentacijà.
		std::string toString();
		//!Klasës testavimo metodai.
		static void printTest(bool result);
		static void testOperator();
		static void userTest1();
		static void userTest2();
		static void userTest3();
	};
}
#endif
