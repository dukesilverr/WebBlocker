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
namespace Project{
	class User::Implementation2 {
	private:
		std::string loginName;
		std::string name;
		std::string surname;
		std::string password;
		int personId;
		static int lastId;
		static int number;
		
	public:
		friend class User;	
		bool correct(std::string word) {
			if ((!word.empty()) && (word.length() != 0) && (word.compare("")) && (isupper(word[0]))) {
				return true;
			}
			return false;
		}

		bool correctPassword(std::string word) {
			if ((!word.empty()) && (word.length() >= 5) && (word.compare(""))) {
				return true;
			}
			return false;
		}

		void initialize(std::string loginName, std::string name, std::string surname, std::string password) {
			if ((loginName.length() != 0) && (correct(name) == true) && (correct(surname) == true) && (correctPassword(password) == true)) {
				this->name = name;
				this->surname = surname;
				this->password = password;
				this->loginName = loginName;
				personId = lastId++;
				number++;
#ifdef DEBUG
			std::clog << DEBUG_PREFIX "Constructor User (3 arg) called, number++" << std::endl;
#endif
			}
		}

	};

	User::User(const User &other) : impl2(new Implementation2(*(other.impl2))) {
	}
	User& User::operator=(const User &other) {
		if (&other != this) {
			delete impl2;
		}
		impl2 = new Implementation2(*(other.impl2));
		return *this;
	}

	int User::Implementation2::lastId = 0;
	int User::Implementation2::number = 0;
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
	int User::getNumberOfObjects() {
		return User::Implementation2::number;
	}


	User::User() : impl2(new Implementation2()){
		impl2->personId = User::Implementation2::lastId++;
		User::Implementation2::number++;
		#ifdef DEBUG
			std::clog << DEBUG_PREFIX "Constructor User (0 arg) called, number++" << std::endl;
		#endif
	}
		User::User(std::string loginName, std::string name, std::string surname, std::string password) : impl2(new Implementation2()) {
		impl2->initialize(loginName, name, surname, password);
	}

	User::User(std::string name, std::string surname, std::string loginName) : impl2(new Implementation2()) {
		if ((impl2->correct(name) == true) && (impl2->correct(surname) == true)&& (loginName.length()!= 0)) {
			setName(name);
			setSurname(surname);
			setLoginName(loginName);
			impl2->personId = User::Implementation2::lastId++;
			User::Implementation2::number++;
#ifdef DEBUG
			std::clog << DEBUG_PREFIX "Constructor User (2 arg) called, number++" << std::endl;
#endif

		}
	}


	void User::setName(std::string n) {
#ifdef DEBUG
		std::clog << DEBUG_PREFIX "SetName(" << n << ") called" << std::endl;
#endif 
		if (impl2->correct(n) == true) {
			impl2->name = n;
		}
		else {
#ifdef DEBUG
			std::clog << DEBUG_PREFIX " (" << n << ") - invalid argument" << std::endl;
#endif 
			throw std::invalid_argument("Name must start with Upper letter and not be empty! Bad method correct.");
		}
	}

	void User::setLoginName(std::string n) {
#ifdef DEBUG
		std::clog << DEBUG_PREFIX "SetLoginName(" << n << ") called" << std::endl;
#endif 
		if (n.length()!= 0) {
			impl2->loginName = n;
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
		if (impl2->correctPassword(pasw) == true) {
			impl2->password = pasw;
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
		if (impl2->correct(s) == true) {
			impl2->surname = s;
		}
		else {
#ifdef DEBUG
			std::clog << DEBUG_PREFIX " (" << s << ") - invalid argument" << std::endl;
#endif 
			throw std::invalid_argument("Surname must start with Upper letter and not be empty! Bad method correct.");
		}
	}


	int User::getPersonId() {
		return impl2->personId;
	}
	std::string User::getName() {
		return impl2->name;
	}
	std::string User::getLoginName() {
		return impl2->loginName;
	}
	std::string User::getPassword() {
		return impl2->password;
	}
	std::string User::getSurname() {
		return impl2->surname;
	}



	std::ostream & operator<<(std::ostream & os,  User& p)
	{
		os << p.toString();
		return os;
	}

	std::istream & operator >> (std::istream & is, User& p)
	{
		std::string loginName;
		std::string name;
		std::string surname;
		std::string password;
		is >> loginName;
		is >> name;
		is >> surname;
		is >> password;
		p.setLoginName(loginName);
		p.setName(name);
		p.setSurname(surname);
		p.setPassword(password);
		return is;
	}





	void User::testOperator()
	{
		User u1("Ignelio","Ignas", "Labalaukis", "12345678");
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
		u.setLoginName("Ignas123");
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
		u.setLoginName("Salomenka");
		u.setName("Salomeja");
		u.setSurname("Nerissssss");
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
		ss << impl2->loginName << ";" << impl2->password << ";" << impl2->name << ";" << impl2->surname << std::endl;
		return ss.str();
	}

	User::~User(void) {
		User::Implementation2::number--;
		delete impl2;
#ifdef DEBUG
		std::clog << DEBUG_PREFIX "Destructor User called, number--" << std::endl;
#endif
	}
}
