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
	class User {
	private:
		class Implementation2;
		Implementation2 *impl2;
	public:
		User(const User &other);
		User& operator=(const User &other);
		static void printTest(bool result);
		friend class Implementation2;
		friend std::ostream& operator<<(std::ostream& os,  User& p);
		friend std::istream& operator >> (std::istream& is, User& p);
		static int getNumberOfObjects();
		User();
		User(std::string loginName, std::string name, std::string surname, std::string password);
		User(std::string loginName, std::string name, std::string surname);
		virtual ~User();
		void setName(std::string n);
		void setLoginName(std::string n);
		void setPassword(std::string pasw);
		void setSurname(std::string s);
		int getPersonId();
		std::string getName();
		std::string getLoginName();
		std::string getPassword();
		std::string getSurname();
		std::string toString();
		static void testOperator();
		static void userTest1();
		static void userTest2();
		static void userTest3();

	};
}
#endif
