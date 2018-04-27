/*#include <string>
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

using namespace std;
using namespace Project;


int main() {

	try{

		User::getNumberOfObjects();

		User* u = new User("Bronis", "Dûda", "12345");
		cout << u->toString() << endl;

		User *userr[3];
		userr[0] = new User("Dovile", "Patiejunaite");
		userr[1] = new User("Ignas", "Labalaukis");
		userr[2] = new User("Domas", "Motiejunas");

		for (int i = 0; i <= 2; i++) {
			cout << userr[i]->toString() << " " << endl;
			delete userr[i];
		}

		delete u;

		system("pause");



		Timer* h = new Timer();
		cout << h->toString() << endl;

		Timer t;
		//t.setTimerh(27) //----> catch exception
		t.setTimerh(0);
		t.setTimermin(0);
		t.setTimersec(3);
		t.timerGo();

		delete h;
		//cout << "iveskite tinklapio adresa, kuri norite uzblokuoti " << endl;
		string web = "www.one.lt";
		//cin >> web;

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

		int n = User::getNumberOfObjects();
		assert(n == 0);
		system("pause");
	}

	catch(exception& e){
		cerr << "Error found : "<< e.what() << endl;
	}
}; 
*/