#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include "screen.h"
using namespace std;
std::string getFileContents (std::ifstream&);            //Gets file contents

void screen()
{




    std::ifstream Reader ("screen.txt");             //Open file

    std::string Art = getFileContents (Reader);       //Get file

    std::cout << Art << std::endl;               //Print it to the screen

    Reader.close ();
        HANDLE  hConsole;
	int k;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    system("COLOR 0C");
    k = 3;

    // pick the colorattribute k you want
    SetConsoleTextAttribute(hConsole, k);


    printf ("---Welcome to the Monster Tower---");

    cout <<"\n###In this game you going to get a monster and fight till end of the tower###\n"<< endl;
    printf ("In the far far years ago there is a hug tower full with dragons\n");
    printf ("One day human take over the toward and kill all the dragons.....\n");
    printf ("But they forgot destroy one egg.................................\n");


    cout <<"\nPlease shake the egg\n"<< endl;
    string shake;
    cin >> shake;

    system("cls");                         //Close file

}


std::string getFileContents (std::ifstream& File)
{
    std::string Lines = "";        //All lines

    if (File)                      //Check if everything is good
    {
	while (File.good ())
	{
	    std::string TempLine;                  //Temp line
	    std::getline (File , TempLine);        //Get temp line
	    TempLine += "\n";                      //Add newline character

	    Lines += TempLine;                     //Add newline
	}
	return Lines;
    }
    else                           //Return error
    {
	return "ERROR File does not exist.";
    }
}

