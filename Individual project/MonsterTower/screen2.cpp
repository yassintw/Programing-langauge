#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include "screen2.h"
#include "dragon1.h"
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include "Character.h"
void dragon1();
using namespace std;
std::string getFileContents (std::ifstream&);            //Gets file contents

void screen2()
{




    std::ifstream Reader ("screen2.txt");             //Open file

    std::string Art1 = getFileContents (Reader);       //Get file

    std::cout << Art1 << std::endl;               //Print it to the screen

    Reader.close ();
        HANDLE  hConsole;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    system("COLOR 0C");
    Sleep(1000);



    // pick the colorattribute k you want






    system("cls");

    Sleep(100);
    system("cls");
      std::ifstream Reader1 ("egg1.txt");             //Open file

    std::string Art2 = getFileContents (Reader1);       //Get file

    std::cout << Art2 << std::endl;               //Print it to the screen
 Sleep(100);
    system("cls");
      std::ifstream Reader2 ("egg2.txt");             //Open file

    std::string Art3 = getFileContents (Reader2);       //Get file

    std::cout << Art3 << std::endl;
       Sleep(100);
    system("cls");
      std::ifstream Reader3 ("egg3.txt");             //Open file

    std::string Art4 = getFileContents (Reader3);       //Get file

    std::cout << Art4 << std::endl;
    Sleep(100);
    system("cls");

      std::ifstream Reader4 ("egg4.txt");             //Open file

    std::string Art5 = getFileContents (Reader4);       //Get file

    std::cout << Art5 << std::endl;
  Sleep(100);
    system("cls");

      std::ifstream Reader5 ("egg5.txt");             //Open file

    std::string Art6 = getFileContents (Reader5);       //Get file

    std::cout << Art6 << std::endl;
   Sleep(100);
    system("cls");
      std::ifstream Reader6 ("egg6.txt");             //Open file

    std::string Art7 = getFileContents (Reader6);       //Get file

    std::cout << Art7 << std::endl;
   Sleep(100);
    system("cls");
      std::ifstream Reader7 ("egg7.txt");             //Open file

    std::string Art8 = getFileContents (Reader7);       //Get file

    std::cout << Art8 << std::endl;
  Sleep(100);
    system("cls");
      std::ifstream Reader8 ("egg8.txt");             //Open file

    std::string Art9 = getFileContents (Reader8);       //Get file

    std::cout << Art9 << std::endl;
 Sleep(100);
    system("cls");
      std::ifstream Reader9 ("egg9.txt");             //Open file

    std::string Art10 = getFileContents (Reader9);       //Get file

    std::cout << Art10 << std::endl;
Sleep(100);
    system("cls");
      std::ifstream Reader10 ("egg10.txt");             //Open file

    std::string Art11 = getFileContents (Reader10);       //Get file

    std::cout << Art11 << std::endl;
   Sleep(100);
    system("cls");
      std::ifstream Reader11 ("egg11.txt");             //Open file

    std::string Art12 = getFileContents (Reader11);       //Get file

    std::cout << Art12 << std::endl;

    Sleep(100);
    system("cls");
      std::ifstream Reader12 ("egg12.txt");             //Open file

    std::string Art13 = getFileContents (Reader12);       //Get file

    std::cout << Art13 << std::endl;
   Sleep(100);
    system("cls");
      std::ifstream Reader13 ("egg13.txt");             //Open file

    std::string Art14 = getFileContents (Reader13);       //Get file

    std::cout << Art14 << std::endl;
  Sleep(100);
    system("cls");
      std::ifstream Reader14 ("egg14.txt");             //Open file

    std::string Art15 = getFileContents (Reader14);       //Get file

    std::cout << Art15 << std::endl;
   Sleep(100);
    system("cls");
      std::ifstream Reader15 ("egg15.txt");             //Open file

    std::string Art16 = getFileContents (Reader15);       //Get file

    std::cout << Art16 << std::endl;
   Sleep(100);
    system("cls");





}



