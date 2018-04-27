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
using namespace std;

class WebPage {
private:

	string	webpage;

public:

	WebPage(string webpage) {
		this->webpage = webpage;
	}

	WebPage() {
	}

	~WebPage();

	bool isCorrect(string word) {
		if ((!word.empty()) && (word.length() != 0) && (word.compare(""))) {
			return true;
		}
		return false;

	}

	void setWebpage(string web) {
		if (isCorrect(web) == true) {
			webpage = web;
		}
	}

	string getWebpage() {
		return webpage;
	}

	void writingToFile(string text, string path = "C:\\Windows\\System32\\drivers\\etc\\hosts") {
		ofstream myfile;
		myfile.open(path, ios::app);
		myfile << text <<endl;
		myfile.close();
	}

	string concatWebName(string web) {
		string s = "\n 127.0.0.1  ";
		string name = s + web;
		return name;
	}

	string toString() {
		stringstream ss;
		ss << webpage << endl;
		return ss.str();
	}

	int returnLine(string file, string search) {
		ifstream fileInput;
		string line;
		fileInput.open(file);
		if (fileInput.is_open()) {
			int curLine = 0;
			while (getline(fileInput, line)) {
				curLine++;
				if (line.find(search, 0) != string::npos) {
					return curLine;
				}
			}
		}
		fileInput.close();
	}

	void deleteLines(const string & filename, int start, int skip = 1) {
		ifstream infile(filename.c_str(), ios::in);
		if (infile.is_open()) {
			string line;
			list<string> filelines;
			while (infile) {
				getline(infile, line);
				filelines.push_back(line);
			}
			infile.close();
			list<string>::iterator deletebegin = filelines.begin(), deleteend;
			for (int i = 1; i < start; i++)
				deletebegin++;
			deleteend = deletebegin;
			for (int i = 0; i < skip; i++)
				deleteend++;
			filelines.erase(deletebegin, deleteend);
			ofstream outfile(filename.c_str(), ios::out | ios::trunc);
			if (outfile.is_open()) {
				for (list<string>::const_iterator sli = filelines.begin();
					sli != filelines.end(); sli++)
					outfile << *sli << "\n";
			}
			outfile.close();
		}
		else {
			system("pause");
			return;
		}
	}

};

WebPage::~WebPage() {
}


class Timer {

private:

	clock_t timerh;
	clock_t timermin;
	clock_t timersec;

public:

	Timer() {
		timerh = 0;
		timermin = 0;
		timersec = 0;
	}

	~Timer();

	void setTimerh(clock_t h) {
		timerh = h;
	}

	void setTimermin(clock_t min) {
		timermin = min;
	}
	void setTimersec(clock_t sec) {
		timersec = sec;
	}

	clock_t getTimerh() {
		return timerh;
	}
	clock_t getTimermin() {
		return timermin;
	}
	clock_t getTimersec() {
		return timersec;
	}

	string toString() {
		stringstream ss;
		ss << timerh << ":" << timermin << ":" << timersec << endl;
		return ss.str();
	}

	void timerGo() {
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

			cout << hour << ":" << min << ":" << sec << endl;
		}
		system("pause");
	}

};

Timer::~Timer() {
}


class User {

private:

	string name;
	string surname;
	string password;
	int personId;
	static int lastId;
	static int number;

	
public:
	
	static int getNumberOfObjects() {
		return number;
	}

	User() {
		personId = lastId++;
		number++;
	}

	User(string name, string surname, string password) {
		initialize(name, surname, password);
	}

	User(string name, string surname) { 
		if ((correct(name) == true) && (correct(surname) == true)) {
			this->name = name;
			this->surname = surname;
			personId = ++lastId;
			number++;
		}
	}

	~User();

private:

	bool correct(string word) {
		if ((!word.empty()) && (word.length() != 0) && (word.compare("")) && (isupper(word[0]))) {
			return true;
		}
		return false;
	}


	bool correctPassword(string word){
			if ((!word.empty()) && (word.length() <= 5) && (word.compare(""))){
				return true;
			}
			return false;
	}

	void initialize(string name, string surname, string password) {
		if ((correct(name) == true) && (correct(surname) == true) && (correctPassword(password) == true)) {
			this->name = name;
			this->surname = surname;
			this->password = password;
			personId = ++lastId;
			number++;
		}
	}

public:

	void setPersonId(int p) {
		personId = p;
	}
	void setName(string n) {
		name = n;
	}
	void setPassword(string pasw) {
		password = pasw;
	}
	void setSurname(string s) {
		surname = s;
	}

	int getPersonId() {
		return personId;
	}
	string getName() {
		return name;
	}
	string getPassword() {
		return password;
	}
	string getSurname() {
		return surname;
	}

	string toString() {
		stringstream ss;
		ss << name << " " << surname << " " << password << endl;
		return ss.str();
	}

};

int User::lastId = 0;
int User::number = 0;

User::~User(void) {
	number--;
}

int main() {
	User* u = new User("Bronis", "Dûda", "12345");
	cout << u->toString() << endl;

	User *userr[3];
	userr[0] = new User("Vardas", "Pavarde");
	userr[1] = new User("Kestas", "Kestaitis");
	userr[2] = new User("Kazys", "Kazakevicius");

	for (int i = 0; i <= 2; i++) {
		cout << userr[i]->toString() << " " << endl;
		delete userr[i];
	}
	delete u;
	

	Timer* h = new Timer();
	cout << h->toString() << endl;  
	delete h;

	Timer t;
	t.setTimerh(0);
	t.setTimermin(0);
	t.setTimersec(3);
	t.timerGo();

	//cout << "iveskite tinklapio adresa, kuri norite uzblokuoti " << endl;
	//cin >> web;
	string web = "www.one.lt";
	WebPage* w = new WebPage(web);
	string web1 = w->toString();

	delete w;
	
	WebPage ww;
	ww.setWebpage(web1);
	ww.writingToFile(ww.concatWebName(ww.getWebpage()));

	//Atblokavimo tikrinimas 

	string file = "C:\\Windows\\System32\\drivers\\etc\\hosts";
	int a = ww.returnLine(file, web);           
	//cout << a << endl;
	ww.deleteLines(file, a);
	
	//Gyvi objektai
	cout << "Gyvu objektu yra: " << User::getNumberOfObjects() << endl;

	system("pause");

};

