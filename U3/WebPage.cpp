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
#include <cassert>
#include <exception>
#include <stdexcept>
#include "Timer.h"
#include "WebPage.h"
//#define NDEBUG
//Blocking(User us, WebPage web); -|> tusciavidure i ta klase 
//PARASYti dar viena klase kurioje kaip pas jatuly reservation viksa apjungtu + saugotu visu objektu sarasus.
#define DEBUG
#define DEBUG_PREFIX "--> "
using namespace std;
namespace Project {
	class WebPage::Implementation3 {
		private:
			std::string	webpage;
			Timer *t;
		public:
			friend class WebPage;
			Implementation3(std::string init) : webpage(init) {
			 
			}
			Implementation3() {
			}
			~Implementation3() {
			}
	};
	void Project::WebPage::printTest2(bool result) {
		if (result) {
			std::clog << "OK!" << std::endl;
		}
		else
		{
			std::clog << "Testing failed." << std::endl;
		}
	}


	WebPage::WebPage(std::string webpage, Timer *time) : impl3(new Implementation3())
	{
		impl3->t = time;
		setWebpage(webpage);
	}

	WebPage::WebPage(std::string webpage) : impl3(new Implementation3()) {
		setWebpage(webpage);
		impl3->t = new Timer();
	}

	void WebPage:: countTime() {
		impl3->t->timerGo();
	}

	WebPage::WebPage(){
		impl3 = new WebPage::Implementation3();
	}

	WebPage::~WebPage(){
#ifdef DEBUG
		std::clog << DEBUG_PREFIX "Destuctor webpage called" << std::endl;
#endif 

		delete impl3->t;
		delete impl3;
	}


	WebPage::WebPage(const WebPage &other) : impl3(new Implementation3 (*(other.impl3))){
	}
	WebPage& WebPage::operator=(const WebPage &other) {
		if (&other != this) {
			delete impl3;
		}
		impl3 = new Implementation3(*(other.impl3));
		return *this;
	}

	bool WebPage::isCorrect(std::string word) {
		if ((!word.empty()) && (word.length() != 0) && (word.compare(""))) {
			return true;
		}
		return false;

	}

	void WebPage::setWebpage( std::string web) {
		if (isCorrect(web) == true) {
#ifdef DEBUG
			std::clog << DEBUG_PREFIX "SetWebpage (" << web << ") called" << std::endl;
#endif 
			impl3->webpage = web;
		}
		else {
#ifdef DEBUG
			std::clog << DEBUG_PREFIX " (" << web << ") - invalid argument" << std::endl;
#endif 
			throw std::invalid_argument("Webpage name is empty! ");
		}
	}

	std::string WebPage::getWebpage() const{
		return impl3->webpage;
	}
	void WebPage::writingToFile(std::string text, std::string path) {
#ifdef DEBUG
		std::clog << DEBUG_PREFIX "Method writingToFile called, writing text  '" << text << "' to file " << path << std::endl;
#endif
		std::ofstream myfile;
		myfile.open(path, std::ios::app);

		if (!myfile.is_open()) {
#ifdef DEBUG
			std::clog << DEBUG_PREFIX "Could not open file to write! " << std::endl;
#endif
			throw std::runtime_error("Could not open file!");
		}
		else {
			myfile << text << std::endl;
			myfile.close();
		}

	}

	std::string WebPage::concatWebName(std::string web) {
		std::string s = "\n 127.0.0.1 ";
		std::string name = s + web;
		return name;
	}

	std::ostream & Project::operator<<(std::ostream & os, const WebPage & p)
	{
		os << p.toString();
		return os;
	}

	std::istream & Project::operator >> (std::istream & is, WebPage & p)
	{
		std::string webpage;
		is >> webpage;
		WebPage copy = p;
		p.setWebpage(webpage);
		return is;
	}
	std::string WebPage::getTime()
	{
#ifdef DEBUG
		cout << DEBUG_PREFIX "GetTime of website blocking called!" << endl;
#endif
		assert(impl3->t != NULL);
		stringstream ss;
		ss << impl3->t->getTimerh() << " " << impl3->t->getTimermin()<< " " << impl3->t->getTimersec();
			return ss.str();
	}
	void WebPage::testOperator2()
	{
		WebPage u1("www.one.lt");
		std::string str1(u1.toString());
		try
		{
			std::stringstream ss;
			ss << u1;
			ss >> u1;
			std::string str2(u1.toString());
			WebPage::printTest2(str1.compare(str2) == 0);
		}
		catch (...)
		{
			WebPage::printTest2(false);
#ifdef DEBUG
			std::clog << DEBUG_PREFIX "Operator failed! " << std::endl;
#endif

		}
	}


	void WebPage::webTest1() {
		WebPage w;
		w.setWebpage("www.one.lt");
		std::string web = w.getWebpage();
		try {
			w.writingToFile(web, "aaa.txt");
			throw 1;
		}
		catch (std::exception) {
			std::clog << "Test 1 failed" << std::endl;
		}
		catch (...) {
			std::clog << "OK!" << std::endl;
		}
	}


	void WebPage::webTest2() {
		WebPage w;
		w.setWebpage("www.ponasbynas.lt");
		std::string name = w.getWebpage();
		std::string s = w.concatWebName(name);
		if (s == "\n 127.0.0.1 www.ponasbynas.lt") {
			std::clog << "OK!" << std::endl;

		}
		else {
			std::clog << "Test 2 failed!" << std::endl;
		}
	}



	void WebPage::webTest3() {
		WebPage w;
		try {
			w.deleteLines("C:\\Windows\\System32\\drivers\\etc\\hosts", 10001);
			throw 1;
		}
		catch (std::exception) {
			std::clog << "OK!" << std::endl;
		}
		catch (...) {
			std::clog << "Test 3 failed!" << std::endl;
		}
	}

	std::string WebPage::toString() const{
		std::stringstream ss;
		ss << this->impl3->webpage << std::endl;
		return ss.str();
	}

	int WebPage::returnLine(std::string file, std::string search) {
		std::ifstream fileInput;
		std::string line;
		fileInput.open(file);
		if (fileInput.is_open()) {
			int curLine = 0;
			while (getline(fileInput, line)) {
				curLine++;
				if (line.find(search, 0) != std::string::npos) {
					return curLine;
					fileInput.close();
				}
			}
		}
		fileInput.close();
		return 0;
	}

	void WebPage::deleteLines(const std::string & filename, int start, int skip) {
#ifdef DEBUG
		std::clog << DEBUG_PREFIX "Method delete Lines called, deleting line  '" << start << "' from file " << filename << std::endl;
#endif

		std::ifstream infile(filename.c_str(), std::ios::in);
		if (infile.is_open()) {
			std::string line;
			std::list<std::string> filelines;
			while (infile) {
				getline(infile, line);
				filelines.push_back(line);
			}
			infile.close();
			if (start == 0) {
#ifdef DEBUG
				std::clog << DEBUG_PREFIX "No line to delete! " << std::endl;
#endif
				throw std::logic_error("No line found in file to delete!!");
				return;
			}
			if (start > filelines.size()) {
#ifdef DEBUG
				std::clog << DEBUG_PREFIX "lines out of range! " << std::endl;
#endif
				throw std::logic_error("lines out of range to delete!");
				return;
			}
			else {
				std::list<std::string>::iterator deletebegin = filelines.begin(), deleteend;
				for (int i = 1; i < start; i++)
					deletebegin++;
				deleteend = deletebegin;
				for (int i = 0; i < skip; i++)
					deleteend++;
				filelines.erase(deletebegin, deleteend);
				std::ofstream outfile(filename.c_str(), std::ios::out | std::ios::trunc);
				if (outfile.is_open()) {
					for (std::list<std::string>::const_iterator sli = filelines.begin();
						sli != filelines.end(); sli++)
						outfile << *sli << "\n";
				}
				outfile.close();
			}
		}
		else {
			return;
		}
	}
}