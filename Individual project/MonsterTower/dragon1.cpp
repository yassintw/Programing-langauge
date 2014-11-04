#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include "dragon1.h"
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include "Character.h"

using namespace std;
std::string getFileContents (std::ifstream&);            //Gets file contents

character dragon1()
{




    std::ifstream Reader ("you.txt");             //Open file

    std::string Art1 = getFileContents (Reader);       //Get file

    std::cout << Art1 << std::endl;
    Reader.close ();            //Print it to the screen
HANDLE  hConsole;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        int ii;
    srand( time(0));
    ii=(rand() % 3+1);
    system("cls");

        switch(ii)
    case 1:     // Armory
            {


std::cout << Art1 << std::endl;
    system("COLOR 0C");
    SetConsoleTextAttribute(hConsole, 3);
    cout<<"WOW you got red monster"<<endl;
       return character ("red dragon", 50, 20, 12, .65, 100, 1,0,0);
       break;
    case 2:     // Armory



std::cout << Art1 << std::endl;
    system("COLOR 0D");
    SetConsoleTextAttribute(hConsole, 3);
    cout<<"WOW you got pink monster"<<endl;
    return character ("pink dragon", 50, 12, 20, .65, 100, 1,0,0);
       break;
    case 3:     // Armory


std::cout << Art1 << std::endl;
    system("COLOR 0E");
    SetConsoleTextAttribute(hConsole, 3);
    cout<<"WOW you got yellow monster"<<endl;
    return character ("yellow dragon", 100, 12, 12, .65, 100, 1,0,0);
       break;
            }
}
