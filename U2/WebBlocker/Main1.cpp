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
#include "User.h"
#include "WebPage.h"
#include <cassert>
#include <exception>
#include <stdexcept>

using namespace std;
using namespace Project;

int main() {
	try {
		streambuf *clog_backup = clog.rdbuf();
		streambuf *cerr_backup = cerr.rdbuf();
		fstream logfile;
		streampos init_pos;
		logfile.open("log.txt", fstream::out);
		if (logfile.is_open())
		{
			clog.rdbuf(logfile.rdbuf());
			cerr.rdbuf(logfile.rdbuf());
			logfile << "Timer class test started" << endl;
			Timer::timerTest1();
			Timer::timerTest2();
			Timer::timerTest3();
			Timer::testOperator1();
			logfile << "Timer testing finished" << endl;
			logfile << "User class test started" << endl;
			User::userTest1();
			User::userTest2();
			User::userTest3();
			User::testOperator();
			logfile << "User testing finished" << endl;
			logfile << "WebPage class test started" << endl;
			WebPage::webTest1();
			WebPage::webTest2();
			WebPage::webTest3();
			WebPage::testOperator2();


			logfile << "WebPage testing finished" << endl;
			logfile.close();
		}
		else
		{
			cout << "Could not open 'log.txt' for writing!" << endl;
		}
		logfile.open("log.txt", fstream::in);
		if (logfile.is_open())
		{
			char line[80];
			while (logfile.good())
			{
				logfile.getline(line, 80);
				cout << line << endl;
			}
		}
		else
		{
			cout << "Could not open 'log.txt' for reading!" << endl;
		}
		clog.rdbuf(clog_backup);
		cerr.rdbuf(cerr_backup);

		system("pause");
	}
	catch (exception& e) {
		cerr << "Error found : " << e.what() << endl;
	}
};
