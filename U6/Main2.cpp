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
#include "User.h"
#include "WebPage.h"
#include "Timer.h"

using namespace Project;

using namespace std;
int main() {

	WebPage w("www.one.lt", 0, 0, 4);
	cout << w.getTime() << endl;;
	system("pause");
	WebPage *web = new WebPage("ww.on.lt", 0, 0, 5);
	delete web;
	system("pause");
/*
	try{

		User::getNumberOfObjects();
		WebPage kas("www.one.lt", 0, 0, 4);
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

		Timer* h = new Timer(0,0,1);
		cout << h->toString<string>() << endl;
		delete h;
		Timer t(0,0,3);
		//t.setTimerh(27) //----> catch exception

		t.timerGo();

		//Timer psl("www.oniukasbroliukas.lt");
		//cout << psl.getWeb() << endl;

		//cout << "iveskite tinklapio adresa, kuri norite uzblokuoti " << endl;
		string web = "www.one.lt";
		//cin >> web;

		WebPage* w = new WebPage(web);
		string web1 = w->toString();
		delete w;
	
		WebPage ww;
		ww.setWebpage(web1);
		//cout << ww.getWebpage() << endl;

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
