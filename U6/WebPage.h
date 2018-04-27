
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
#include "Timer.h"
namespace Project {
	class WebPage {
	private:
		class Implementation3;
		Implementation3 *impl3;
	public:
		static void printTest2(bool result);
		WebPage(const WebPage &other);
		WebPage& operator=(const WebPage &other);
		friend std::ostream& operator<<(std::ostream& os, const WebPage& p);
		friend std::istream& operator >> (std::istream& is, WebPage& p);
		std::string getTime();
		static void testOperator2();
		static void webTest1();
		static void webTest2();
		static void webTest3();
		WebPage(std::string webpage, Timer *time);
		WebPage(std::string webpage);
		void countTime();
		WebPage();
		~WebPage();
		bool isCorrect(std::string word);
		void setWebpage( std::string web);
		std::string getWebpage() const;
		void writingToFile(std::string text, std::string path = "C:\\Windows\\System32\\drivers\\etc\\hosts");
		std::string concatWebName(std::string web);
		std::string toString() const;
		int returnLine(std::string file, std::string search);
		void deleteLines(const std::string & filename, int start, int skip = 1);
		friend class Implementation3;
	};
}
