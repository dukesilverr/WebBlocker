#include <string>
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
#include "WebPage.h"
#include "User.h"
#include "Timer.h"
#include <vector>
#include <iterator>
#include <algorithm>
namespace Project{
	//Klasë Blocker apjungia visas 
	class Blocker{
	private:
		WebPage *web;
		User user;
		std::vector<User> users;
		std::vector<WebPage> webpages;
		Blocker(const Blocker &other);
		Blocker& operator=(const Blocker &other);
	public:
		Blocker::Blocker(User &u, WebPage *w);
		Blocker(WebPage *w);
		Blocker();
		~Blocker();
		void addUser(const User & u);
		void addWebpage(const WebPage & w);
		int getUsersCount() const;
		int getWebpageCount() const;;
	};
}