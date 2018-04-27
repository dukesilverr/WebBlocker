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
#include "Blocker.h"
#include <cassert>
#include <exception>
#include <stdexcept>

using namespace std;
using namespace Project;

int main() {
	try {
		
		cout << "Neregistruotas vartotojas!" << endl;
		cout << "Registracija vartotojo Petras Petraitis, login - Petras, slaptaþodis - 12345 "<< endl;
		Project::User u("Petras", "Petras", "Petraitis", "12345");
		Project::Blocker b;
		b.addUser(u);
		cout << " vartotojø yra :" << b.getUsersCount() << endl;
		cout << "Blokuojamas tinklapis www.one.lt !" << endl;
		Project::WebPage *w = new Project::WebPage("www.one.lt");
		Project::Blocker bl(w);
		
		system("pause");
	}
	catch (exception& e) {
		cerr << "Error found : " << e.what() << endl;
	}
};