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
#include "Blocker.h"
#include <vector>
using namespace std;
namespace Project{
	//blokavimas 
	Blocker::Blocker(User &u, WebPage *w):user(u), web(w){
		std::string file = "C:\\Windows\\System32\\drivers\\etc\\hosts";
		web->writingToFile(web->concatWebName(web->getWebpage()));
		web->countTime();
		if (web->getTime() != ("0 0 0")) {
			web->deleteLines(file, web->returnLine(file, web->getWebpage()));
		}
	}

	Blocker::Blocker(WebPage *w): web(w) {
		std::string file = "C:\\Windows\\System32\\drivers\\etc\\hosts";
		web->writingToFile(web->concatWebName(web->getWebpage()));
		web->countTime();
		if (web->getTime() != ("0 0 0")) {
			web->deleteLines(file, web->returnLine(file, web->getWebpage()));
		}
	}
	Blocker::Blocker() {
	}
	Blocker::~Blocker(){
		delete web;
		web = NULL;
	}
	void Blocker::addUser(const User &u)
	{
		std::vector<User> *ptr = &users;
		ptr->push_back(u);
	}
	void Blocker::addWebpage(const WebPage &w)
	{
		std::vector<WebPage> *ptr = &webpages;
		ptr->push_back(w);
	}
	int Blocker::getUsersCount() const {
		return users.size();
	}
	int Blocker::getWebpageCount() const {
		return webpages.size();
	}


}