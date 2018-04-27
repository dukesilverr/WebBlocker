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
#include "User.h"
#include <cassert>
#include <exception>
#include <stdexcept>
#define NDEBUG
//#define DEBUG
#define DEBUG_PREFIX "--> "
using namespace Project;
	int User::lastId = 0;
	int User::number = 0;
	bool User::correct(std::string word) {
		if ((!word.empty()) && (word.length() != 0) && (word.compare("")) && (isupper(word[0]))) {
			return true;
		}
		return false;
	}


	bool User::correctPassword(std::string word) {
		if ((!word.empty()) && (word.length() >= 5) && (word.compare(""))) {
			return true;
		}
		return false;
	}

	void User::initialize(std::string name, std::string surname, std::string password) {
		if ((correct(name) == true) && (correct(surname) == true) && (correctPassword(password) == true)) {
			this->name = name;
			this->surname = surname;
			this->password = password;
			personId = ++lastId;
			number++;
		#ifdef DEBUG
			std::clog << DEBUG_PREFIX "Constructor User (3 arg) called, number++" << std::endl;
		#endif
		}
	}

	int User::getNumberOfObjects() {
		return number;
	}


	std::ostream & Project::operator<<(std::ostream & os, const User & p)
	{
		os << p.name << " " << p.surname << " " << p.password;
		return os;
	}

	std::istream & Project::operator >> (std::istream & is, User & p)
	{
		is >> p.name >> p.surname >> p.password;
		return is;
	}
	

	User::User() {
		personId = lastId++;
		number++;
		#ifdef DEBUG
			std::clog << DEBUG_PREFIX "Constructor User (0 arg) called, number++" << std::endl;
		#endif
	}

	User::User(std::string name, std::string surname) {
		if ((correct(name) == true) && (correct(surname) == true)) {
			this->name = name;
			this->surname = surname;
			personId = ++lastId;
			number++;
		#ifdef DEBUG
			std::clog << DEBUG_PREFIX "Constructor User (2 arg) called, number++" << std::endl;
		#endif

		}
	}

	User::User(std::string name, std::string surname, std::string password) {
		initialize(name, surname, password);
	}

	void User::setName(std::string n) {
	#ifdef DEBUG
		std::clog << DEBUG_PREFIX "SetName(" << n << ") called" << std::endl;
	#endif 
		if (correct(n) == true) {
			name = n;
		}
		else {
	#ifdef DEBUG
			std::clog << DEBUG_PREFIX " (" << n << ") - invalid argument" << std::endl;
	#endif 
			throw std::invalid_argument("Name must start with Upper letter and not be empty! Bad method correct.");
		}	
	}

	void User::setPassword(std::string pasw) {
	#ifdef DEBUG
		std::clog << DEBUG_PREFIX "SetPassword (" << pasw << ") called" << std::endl;
	#endif 
		if (correctPassword(pasw) == true) {
			password = pasw;
		}
		else {
	#ifdef DEBUG
			std::clog << DEBUG_PREFIX " (" << pasw << ") - invalid argument" << std::endl;
	#endif 
			throw std::invalid_argument("Password must contain 5 characters!!");
		}
	}

	void User::setSurname(std::string s) {
	#ifdef DEBUG
		std::clog << DEBUG_PREFIX "SetSurname (" << s << ") called" << std::endl;
	#endif 
		if (correct(s) == true) {
			surname = s;
		}
		else {
	#ifdef DEBUG
			std::clog << DEBUG_PREFIX " (" << s << ") - invalid argument" << std::endl;
	#endif 
			throw std::invalid_argument("Surname must start with Upper letter and not be empty! Bad method correct.");
		}
	}

	int User::getPersonId() {
		return personId;
	}
	std::string User::getName() {
		return name;
	}
	std::string User::getPassword() {
		return password;
	}
	std::string User::getSurname() {
		return surname;
	}

	void Project::User::printTest(bool result)
	{
		if (result)
		{
			std::clog << "OK!" << std::endl;
		}
		else
		{
			std::clog << "Testing failed." << std::endl;
		}
	}

	void User::testOperator()
	{
		User u1("Ignas", "Labalaukis", "12345678");
		std::string str1(u1.toString());
		try
		{
			std::stringstream ss;
			ss << u1;
			ss >> u1;
			std::string str2(u1.toString());
			User::printTest(str1.compare(str2) == 0);
		}
		catch (...)
		{
			User::printTest(false);
	#ifdef DEBUG
			std::clog << DEBUG_PREFIX "Operator failed! " << std::endl;
	#endif

		}
	}
	void User::userTest1() {
		User u;
		u.setSurname("Labalaukis");
		u.setName("Ignas");
		if (u.getName() == "Ignas") {
			std::clog << "OK!" << std::endl;

		}
		else {
			std::clog << "Test 1 failed!" << std::endl;
		}
	}


	void User::userTest2() {
		User u;
		u.setName("Bronislavas");
		try {
			u.setSurname("abc");
			throw 1;
		}
		catch (std::invalid_argument) {
			std::clog << "OK!" << std::endl;
		}
		catch (...) {
			std::clog << "Test 2 failed!" << std::endl;
		}
	}



	void User::userTest3() {
		User u;
		u.setName("Salomeja");
		u.setSurname("Neris");
		u.setPassword("1234567");
		std::string u1 = u.getPassword();
		try {
			u.setPassword("000");
		}
		catch (...) {
		}
		std::string u2 = u.getPassword();
		if (u1 == u2) {
			std::clog << "OK!" << std::endl;
		}
		else {
			std::clog << "Test 3 failed!" << std::endl;
		}
	}
std::string User::toString() {
		std::stringstream ss;
		ss << name << " " << surname << " " << password << std::endl;
		return ss.str();
	}

	User::~User(void) {
		number--;
	#ifdef DEBUG
		std::clog << DEBUG_PREFIX "Destructor User called, number--" << std::endl;
	#endif
	}

