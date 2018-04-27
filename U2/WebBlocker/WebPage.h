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
	//!Klasës WebPage paskirtis inicializuoti, uþblokuoti, atblokuoti tinklapá.
	class WebPage {
		std::string	webpage;
	public:	
		//!Perraðyti I/O operatoriai.
		friend std::ostream& operator<<(std::ostream& os, const WebPage& p);
		friend std::istream& operator >> (std::istream& is, WebPage& p);
		//!Numatytasis konstruktorius.
		WebPage();
		//!Konstruktorius inicializuojantis klasës objektà, koks tinklapis bus blokuojamas, priskiriama pirma reikðmë.
		WebPage(std::string webpage);
		//!Destruktorius, atlaisvinantis atmintá, iðtrinantis objektà.
		~WebPage();
		//!Metodas, graþinantis true reikðmæ, jei þodis paduotas þodis atitinka reikalavimus, nëra tuðèias.
		bool isCorrect(std::string word);
		//!"Setter'is" - prikiria reikðmæ webpage, jei paduodama tekstinë eilutë atitinka metodo isCorrect reikalavimus.  
		void setWebpage(std::string web);
		//!Getter'is"  gràþina webpage lauko reikðmæ.
		std::string getWebpage();
		//!Metodas, áraðantis á numatytà kelià C:\\Windows\\System32\\drivers\\etc\\hosts (á ðià vietà áraðius tinklapi su tam tikru kodu priekyje, jis uþblokuojamas), paduotà tekstà.
		void writingToFile(std::string text, std::string path = "C:\\Windows\\System32\\drivers\\etc\\hosts");
		//!Metodas, sujungiantis paduotà tekstinæ eilutæ (puslapá, kuris bus blokuojamas), su tam tikru tekstu, kad bûtø galima uþblokuoti
		std::string concatWebName(std::string web);
		//!Metodas, kuris sukuria tektinæ objekto reprezentacijà.
		std::string toString();
		//!Metodas, surandantis ir gràþinantis faile rastos tekstinës eilutës vietà failæ (eilutæ).
		int returnLine(std::string file, std::string search);
		//!Metodas iðtrinantis eilutes ið failo. (Tinklapio atblokavimas, iðtrinant eilutæ ið hosts failo.)
		void deleteLines(const std::string & filename, int start, int skip = 1);
		//!Metodai klasës testavimui.
		static void printTest2(bool result);
		static void testOperator2();
		static void webTest1();
		static void webTest2();
		static void webTest3();
	};

		
}
