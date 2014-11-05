#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include "screen.h"
#include "screen2.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include "Character.h"
using namespace std;

std::string getFileContents (std::ifstream&);
void screen();
void screen2();
int yon;
character dragon1();
int main()
{
    int newGold;
    int newHealth;
    int newStr;
    int newDex;
    int newArmor;
    int newDragonPiece;
    int experience = 0;
    int x=0;
    std::ifstream Reader ("mainmenu.txt");             //Open file
    std::string Art1 = getFileContents (Reader);       //Get file

    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    screen();
    screen2();
    character ourHero = dragon1();
    cout <<"Let's name your baby dragon" <<endl;
    string name;
    cin >> name;
    system("cls");
        while(ourHero.getHealth()>0)
    {
        if(experience > 110 && ourHero.getLevel() <2)
            {
                 std::ifstream Reader1 ("levelup.txt");             //Open file
                std::string Art2 = getFileContents (Reader1);
                std::cout << Art2 << std::endl;
                system("COLOR 0C");
                SetConsoleTextAttribute(hConsole, 3);
                cout << "You getting bigger. You are level 2 now!\n\n";
                ourHero.addLevel();
                newStr = ourHero.getStr()+5;
                ourHero.setStr(newStr);
                newDex = ourHero.getDex()+5;
                ourHero.setDex(newDex);
                newArmor = ourHero.getArmor()+2;
                ourHero.setArmor(newArmor);
                newHealth = ourHero.getHealth()+100;
                ourHero.setHealth(newHealth);
                cout << "STR +5 DEX +10  Armor +2 Health+100\n\nPlease press enter to continue...\n";
                cin.ignore();
                cin.get();
                system("cls");
            }
        if(experience > 410 && ourHero.getLevel() <3)
            {
                 std::ifstream Reader1 ("levelup.txt");             //Open file
                std::string Art2 = getFileContents (Reader1);
                std::cout << Art2 << std::endl;
                system("COLOR 0C");
                SetConsoleTextAttribute(hConsole, 3);
                cout << "You getting stronger. You are level 3 now!\n\n";
                ourHero.addLevel();
                newStr = ourHero.getStr()+10;
                ourHero.setStr(newStr);
                newDex = ourHero.getDex()+10;
                ourHero.setDex(newDex);
                newArmor = ourHero.getArmor()+2;
                ourHero.setArmor(newArmor);
                newHealth = ourHero.getHealth()+200;
                ourHero.setHealth(newHealth);
                cout << "STR +5 DEX +5 Armor +2 Health+200\n\nPlease press enter to continue...\n";
                cin.ignore();
                cin.get();
                system("cls");
            }
        if(experience > 810 && ourHero.getLevel() <4)
            {
                 std::ifstream Reader1 ("levelup.txt");             //Open file
                std::string Art2 = getFileContents (Reader1);
                std::cout << Art2 << std::endl;
                system("COLOR 0C");
                SetConsoleTextAttribute(hConsole, 3);
                cout << "You become one of the top 3 monster in monster tower. You are level 4 now!\n\n";
                ourHero.addLevel();
                newStr = ourHero.getStr()+10;
                ourHero.setStr(newStr);
                newDex = ourHero.getDex()+10;
                ourHero.setDex(newDex);
                newArmor = ourHero.getArmor()+2;
                ourHero.setArmor(newArmor);
                newHealth = ourHero.getHealth()+300;
                ourHero.setHealth(newHealth);
                cout << "STR +5 DEX +5  Armor +2 Health+300\n\nPlease press enter to continue...\n";
                cin.ignore();
                cin.get();
                system("cls");
            }
        if(experience > 1200 && ourHero.getLevel() <5)
            {
                 std::ifstream Reader1 ("levelup.txt");             //Open file
                std::string Art2 = getFileContents (Reader1);
                std::cout << Art2 << std::endl;
                system("COLOR 0C");
                SetConsoleTextAttribute(hConsole, 3);
                cout << "You are the strongest monster in the tower now. You are level 5!\n\n You got one DragonPiece";
                newDragonPiece = ourHero.getDragonPiece()+1;
                ourHero.setDragonPiece(newDragonPiece);
                ourHero.addLevel();
                newStr = ourHero.getStr()+10;
                ourHero.setStr(newStr);
                newDex = ourHero.getDex()+10;
                ourHero.setDex(newDex);
                newArmor = ourHero.getArmor()+2;
                ourHero.setArmor(newArmor);
                newHealth = ourHero.getHealth()+400;
                ourHero.setHealth(newHealth);
                cout << "STR +5 DEX +5  Armor +2 Health+400\n\nPlease press enter to continue...\n";
                cin.ignore();
                cin.get();
                system("cls");
            }

    std::cout << Art1 << std::endl;
    system("COLOR 0C");
    SetConsoleTextAttribute(hConsole, 3);
        cout << "Please make a selection:\n\n(1)Go to work (earn $)\n\n(2)Tower (fight monster)\n\n(3)Item store (buy items)\n\n(4)Home (Stats)\n\n(5)Quit Game\n";
        int menuSelect;
        srand(time(0));
        cin >> menuSelect;
        system("cls");
        switch(menuSelect)
        {


        case 1:
        {

        int newwexp;
        if (ourHero.getworkexp()<=25)
        {


        std::ifstream Reader1 ("works.txt");             //Open file
        std::string Art2 = getFileContents (Reader1);
        std::cout << Art2 << std::endl;
        system("COLOR 0C");
        SetConsoleTextAttribute(hConsole, 3);
        cout<<"Boss: Welcome young man.\n"<< "(You helping boss clean the room)\n\n"<<"Noob Worker\n" <<"Work experience:\n"<<ourHero.getworkexp();

        newGold = ourHero.getGold()+5;
        ourHero.setGold(newGold);
        newwexp = ourHero.getworkexp()+10;
        ourHero.setworkexp(newwexp);
        cin.ignore();
        cin.get();
        system("cls");
         break;
        }

        if (ourHero.getworkexp()<=100)
        {
        std::ifstream Reader1 ("noob.txt");             //Open file
        std::string Art2 = getFileContents (Reader1);
        std::cout << Art2 << std::endl;
        system("COLOR 0C");
        SetConsoleTextAttribute(hConsole, 3);
        cout<<"Boss: Welcome young man.\n"<< "(You become the team leader of noob worker)\n\n"<<"Experience Worker\n" <<"Work experience:\n"<<ourHero.getworkexp();
        newGold = ourHero.getGold()+10;
        ourHero.setGold(newGold);
        newwexp = ourHero.getworkexp()+20;
        ourHero.setworkexp(newwexp);
        cin.ignore();
        cin.get();
        system("cls");
        break;
        }
        if (ourHero.getworkexp()<=320)
        {
        std::ifstream Reader1 ("office.txt");             //Open file
        std::string Art2 = getFileContents (Reader1);
        std::cout << Art2 << std::endl;
        system("COLOR 0C");
        SetConsoleTextAttribute(hConsole, 3);
        cout<<"Boss: Welcome young man.\n"<< "(Congret~ You have your first office YEA!! and 10 noob worker  )\n\n"<<"Professional Worker\n" <<"Work experience:\n"<<ourHero.getworkexp();
        newGold = ourHero.getGold()+30;
        ourHero.setGold(newGold);
        newwexp = ourHero.getworkexp()+40;
        ourHero.setworkexp(newwexp);
        cin.ignore();
        cin.get();
        system("cls");
        break;
        }
        if (ourHero.getworkexp()<=640)
        {
        std::ifstream Reader1 ("experience.txt");             //Open file
        std::string Art2 = getFileContents (Reader1);
        std::cout << Art2 << std::endl;
        system("COLOR 0C");
        SetConsoleTextAttribute(hConsole, 3);
        cout<<"Boss: Welcome young man.\n"<< "(Your office getting bigger and there are 100 noob 20 experience 5 professional working for you)\n\n"<<"Senior Worker\n" <<"Work experience:\n"<<ourHero.getworkexp();
        ourHero.setGold(newGold);
        newwexp = ourHero.getworkexp()+80;
        ourHero.setworkexp(newwexp);
        cin.ignore();
        cin.get();
        system("cls");
        break;
        }
        if (ourHero.getworkexp()<=710)
        {
        std::ifstream Reader1 ("dragonpiece.txt");             //Open file
        std::string Art2 = getFileContents (Reader1);
        std::cout << Art2 << std::endl;
        system("COLOR 0C");
        SetConsoleTextAttribute(hConsole, 3);
        newDragonPiece = ourHero.getDragonPiece()+1;
        ourHero.setDragonPiece(newDragonPiece);
        cout<<"One day I found a weird stone on the boss table.\n"<< "You: What is this? Look like a.... Dragon Piece. I wondering what is it use for?\n\n"<< "DragonPeice + 1\n";
        newwexp = ourHero.getworkexp()+180;
        ourHero.setworkexp(newwexp);
        cin.ignore();
        cin.get();
        system("cls");
        break;
        }
        if (ourHero.getworkexp()<2000)
        {
        std::ifstream Reader1 ("star.txt");             //Open file
        std::string Art2 = getFileContents (Reader1);
        std::cout << Art2 << std::endl;
        system("COLOR 0C");
        SetConsoleTextAttribute(hConsole, 3);
        cout<<"Boss: (disappeared!!!)\n"<< "(<<Your boss disappeared in the toward for three months>> Your the boss now :D  )\n\n"<<"BOSS :D\n" <<"Money:\n"<<ourHero.getGold();
        newGold = ourHero.getGold()+180;
        ourHero.setGold(newGold);
        cin.ignore();
        cin.get();
        system("cls");
        break;
        }

        }
        case 2:
            {
        int yourchoice;
                if(ourHero.getLevel()<5)
                {
                    std::ifstream Reader1 ("door.txt");             //Open file
        std::string Art2 = getFileContents (Reader1);
        std::cout << Art2 << std::endl;
        system("COLOR 0A");
        SetConsoleTextAttribute(hConsole, 3);
                    cout << "You walk into a tower full with monsters\n\n\n[1] Open the Door\n\n[2] Run away\n\n";
                    cin >> yourchoice;
                }

                int fightchoice;
                int theHit;
                int currentHealth;
                system("cls");
                if(ourHero.getLevel() == 1)
                    switch(yourchoice)
                    {
                        case 1:
                        {

                            if (rand()%2 +1==1)
                                {
                            std::ifstream Reader1 ("babygobolin.txt");             //Open file
                            std::string Art2 = getFileContents (Reader1);
                            std::cout << Art2 << std::endl;
                            system("COLOR 0A");
                            SetConsoleTextAttribute(hConsole, 3);

                            cout << "You find out a baby goblin.\n";
                            character babygoblin("babygoblin", 25, 15, 12, 1, 0, 0,0,0);
                            cin.ignore();
                            cin.get();
                            system("cls");

                            while(babygoblin.getHealth()>0)
                            {
                            std::ifstream Reader1 ("youraction.txt");             //Open file
                            std::string Art2 = getFileContents (Reader1);
                            std::cout << Art2 << std::endl;
                            system("COLOR 0C");
                            SetConsoleTextAttribute(hConsole, 3);
                                cout << "Which action would you like to take?\n\n[1]Attack\n\n[2]Run\n";
                                cin >> fightchoice;
                                cin.ignore();
                                cin.get();
                                system("cls");
                                switch(fightchoice)
                                {
                                    case 1:
                                    {

                                        if((ourHero.getStr()+(rand()%11))>(babygoblin.getDex()+(rand()%11)))
                                        {
                                            theHit=ourHero.getStr();
                                             currentHealth=babygoblin.getHealth()-theHit;
                                            babygoblin.setHealth(currentHealth);
                                            std::ifstream Reader1 ("youua.txt");             //Open file
                                            std::string Art2 = getFileContents (Reader1);
                                            std::cout << Art2 << std::endl;
                                            system("COLOR 0C");
                                            SetConsoleTextAttribute(hConsole, 3);


                                            cout << "You hit the baby goblin for " << theHit << " health!\n\n"<<"Baby goblin health:"<<babygoblin.getHealth();
                                                 cin.ignore();
                                                    cin.get();
                                                    system("cls");
                                            if(1 > babygoblin.getHealth())
                                            {
                                                std::ifstream Reader1 ("babygobolinr.txt");             //Open file
                                                std::string Art2 = getFileContents (Reader1);
                                                std::cout << Art2 << std::endl;
                                                system("COLOR 0A");
                                                SetConsoleTextAttribute(hConsole, 3);

                                                cout << "Baby goblin cry and run away... \nYou receive 20 gold and 55 experience!\n\nPlease press enter to continue...\n";
                                                newGold = ourHero.getGold()+20;
                                                ourHero.setGold(newGold);
                                                experience = experience +55;
                                                babygoblin.setHealth(0);
                                            cin.ignore();
                                            cin.get();
                                            system("cls");
                                            }
                                        }
                                        else
                                        {
                                            std::ifstream Reader1 ("babygobolindodge.txt");             //Open file
                                            std::string Art2 = getFileContents (Reader1);
                                            std::cout << Art2 << std::endl;
                                            system("COLOR 0A");
                                            SetConsoleTextAttribute(hConsole, 3);

                                            cout << "The baby goblin has dodged your attack!\n\n";
                                                    cin.ignore();
                                            cin.get();
                                            system("cls");
                                        }
                                        if(babygoblin.getHealth()>0)
                                        {
                                            if((babygoblin.getStr()+(rand()%11))>(ourHero.getDex()+(rand()%11)))
                                            {
                                                theHit=babygoblin.getStr()*0.50;
                                                theHit=theHit*ourHero.getArmor();
                                                currentHealth=ourHero.getHealth()-theHit;
                                                ourHero.setHealth(currentHealth);
                                                std::ifstream Reader1 ("babygobolina.txt");             //Open file
                                                std::string Art2 = getFileContents (Reader1);
                                                std::cout << Art2 << std::endl;
                                                system("COLOR 0A");
                                                SetConsoleTextAttribute(hConsole, 3);

                                                cout << "The baby goblin has hit you for " << theHit << " health!\n\n"<<"You current health:"<<ourHero.getHealth();
                                                cin.ignore();
                                                cin.get();
                                                system("cls");

                                            }
                                            else
                                            {
                                                std::ifstream Reader1 ("youud.txt");             //Open file
                                                std::string Art2 = getFileContents (Reader1);
                                                std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "Wow you dodged the baby goblin's attack!";
                                            }
                                        }
                                        cin.ignore();
                                        cin.get();
                                        system("cls");
                                        break;
                                    }
                                    case 2:
                                    {
                                        if((rand()%4)<2)
                                        {
                                            std::ifstream Reader1 ("funnyface.txt");             //Open file
                                            std::string Art2 = getFileContents (Reader1);
                                            std::cout << Art2 << std::endl;
                                            system("COLOR 0C");
                                            SetConsoleTextAttribute(hConsole, 3);
                                            cout << "You make a funny face to baby goblin, and he allows you to walk away.\n";
                                            cout << "Please press enter to continue...\n";
                                            cin.ignore();
                                            cin.get();
                                            system("cls");
                                            babygoblin.setHealth(0);
                                            break;
                                        }
                                        else
                                        {
                                            std::ifstream Reader1 ("funnyface.txt");             //Open file
                                            std::string Art2 = getFileContents (Reader1);
                                            std::cout << Art2 << std::endl;
                                            system("COLOR 0C");
                                            SetConsoleTextAttribute(hConsole, 3);
cin.ignore();
                                            cin.get();
                                            std::ifstream Reader2 ("babygobolina.txt");             //Open file
                                            std::string Art3 = getFileContents (Reader2);
                                            std::cout << Art3 << std::endl;
                                            system("COLOR 0A");
                                            SetConsoleTextAttribute(hConsole, 3);
                                            cout << "You try to make funny face but you fail. The baby goblin attack you!";
                                            theHit=babygoblin.getStr()*0.50;
                                                theHit=theHit*ourHero.getArmor();
                                                currentHealth=ourHero.getHealth()-theHit;
                                                ourHero.setHealth(currentHealth);
                                                cout << "The baby goblin has hit you for " << theHit << " health!\n\n"<<"You current health:"<<ourHero.getHealth();
                                                 cin.ignore();
                                            cin.get();
                                            system("cls");

                                            break;
                                        }
                                        break;
                                    }
                                    default:
                                    {
                                        std::ifstream Reader1 ("is.txt");             //Open file
                                        std::string Art2 = getFileContents (Reader1);
                                        std::cout << Art2 << std::endl;
                                        system("COLOR 0C");
                                        SetConsoleTextAttribute(hConsole, 3);
                                        cout << "Invalid selection.\n\n";
                                        cout << "Please press enter to continue...\n";
                                        cin.ignore();
                                        cin.get();
                                        system("cls");
                                    }
                                    }
                                }
                                }


                            if (rand()%2 +1==2)
                                {

                            std::ifstream Reader1 ("babywolf.txt");             //Open file
                            std::string Art2 = getFileContents (Reader1);
                            std::cout << Art2 << std::endl;
                            system("COLOR 0C");
                            SetConsoleTextAttribute(hConsole, 3);
                            cout << "You find out a baby wolf.\n";
                            character babywolf("baby wolf", 28, 12, 15, 1, 0, 0,0,0);
                            cin.ignore();
                            cin.get();
                            system("cls");
                            while(babywolf.getHealth()>0)
                            {
                                std::ifstream Reader1 ("youraction.txt");             //Open file
                                std::string Art2 = getFileContents (Reader1);
                                std::cout << Art2 << std::endl;
                                system("COLOR 0C");
                                SetConsoleTextAttribute(hConsole, 3);
                                cout << "Which action would you like to take?\n\n[1]Attack\n\n[2]Run\n";
                                cin >> fightchoice;
                                cin.ignore();
                                cin.get();
                                system("cls");
                                switch(fightchoice)
                                {
                                    case 1:
                                    {
                                        if((ourHero.getStr()+(rand()%11))>(babywolf.getDex()+(rand()%11)))
                                        {
                                            theHit=ourHero.getStr();
                                             currentHealth=babywolf.getHealth()-theHit;
                                            babywolf.setHealth(currentHealth);
                                            std::ifstream Reader1 ("youua.txt");             //Open file
                                            std::string Art2 = getFileContents (Reader1);
                                            std::cout << Art2 << std::endl;
                                            system("COLOR 0C");
                                            SetConsoleTextAttribute(hConsole, 3);
                                            cout << "You hit the baby wolf for " << theHit << " health!\n\n"<<"Baby wolf health: "<<babywolf.getHealth();
                                            cin.ignore();
                                            cin.get();
                                            system("cls");
                                            if(1 > babywolf.getHealth())
                                            {
                                                std::ifstream Reader1 ("babywolfr.txt");             //Open file
                                                std::string Art2 = getFileContents (Reader1);
                                                std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "Baby wolf cry and run away... You receive 20 gold and 50 experience!\n\nPlease press enter to continue...\n";
                                                newGold = ourHero.getGold()+20;
                                                ourHero.setGold(newGold);
                                                experience = experience +50;
                                                babywolf.setHealth(0);
                                            }
                                        }
                                        else
                                        {
                                            std::ifstream Reader1 ("babywolfd.txt");             //Open file
                                            std::string Art2 = getFileContents (Reader1);
                                            std::cout << Art2 << std::endl;
                                            system("COLOR 0C");
                                            SetConsoleTextAttribute(hConsole, 3);
                                            cout << "The baby wolf has dodged your attack!\n\n";
                                            cin.ignore();
                                            cin.get();
                                            system("cls");
                                        }
                                        if(babywolf.getHealth()>0)
                                        {
                                            if((babywolf.getStr()+(rand()%11))>(ourHero.getDex()+(rand()%11)))
                                            {
                                                theHit=babywolf.getStr()*0.50;
                                                theHit=theHit*ourHero.getArmor();
                                                currentHealth=ourHero.getHealth()-theHit;
                                                ourHero.setHealth(currentHealth);
                                                std::ifstream Reader1 ("babywolfa.txt");             //Open file
                                                std::string Art2 = getFileContents (Reader1);
                                                std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "The baby wolf has hit you for " << theHit << "health!\n\n"<<"You current health: "<<ourHero.getHealth();
                                                cin.ignore();
                                                cin.get();
                                                system("cls");

                                            }
                                            else
                                            {
                                                std::ifstream Reader1 ("youud.txt");             //Open file
                                                std::string Art2 = getFileContents (Reader1);
                                                std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "\nWow you dodged the baby wolf's attack!";
                                                cin.ignore();
                                                cin.get();
                                                system("cls");
                                            }
                                        }
                                        cin.ignore();
                                        cin.get();
                                        system("cls");
                                        break;
                                    }
                                    case 2:
                                    {
                                        if((rand()%4)<2)
                                        {
                                            std::ifstream Reader1 ("funnyface.txt");             //Open file
                                            std::string Art2 = getFileContents (Reader1);
                                            std::cout << Art2 << std::endl;
                                            system("COLOR 0C");
                                            SetConsoleTextAttribute(hConsole, 3);
                                            cout << "You make a funny face to baby wolf, and he allows you to walk away.\n";
                                            cout << "Please press enter to continue...\n";
                                            cin.ignore();
                                            cin.get();
                                            system("cls");
                                            babywolf.setHealth(0);
                                            break;
                                        }
                                        else
                                        {
                                            std::ifstream Reader1 ("funnyface.txt");             //Open file
                                            std::string Art2 = getFileContents (Reader1);
                                            std::cout << Art2 << std::endl;
                                            system("COLOR 0C");
                                            SetConsoleTextAttribute(hConsole, 3);
                                            cin.ignore();
                                            cin.get();
                                            system("cls");
                                            std::ifstream Reader2 ("babywolfa.txt");             //Open file
                                            std::string Art3 = getFileContents (Reader2);
                                            std::cout << Art3 << std::endl;
                                            system("COLOR 0C");
                                            SetConsoleTextAttribute(hConsole, 3);
                                            cout << "You try to make funny face but you fail. The baby wolf attack you!";
                                            theHit=babywolf.getStr()*0.50;
                                                theHit=theHit*ourHero.getArmor();
                                                currentHealth=ourHero.getHealth()-theHit;
                                                ourHero.setHealth(currentHealth);
                                                cout << "The baby wolf has hit you for " << theHit << "health!\n\n"<<"You current health: "<<ourHero.getHealth();
                                                cin.ignore();
                                            cin.get();
                                            system("cls");

                                            break;
                                        }
                                        break;
                                    }
                                    default:
                                    {
                                        std::ifstream Reader1 ("is.txt");             //Open file
                                        std::string Art2 = getFileContents (Reader1);
                                        std::cout << Art2 << std::endl;
                                        system("COLOR 0C");
                                        SetConsoleTextAttribute(hConsole, 3);
                                        cout << "Invalid selection.\n\n";
                                        cout << "Please press enter to continue...\n";
                                        cin.ignore();
                                        cin.get();
                                        system("cls");
                                    }
                                    }
                                }
                                }


                        }
                        if(ourHero.getHealth()<1)
                                {
                                    cout << "Game over!";
                                    Sleep(1700);
                                    system("cls");
                                    break;
                                }
                            }
                    if(ourHero.getLevel() == 2)
                    switch(yourchoice)
                    {
                        case 1:
                        {

                                if (rand()%2 +1==1)
                                {

                        std::ifstream Reader1 ("gobolindad.txt");             //Open file
                        std::string Art2 = getFileContents (Reader1);
                        std::cout << Art2 << std::endl;
                        system("COLOR 0A");
                        SetConsoleTextAttribute(hConsole, 3);
                            cout << "You find out a goblin's dad.\n";
                            character goblindad("goblin dad", 56, 14, 18, 4, 0, 0,0,0);
                               cin.ignore();
                                        cin.get();
                                        system("cls");
                            while(goblindad.getHealth()>0)
                            {
                                std::ifstream Reader1 ("youraction.txt");             //Open file
                                std::string Art2 = getFileContents (Reader1);
                                std::cout << Art2 << std::endl;
                                system("COLOR 0C");
                                SetConsoleTextAttribute(hConsole, 3);
                                cout << "Which action would you like to take?\n\n[1]Attack\n\n[2]Run\n";
                                cin >> fightchoice;
                                   cin.ignore();
                                        cin.get();
                                        system("cls");

                                switch(fightchoice)
                                {
                                    case 1:
                                    {
                                        if((ourHero.getStr()+(rand()%11))>(goblindad.getDex()+(rand()%11)))
                                        {
                                            theHit=ourHero.getStr();
                                             currentHealth=goblindad.getHealth()-theHit;
                                            goblindad.setHealth(currentHealth);
                                            std::ifstream Reader1 ("youa.txt");             //Open file
                                            std::string Art2 = getFileContents (Reader1);
                                            std::cout << Art2 << std::endl;
                                            system("COLOR 0C");
                                            SetConsoleTextAttribute(hConsole, 3);
                                            cout << "You hit the goblin's dad for " << theHit << " health!\n\n"<<"Goblin's dad health: "<<goblindad.getHealth();
                                               cin.ignore();
                                        cin.get();
                                        system("cls");
                                            if(1 > goblindad.getHealth())
                                            {
                                                std::ifstream Reader1 ("gobolindadj.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0A");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "Goblin dad: You so strong...can I work for you?\n You: Yea sure!! \n\nGoblin's dad has join your company as a noob worker\n\n You receive 50 gold and 100 experience!\n\nPlease press enter to continue...\n";
                                                newGold = ourHero.getGold()+50;
                                                ourHero.setGold(newGold);
                                                experience = experience +100;
                                                goblindad.setHealth(0);
                                                cin.ignore();
                                                cin.get();
                                                system("cls");
                                            }
                                        }
                                        else
                                        {
                                                std::ifstream Reader1 ("gobolindaddodge.txt");             //Open file
                                                std::string Art2 = getFileContents (Reader1);
                                                std::cout << Art2 << std::endl;
                                                system("COLOR 0A");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "The Goblin's dad has dodged your attack!\n\n";
                                                cin.ignore();
                                                cin.get();
                                        system("cls");
                                        }
                                        if(goblindad.getHealth()>0)
                                        {
                                            if((goblindad.getStr()+(rand()%11))>(ourHero.getDex()+(rand()%11)))
                                            {
                                                theHit=goblindad.getStr()*0.50;
                                                theHit=theHit*ourHero.getArmor();
                                                currentHealth=ourHero.getHealth()-theHit;
                                                ourHero.setHealth(currentHealth);
                                                std::ifstream Reader1 ("gobolindada.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0A");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "The Goblin's dad has hit you for " << theHit << "health!\n\n"<<" You current health: "<<ourHero.getHealth();
                                                cin.ignore();
                                                cin.get();
                                                system("cls");

                                            }
                                            else
                                            {
                                                std::ifstream Reader1 ("youd.txt");             //Open file
                                                std::string Art2 = getFileContents (Reader1);
                                                std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "\nWow you dodged the Goblin's dad attack!";
                                            }
                                        }
                                        cin.ignore();
                                        cin.get();
                                        system("cls");
                                        break;
                                    }
                                    case 2:
                                    {
                                        if((rand()%4)<2)
                                        {
                                            std::ifstream Reader1 ("shoes.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0A");
                                                SetConsoleTextAttribute(hConsole, 3);
                                            cout << "You help clean Goblin dad's shoes, and he allows you to walk away.\n";
                                            cout << "Please press enter to continue...\n";
                                            cin.ignore();
                                            cin.get();
                                            system("cls");
                                            goblindad.setHealth(0);
                                            break;
                                        }
                                        else
                                        {
                                            std::ifstream Reader2 ("shoes.txt");             //Open file
                                               std::string Art3 = getFileContents (Reader2);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0A");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cin.ignore();
                                            cin.get();
                                            std::ifstream Reader1 ("gobolindad.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0A");
                                                SetConsoleTextAttribute(hConsole, 3);

                                            cout << "You try to clean Goblin dad's shoes but you fail. The Goblin dad attack you!";
                                            theHit=goblindad.getStr()*0.50;
                                                theHit=theHit*ourHero.getArmor();
                                                currentHealth=ourHero.getHealth()-theHit;
                                                ourHero.setHealth(currentHealth);
                                                cout << "The Goblin's dad has hit you for " << theHit << "health!\n\n"<<"You current health:"<<ourHero.getHealth();
                                                cin.ignore();
                                            cin.get();
                                            system("cls");
                                            break;
                                        }
                                        break;
                                    }
                                    default:
                                    {
                                        std::ifstream Reader1 ("is.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                        cout << "Invalid selection.\n\n";
                                        cout << "Please press enter to continue...\n";
                                        cin.ignore();
                                        cin.get();
                                        system("cls");
                                    }
                                    }
                                }
                                }
                        }
                         if (rand()%2 +1==2)
                                {
                                                std::ifstream Reader1 ("troll.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0A");
                                                SetConsoleTextAttribute(hConsole, 3);

                            cout << "You find out a troll.\n";
                            character troll("troll", 65, 18, 14, 3, 0, 0,0,0);
                             cin.ignore();
                                        cin.get();
                                        system("cls");
                            while(troll.getHealth()>0)
                            {
                                std::ifstream Reader1 ("youraction.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                cout << "Which action would you like to take?\n\n[1]Troll\n\n[2]Run\n";
                                cin >> fightchoice;
                                 cin.ignore();
                                        cin.get();
                                        system("cls");
                                switch(fightchoice)
                                {
                                    case 1:
                                    {
                                        if((ourHero.getStr()+(rand()%11))>(troll.getDex()+(rand()%11)))
                                        {
                                            theHit=ourHero.getStr();
                                             currentHealth=troll.getHealth()-theHit;
                                            troll.setHealth(currentHealth);
                                            std::ifstream Reader1 ("youa.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                            cout << "You hit the troll for " << theHit << " health!\n\n"<<"Troll health: "<<troll.getHealth();
                                            cin.ignore();
                                        cin.get();
                                        system("cls");
                                            if(1 > troll.getHealth())
                                            {
                                                std::ifstream Reader1 ("trollj.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0A");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "\nTroll : I'm just trollllllling may join your team? You: No but you can work for me! \n\n Troll has join the company as a noob worker \n\nYou receive 60 gold and 110 experience!\n\nPlease press enter to continue...\n";
                                                newGold = ourHero.getGold()+60;
                                                ourHero.setGold(newGold);
                                                experience = experience +110;
                                                troll.setHealth(0);
                                                cin.ignore();
                                        cin.get();
                                        system("cls");
                                            }
                                        }
                                        else
                                        {
                                            std::ifstream Reader1 ("trolldodge.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0A");
                                                SetConsoleTextAttribute(hConsole, 3);
                                            cout << "The troll has dodged your attack!\n\n";
                                            cin.ignore();
                                            cin.get();
                                        system("cls");
                                        }
                                        if(troll.getHealth()>0)
                                        {
                                            if((troll.getStr()+(rand()%11))>(ourHero.getDex()+(rand()%11)))
                                            {
                                                theHit=troll.getStr()*0.50;
                                                theHit=theHit*ourHero.getArmor();
                                                currentHealth=ourHero.getHealth()-theHit;
                                                ourHero.setHealth(currentHealth);
                                                std::ifstream Reader1 ("trolla.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0A");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "The troll has hit you for " << theHit << "health!\n\n"<<"You current health: "<<ourHero.getHealth();
                                                cin.ignore();
                                                cin.get();
                                                system("cls");

                                            }
                                            else
                                            {
                                                std::ifstream Reader1 ("youd.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "\nWow you dodged the troll's attack!";
                                                cin.ignore();
                                            cin.get();
                                            system("cls");
                                            }
                                        }
                                        cin.ignore();
                                        cin.get();
                                        system("cls");
                                        break;
                                    }
                                    case 2:
                                    {
                                        if((rand()%4)<2)
                                        {
                                            std::ifstream Reader1 ("trollface.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                            cout << "You make a troll face to Troll, and he allows you to walk away.\n";
                                            cout << "Please press enter to continue...\n";
                                            cin.ignore();
                                            cin.get();
                                            system("cls");
                                            troll.setHealth(0);
                                            break;
                                        }
                                        else
                                        {
                                            std::ifstream Reader1 ("trollface.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                 cin.ignore();
                                            cin.get();
                                                std::ifstream Reader2 ("trolla.txt");             //Open file
                                               std::string Art3 = getFileContents (Reader2);
                                               std::cout << Art3 << std::endl;
                                                system("COLOR 0A");
                                                SetConsoleTextAttribute(hConsole, 3);
                                            cout << "You try to make troll face but you fail. The Troll attack you!";
                                             theHit=troll.getStr()*0.50;
                                                theHit=theHit*ourHero.getArmor();
                                                currentHealth=ourHero.getHealth()-theHit;
                                                ourHero.setHealth(currentHealth);
                                                cout << "The troll has hit you for " << theHit << "health!\n\n"<<"You current health: "<<ourHero.getHealth();
                                                cin.ignore();
                                            cin.get();
                                            system("cls");

                                            break;
                                        }
                                        break;
                                    }
                                    default:
                                    {
                                        std::ifstream Reader1 ("is.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                        cout << "Invalid selection.\n\n";
                                        cout << "Please press enter to continue...\n";
                                        cin.ignore();
                                        cin.get();
                                        system("cls");
                                    }
                                    }
                                }
                                }




                        }
                    if(ourHero.getLevel() == 3)
                    switch(yourchoice)
                    {
                        case 1:
                        {

                                if (rand()%2 +1==1)
                                {

                                                std::ifstream Reader1 ("ghost.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 09");
                                                SetConsoleTextAttribute(hConsole, 3);
                            cout << "You find out a Ghost.\n";
                            character ghost("Ghost", 110, 30, 35, 1, 0, 0,0,0);
                            cin.ignore();
                                        cin.get();
                                        system("cls");
                            while(ghost.getHealth()>0)
                            {
                                 std::ifstream Reader1 ("youraction.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                cout << "Which action would you like to take?\n\n[1]Attack\n\n[2]Run\n";
                                cin >> fightchoice;
                                cin.ignore();
                                        cin.get();
                                system("cls");
                                switch(fightchoice)
                                {
                                    case 1:
                                    {
                                        if((ourHero.getStr()+(rand()%11))>(ghost.getDex()+(rand()%11)))
                                        {
                                            theHit=ourHero.getStr();
                                             currentHealth=ghost.getHealth()-theHit;
                                            ghost.setHealth(currentHealth);
                                             std::ifstream Reader1 ("youuua.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                            cout << "You hit the Ghost for " << theHit << " health!\n\n"<<"Ghost health: "<<ghost.getHealth();
                                            cin.ignore();
                                        cin.get();
                                        system("cls");
                                            if(1 > ghost.getHealth())
                                            {
                                                std::ifstream Reader1 ("ghostj.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 09");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "Ghost: You so strong...can I work for you?\n You: Yea sure!! \n\nGhost has join your company as a experience worker\n\n You receive 100 gold and 200 experience!\n\nPlease press enter to continue...\n";
                                                newGold = ourHero.getGold()+100;
                                                ourHero.setGold(newGold);
                                                experience = experience +200;
                                                ghost.setHealth(0);
                                                 cin.ignore();
                                        cin.get();
                                        system("cls");
                                            }
                                        }
                                        else
                                        {
                                             std::ifstream Reader1 ("ghostdodge.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 09");
                                                SetConsoleTextAttribute(hConsole, 3);
                                            cout << "The Ghost has dodged your attack!\n\n";
                                             cin.ignore();
                                        cin.get();
                                        system("cls");
                                        }
                                        if(ghost.getHealth()>0)
                                        {
                                            if((ghost.getStr()+(rand()%11))>(ourHero.getDex()+(rand()%11)))
                                            {
                                                theHit=ghost.getStr()*0.50;
                                                theHit=theHit*ourHero.getArmor();
                                                currentHealth=ourHero.getHealth()-theHit;
                                                ourHero.setHealth(currentHealth);
                                                 std::ifstream Reader1 ("ghosta.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 09");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "The Ghost has hit you for " << theHit << "health!\n\n"<<"You current health: "<<ourHero.getHealth();
                                        cin.ignore();
                                        cin.get();
                                        system("cls");

                                            }
                                            else
                                            {
                                                 std::ifstream Reader1 ("youuud.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "\nWow you dodged the Ghost attack!";
                                                cin.ignore();
                                        cin.get();
                                        system("cls");
                                            }
                                        }
                                        cin.ignore();
                                        cin.get();
                                        system("cls");
                                        break;
                                    }
                                    case 2:
                                    {
                                        if((rand()%4)<2)
                                        {
                                             std::ifstream Reader1 ("ghosthome.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 09");
                                                SetConsoleTextAttribute(hConsole, 3);
                                            cout << "You help Ghost find his home, and he allows you to walk away.\n";
                                            cout << "Please press enter to continue...\n";
                                            cin.ignore();
                                            cin.get();
                                            system("cls");
                                            ghost.setHealth(0);
                                            break;
                                        }
                                        else
                                        {
                                             std::ifstream Reader1 ("ghosthome.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 09");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cin.ignore();
                                            cin.get();
                                                 std::ifstream Reader2 ("ghosta.txt");             //Open file
                                               std::string Art3 = getFileContents (Reader2);
                                               std::cout << Art3 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                            cout << "You try to find Ghost's home but you fail. The Ghost attack you!";
                                            theHit=ghost.getStr()*0.50;
                                                theHit=theHit*ourHero.getArmor();
                                                currentHealth=ourHero.getHealth()-theHit;
                                                ourHero.setHealth(currentHealth);
                                                cout << "The Ghost has hit you for " << theHit << "health!\n\n"<<"You current health:"<<ourHero.getHealth();
                                                cin.ignore();
                                            cin.get();
                                            system("cls");
                                            break;
                                        }
                                        break;
                                    }
                                    default:
                                    {
                                         std::ifstream Reader1 ("is.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                        cout << "Invalid selection.\n\n";
                                        cout << "Please press enter to continue...\n";
                                        cin.ignore();
                                        cin.get();
                                        system("cls");
                                    }
                                    }
                                }
                                }
                        }
                         if (rand()%2 +1==2)
                                {
                                                std::ifstream Reader1 ("darkknight.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 09");
                                                SetConsoleTextAttribute(hConsole, 3);

                            cout << "You find out a DarkKnight.\n";
                            character darknight("DarkKnight", 180, 35, 30, 1, 0, 0,0,0);
                            cin.ignore();
                                        cin.get();
                                        system("cls");
                            while(darknight.getHealth()>0)
                            {
                                 std::ifstream Reader1 ("youraction.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                cout << "Which action would you like to take?\n\n[1]Attack\n\n[2]Run\n";
                                cin >> fightchoice;
                                cin.ignore();
                                        cin.get();
                                        system("cls");
                                switch(fightchoice)
                                {
                                    case 1:
                                    {
                                        if((ourHero.getStr()+(rand()%11))>(darknight.getDex()+(rand()%11)))
                                        {
                                            theHit=ourHero.getStr();
                                             currentHealth=darknight.getHealth()-theHit;
                                            darknight.setHealth(currentHealth);
                                            std::ifstream Reader1 ("youuua.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                            cout << "You hit the DarkKnight for " << theHit << " health!\n\n"<<"DarkKnight health: "<<darknight.getHealth();
                                        cin.ignore();
                                        cin.get();
                                        system("cls");
                                            if(1 > darknight.getHealth())
                                            {
                                                 std::ifstream Reader1 ("darkknightj.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 09");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "DarkKnight : Your are the strongest monster i see so far may I join your team? You: Of course DarkKnight \n\n DarkKnight has join the company as a experience worker \n\nYou receive 120 gold and 220 experience!\n\nPlease press enter to continue...\n";
                                                newGold = ourHero.getGold()+120;
                                                ourHero.setGold(newGold);
                                                experience = experience +220;
                                                darknight.setHealth(0);
                                                cin.ignore();
                                        cin.get();
                                        system("cls");
                                            }
                                        }
                                        else
                                        {
                                             std::ifstream Reader1 ("darkknightd.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 09");
                                                SetConsoleTextAttribute(hConsole, 3);
                                            cout << "The DarkKnight has dodged your attack!\n\n";
                                            cin.ignore();
                                        cin.get();
                                        system("cls");
                                        }
                                        if(darknight.getHealth()>0)
                                        {
                                            if((darknight.getStr()+(rand()%11))>(ourHero.getDex()+(rand()%11)))
                                            {
                                                theHit=darknight.getStr()*0.50;
                                                theHit=theHit*ourHero.getArmor();
                                                currentHealth=ourHero.getHealth()-theHit;
                                                ourHero.setHealth(currentHealth);
                                                 std::ifstream Reader1 ("darkknighta.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 09");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "The DarkKnight has hit you for " << theHit << "health!\n\n"<<"You current health: "<<ourHero.getHealth();
cin.ignore();
                                        cin.get();
                                        system("cls");

                                            }
                                            else
                                            {
                                                 std::ifstream Reader1 ("youuud.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "\nWow you dodged the DarkKnight's attack!";
                                                cin.ignore();
                                        cin.get();
                                        system("cls");
                                            }
                                        }
                                        cin.ignore();
                                        cin.get();
                                        system("cls");
                                        break;
                                    }
                                    case 2:
                                    {
                                        if((rand()%4)<2)
                                        {
                                            std::ifstream Reader1 ("darkknightc.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                            cout << "You pretend your in his team, and he allows you to walk away.\n";
                                            cout << "Please press enter to continue...\n";
                                            cin.ignore();
                                            cin.get();
                                            system("cls");
                                            darknight.setHealth(0);
                                            break;
                                        }
                                        else
                                        {
                                            std::ifstream Reader1 ("darkknightcc.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);

                                            cout << "You try to pretend as his team but you fail. The DarkKnight attack you!";
                                             theHit=darknight.getStr()*0.50;
                                                theHit=theHit*ourHero.getArmor();
                                                currentHealth=ourHero.getHealth()-theHit;
                                                ourHero.setHealth(currentHealth);
                                                cout << "The DarkKnight has hit you for " << theHit << "health!\n\n"<<"You current health: "<<ourHero.getHealth();
                                                cin.ignore();
                                            cin.get();
                                            system("cls");

                                            break;
                                        }
                                        break;
                                    }
                                    default:
                                    {
                                        std::ifstream Reader1 ("is.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                        cout << "Invalid selection.\n\n";
                                        cout << "Please press enter to continue...\n";
                                        cin.ignore();
                                        cin.get();
                                        system("cls");
                                    }
                                    }
                                }
                                }




                        }
                    if(ourHero.getLevel() == 4)
                    switch(yourchoice)
                    {
                        case 1:
                        {


                                {

                                                std::ifstream Reader1 ("clone.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                            cout << "You find out a your clone.\n";
                            character clone("Clone", 300, 40, 42, 1, 0, 0,0,0);
                             cin.ignore();
                             cin.get();
                             system("cls");
                            while(clone.getHealth()>0)
                            {
                                std::ifstream Reader1 ("youraction.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                cout << "Which action would you like to take?\n\n[1]Attack\n\n[2]Run\n";
                                cin >> fightchoice;
                                 cin.ignore();
                                        cin.get();
                                        system("cls");
                                switch(fightchoice)
                                {
                                    case 1:
                                    {
                                        if((ourHero.getStr()+(rand()%11))>(clone.getDex()+(rand()%11)))
                                        {
                                            theHit=ourHero.getStr();
                                             currentHealth=clone.getHealth()-theHit;
                                            clone.setHealth(currentHealth);
                                            std::ifstream Reader1 ("you1a.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                            cout << "You hit the your Clone for " << theHit << " health!\n\n"<<"Clone health:"<<clone.getHealth();
 cin.ignore();
                                        cin.get();
                                        system("cls");
                                            if(1 > clone.getHealth())
                                            {
                                               std::ifstream Reader1 ("clonej.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "Your Clone: You are so strong my brother...I want to join and help you.\n You: Yea sure my clone no no my brother :D!! \n\nClone has join your company as a professional worker\n\n You receive 250 gold and 450 experience!\n\nPlease press enter to continue...\n";
                                                newGold = ourHero.getGold()+250;
                                                ourHero.setGold(newGold);
                                                experience = experience +450;
                                                clone.setHealth(0);
                                                 cin.ignore();
                                        cin.get();
                                        system("cls");
                                            }
                                        }
                                        else
                                        {
                                            std::ifstream Reader1 ("cloned.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                            cout << "The your Clone has dodged your attack!\n\n";
                                             cin.ignore();
                                        cin.get();
                                        system("cls");
                                        }
                                        if(clone.getHealth()>0)
                                        {
                                            if((clone.getStr()+(rand()%11))>(ourHero.getDex()+(rand()%11)))
                                            {
                                                theHit=clone.getStr()*0.50;
                                                theHit=theHit*ourHero.getArmor();
                                                currentHealth=ourHero.getHealth()-theHit;
                                                ourHero.setHealth(currentHealth);
                                                std::ifstream Reader1 ("clonea.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "The your Clone has hit you for " << theHit << "health!\n\n"<<"You current health: "<<ourHero.getHealth();
                                                cin.ignore();
                                                cin.get();
                                                system("cls");

                                            }
                                            else
                                            {
                                                 std::ifstream Reader1 ("you1d.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "Wow you dodged the your Clone attack!";
                                                 cin.ignore();
                                        cin.get();
                                        system("cls");
                                            }
                                        }
                                        cin.ignore();
                                        cin.get();
                                        system("cls");
                                        break;
                                    }
                                    case 2:
                                    {
                                        if((rand()%4)<2)
                                        {
                                            std::ifstream Reader1 ("clonem.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                            cout << "You help your Clone find his name, and he allows you to walk away.\n";
                                            cout << "Please press enter to continue...\n";
                                            cin.ignore();
                                            cin.get();
                                            system("cls");
                                            clone.setHealth(0);
                                            break;
                                        }
                                        else
                                        {
                                            std::ifstream Reader1 ("clonem.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cin.ignore();
                                            cin.get();
                                            system("cls");
                                                std::ifstream Reader2 ("clonea.txt");             //Open file
                                               std::string Art3 = getFileContents (Reader2);
                                               std::cout << Art3 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                            cout << "You forgot your name as Clone's name. Your Clone attack you!";
                                            theHit=clone.getStr()*0.50;
                                                theHit=theHit*ourHero.getArmor();
                                                currentHealth=ourHero.getHealth()-theHit;
                                                ourHero.setHealth(currentHealth);
                                                cout << "Your Clone has hit you for " << theHit << "health!\n\n"<<"You current health: "<<ourHero.getHealth();
                                                cin.ignore();
                                            cin.get();
                                            system("cls");
                                            break;
                                        }
                                        break;
                                    }
                                    default:
                                    {
                                         std::ifstream Reader1 ("is.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                        cout << "Invalid selection.\n\n";
                                        cout << "Please press enter to continue...\n";
                                        cin.ignore();
                                        cin.get();
                                        system("cls");
                                    }
                                    }
                                }
                                }
                        }









                        }
                    if(ourHero.getLevel() == 5)
                    switch(yourchoice)
                    {
                        case 1:
                        {


                                {

                                                std::ifstream Reader1 ("blackdragon.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                            cout << "You meet the final boss on the top of the tower\n";
                            character blackdragon("Black Dragon", 500, 45, 47, 10, 0, 0,0,0);
                             cin.ignore();
                                        cin.get();
                                        system("cls");
                            while(blackdragon.getHealth()>0)
                            {
                                 std::ifstream Reader1 ("youraction.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                cout << "Which action would you like to take?\n\n[1]Attack\n\n[2]Run\n";
                                cin >> fightchoice;
                                 cin.ignore();
                                        cin.get();
                                        system("cls");
                                switch(fightchoice)
                                {
                                    case 1:
                                    {
                                        if((ourHero.getStr()+(rand()%11))>(blackdragon.getDex()+(rand()%11)))
                                        {
                                            theHit=ourHero.getStr();
                                             currentHealth=blackdragon.getHealth()-theHit;
                                            blackdragon.setHealth(currentHealth);
                                            std::ifstream Reader1 ("youuuua.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);

                                            cout << "You hit the your Mr. Dark for " << theHit << " health!\n\n"<<"Mr. Dark health: "<<blackdragon.getHealth();
                                            cin.ignore();
                                        cin.get();
                                        system("cls");
                                            if(1 > blackdragon.getHealth())
                                            {
                                                std::ifstream Reader1 ("blackdragont.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "Mr. Dark: You...are...so...strong...my....son...thanks for saving me from this tower.\n";
                                                cin.ignore();
                                        cin.get();
                                        system("cls");
                                                std::ifstream Reader2 ("blackdragontt.txt");             //Open file
                                               std::string Art3 = getFileContents (Reader2);
                                               std::cout << Art3 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout <<" You: YOU ARE MY DAD??!!\n";
                                                cin.ignore();
                                        cin.get();
                                        system("cls");
                                                                       std::ifstream Reader3 ("blackdragont.txt");             //Open file
                                               std::string Art4 = getFileContents (Reader3);
                                               std::cout << Art4 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout <<"Dad: Yes my son. Sorry 5 years ago this tower is the happiest place for all monsters, and we all helping each other and live with human peacefully\n";
                                                cin.ignore();
                                        cin.get();
                                        system("cls");
                                                                       std::ifstream Reader4 ("blackdragonttt.txt");             //Open file
                                               std::string Art5 = getFileContents (Reader4);
                                               std::cout << Art5 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "(baby Goblin and his Dad, Baby wolf and Troll, Ghost, Dark Knight, and Your Colon all walk out stay behind Mr. Dark\n)";
                                                          cin.ignore();
                                        cin.get();
                                        system("cls");
                                        std::ifstream Reader5 ("blackdragontttt.txt");             //Open file
                                               std::string Art6 = getFileContents (Reader5);
                                               std::cout << Art6 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout <<" Dad: One day, we all get control by a dark wizard and start attack human....We need your help to find out dark wizard and set us free again my aon..";
                                                          cin.ignore();
                                        cin.get();
                                        system("cls");
                                        std::ifstream Reader6 ("blackdragonj.txt");             //Open file
                                               std::string Art7 = getFileContents (Reader6);
                                               std::cout << Art7 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "Mr. Dark has join your company as a professional worker)\n\n You receive 500 gold and 900 experience!\n\nPlease press enter to continue...\n";
                                                newGold = ourHero.getGold()+500;
                                                ourHero.setGold(newGold);
                                                experience = experience +900;
                                                blackdragon.setHealth(0);
                                                cin.ignore();
                                        cin.get();
                                        system("cls");
                                            }
                                        }
                                        else
                                        {
                                            std::ifstream Reader1 ("blackdragond.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                            cout << "Mr. Dark has dodged your attack!\n\n";
                                            cin.ignore();
                                        cin.get();
                                        system("cls");
                                        }
                                        if(blackdragon.getHealth()>0)
                                        {
                                            if((blackdragon.getStr()+(rand()%11))>(ourHero.getDex()+(rand()%11)))
                                            {
                                                theHit=blackdragon.getStr()*0.50;
                                                theHit=theHit*ourHero.getArmor();
                                                currentHealth=ourHero.getHealth()-theHit;
                                                ourHero.setHealth(currentHealth);
                                                std::ifstream Reader1 ("blackdragona.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "Mr. Dark has hit you for " << theHit << "health!\n\n"<<"You current health: "<<ourHero.getHealth();
                                        cin.ignore();
                                        cin.get();
                                        system("cls");

                                            }
                                            else
                                            {
                                                std::ifstream Reader1 ("youuuud.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "Wow you dodged the Mr. Dark attack!";
                                                cin.ignore();
                                        cin.get();
                                        system("cls");
                                            }
                                        }
                                        cin.ignore();
                                        cin.get();
                                        system("cls");
                                        break;
                                    }
                                    case 2:
                                    {
                                        if((rand()%4)<2)
                                        {
                                             std::ifstream Reader1 ("blackdragonaaa.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                            cout << "Mr. Dark look at you don't know why he let you walk away.\n";
                                            cout << "Please press enter to continue...\n";
                                            cin.ignore();
                                            cin.get();
                                            system("cls");
                                            blackdragon.setHealth(0);
                                            break;
                                        }
                                        else
                                        {
                                             std::ifstream Reader1 ("blackdragonaa.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                            cout << "Mr. Dark eye's turn red and start attack you!";
                                            theHit=blackdragon.getStr()*0.50;
                                                theHit=theHit*ourHero.getArmor();
                                                currentHealth=ourHero.getHealth()-theHit;
                                                ourHero.setHealth(currentHealth);
                                                cout << "Mr. Dark has hit you for " << theHit << "health!\n\n"<<"You current health: "<<ourHero.getHealth();
                                                cin.ignore();
                                            cin.get();
                                            system("cls");
                                            break;
                                        }
                                        break;
                                    }
                                    default:
                                    {
                                         std::ifstream Reader1 ("is.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                        cout << "Invalid selection.\n\n";
                                        cout << "Please press enter to continue...\n";
                                        cin.ignore();
                                        cin.get();
                                        system("cls");
                                    }
                                    }
                                }
                                }
                        }









                        }

                    if(ourHero.getLevel() == 5 && ourHero.getDragonPiece() == 3)
                    switch(yourchoice)
                    {
                        case 1:
                        {


                                {
                                                std::ifstream Reader1 ("darkwizardone.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0e");
                                                SetConsoleTextAttribute(hConsole, 3);

                            cout << "You find a big stone door on the top of the tower, and you put 3 dragon piece on the door.....the door start opening.....\n  You saw a  dark person inside....\n";
                            cin.ignore();
                                            cin.get();
                                            system("cls");
                                            std::ifstream Reader2 ("blackdragontttt.txt");             //Open file
                                               std::string Art3 = getFileContents (Reader2);
                                               std::cout << Art3 << std::endl;
                                                system("COLOR 0e");
                                                SetConsoleTextAttribute(hConsole, 3);
                            cout << "???: You finally find me young man... You: What your voice sounds familiar..?!";
                            cin.ignore();
                                            cin.get();
                                            system("cls");

                            std::ifstream Reader3 ("darkwizardtwo.txt");             //Open file
                                               std::string Art4 = getFileContents (Reader3);
                                               std::cout << Art4 << std::endl;
                                                system("COLOR 0e");
                                                SetConsoleTextAttribute(hConsole, 3);
                            cout << " Wait are you my boss who disappear for three months??\n";
                            cin.ignore();
                                            cin.get();
                                            system("cls");

                            std::ifstream Reader4 ("darkwizard.txt");             //Open file
                                               std::string Art5 = getFileContents (Reader4);
                                               std::cout << Art5 << std::endl;
                                                system("COLOR 0e");
                                                SetConsoleTextAttribute(hConsole, 3);
                            cout << "Dark Wizard: Yes young man we finally meet here since you work for my company.";
                            cin.ignore();
                                            cin.get();
                                            system("cls");
                                            std::ifstream Reader5 ("darkwizardk.txt");             //Open file
                                               std::string Art6 = getFileContents (Reader5);
                                               std::cout << Art6 << std::endl;
                                                system("COLOR 0e");
                                                SetConsoleTextAttribute(hConsole, 3);
                            cout << "Dark Wizard: If you want to save those monster come defeat me or let me control you..Brouhaha...\n";
                            character wizard("Dark Wizard", 800, 50, 58, 1, 0, 0,0,0);
                             cin.ignore();
                                        cin.get();
                                        system("cls");
                            while(wizard.getHealth()>0)
                            {
                                  std::ifstream Reader6 ("youraction.txt");             //Open file
                                               std::string Art7 = getFileContents (Reader6);
                                               std::cout << Art7 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                cout << "Which action would you like to take?\n\n[1]Attack\n\n";
                                cin >> fightchoice;
                                 cin.ignore();
                                        cin.get();
                                        system("cls");
                                switch(fightchoice)
                                {
                                    case 1:
                                    {
                                        if((ourHero.getStr()+(rand()%11))>(wizard.getDex()+(rand()%11)))
                                        {
                                            theHit=ourHero.getStr();
                                             currentHealth=wizard.getHealth()-theHit;
                                            wizard.setHealth(currentHealth);
                                              std::ifstream Reader1 ("youuuua.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                            cout << "You hit the Dark Wizard for " << theHit << " health!\n\n"<<"Dark Wizard health: "<<wizard.getHealth();
                                 cin.ignore();
                                        cin.get();
                                        system("cls");
                                            if(1 > wizard.getHealth())
                                            {
                                                 std::ifstream Reader1 ("deadboss.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0e");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "Dark Wizard: No....you defeat me no way. You are the first one and only one....\n";
                                                cin.ignore();
                                        cin.get();
                                        system("cls");
                                                std::ifstream Reader2 ("youuuu.txt");             //Open file
                                               std::string Art3 = getFileContents (Reader2);
                                               std::cout << Art3 << std::endl;
                                                system("COLOR 0e");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "You: Is time to free all the monster..(you touch the Dragon stone it has a shiny light and it capture the Dark Wizard\n";
                                                 cin.ignore();
                                        cin.get();
                                        system("cls");
                                                std::ifstream Reader3 ("s.txt");             //Open file
                                               std::string Art4 = getFileContents (Reader3);
                                               std::cout << Art4 << std::endl;
                                                system("COLOR 0e");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "Dark Wizard: Noooooo...so dark inside the stone\n";
                                                cin.ignore();
                                        cin.get();
                                        system("cls");
                                        std::ifstream Reader4 ("ss.txt");             //Open file
                std::string Art5 = getFileContents (Reader4);
                std::cout << Art5 << std::endl;
                system("COLOR 0C");
                SetConsoleTextAttribute(hConsole, 3);
                                                cout << " You: Mr.$ this stone put in your store\n Mr$: Ok, young man this stone is pretty haha\n";
                                                cin.ignore();
                                        cin.get();
                                        system("cls");
                                        std::ifstream Reader5 ("blackdragonts.txt");             //Open file
                std::string Art6 = getFileContents (Reader5);
                std::cout << Art6 << std::endl;
                system("COLOR 0C");
                SetConsoleTextAttribute(hConsole, 3);
                                                cout << " Dad: Good job my son we all free now and we can enjoy the freedom and fresh air ^V^ haha\n";
                                                cin.ignore();
                                        cin.get();
                                        system("cls");
                                        std::ifstream Reader6 ("thankyou.txt");             //Open file
                std::string Art7 = getFileContents (Reader6);
                std::cout << Art7 << std::endl;
                system("COLOR 0C");
                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "All the other monsters: Thank you "<< name << " and you name will be remember forever and now the tower is full with happiest monster from all the world.";
                                                                                            cin.ignore();
                                        cin.get();
                                        system("cls");
                                         std::ifstream Reader8 ("theend.txt");             //Open file
                std::string Art9 = getFileContents (Reader8);
                std::cout << Art9 << std::endl;
                system("COLOR 0C");
                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "\n\n =============The End===========\n\nThank for Playing"<< name ;

                                                ourHero.setHealth(0);
                                                wizard.setHealth(0);
                                            }
                                        }
                                        else
                                        {
                                             std::ifstream Reader1 ("darkwizarddodge.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0e");
                                                SetConsoleTextAttribute(hConsole, 3);
                                            cout << "Dark Wizard has dodged your attack!\n\n";
                                            cin.ignore();
                                        cin.get();
                                        system("cls");
                                        }
                                        if(wizard.getHealth()>0)
                                        {
                                            if((wizard.getStr()+(rand()%11))>(ourHero.getDex()+(rand()%11)))
                                            {
                                                theHit=wizard.getStr()*0.50;
                                                theHit=theHit*ourHero.getArmor();
                                                currentHealth=ourHero.getHealth()-theHit;
                                                ourHero.setHealth(currentHealth);
                                                 std::ifstream Reader1 ("darkwizarda.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0e");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "Dark Wizard has hit you for " << theHit << "health!\n\n"<<"You current health: "<<ourHero.getHealth();
cin.ignore();
                                        cin.get();
                                        system("cls");

                                            }
                                            else
                                            {
                                                 std::ifstream Reader1 ("youuuud.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                                cout << "Wow you dodged the Dark Wizard attack!";
                                                                                 cin.ignore();
                                        cin.get();
                                        system("cls");
                                            }
                                        }
                                        cin.ignore();
                                        cin.get();
                                        system("cls");
                                        break;
                                    }

                                    default:
                                    {
                                         std::ifstream Reader1 ("is.txt");             //Open file
                                               std::string Art2 = getFileContents (Reader1);
                                               std::cout << Art2 << std::endl;
                                                system("COLOR 0C");
                                                SetConsoleTextAttribute(hConsole, 3);
                                        cout << "Invalid selection.\n\n";
                                        cout << "Please press enter to continue...\n";
                                        cin.ignore();
                                        cin.get();
                                        system("cls");
                                    }
                                    }
                                }
                                }
                        }









                        }





                    }




                    system("cls");
                    break;

        case 3:
            {
           system("cls");
            std::ifstream Reader ("store.txt");
            std::string Art1 = getFileContents (Reader);
            std::cout << Art1 << std::endl;
            system("COLOR 0C");
            SetConsoleTextAttribute(hConsole, 3);
                cout << "Welcome to Mr.$ Item store\n";
                cout << "You currently have " << ourHero.getGold() << " gold.\n\n";
                cout << "Hehe!! What service would you like to buy my friend?\n\n[1]Dragon Potion- 50g\n\n[2]Go chat with Mr.$ - 100g\n\n[3]Weird cloth - 100g" <<
                "\n\n[4]Touch Ms.$'s cute pet - 100g\n\n[5]DragonPiece - 1000g\n\n[6]Exit\n";
                int choice;
                cin >> choice;
                system("cls");
                switch(choice)
                {
                    case 1:
                        {
                            if(ourHero.getGold()>49)
                        {
                            newHealth = ourHero.getHealth()+100;
                            ourHero.setHealth(newHealth);
                            newGold = ourHero.getGold()-50;
                            ourHero.setGold(newGold);
                            std::ifstream Reader ("dragonpotion.txt");
                            std::string Art1 = getFileContents (Reader);
                            std::cout << Art1 << std::endl;
                            system("COLOR 0C");
                            SetConsoleTextAttribute(hConsole, 3);
                            cout << "groo groo groo~~ You feel much more better now";
                            cin.ignore();
                            cin.get();
                            system("cls");
                            break;
                        }
                        else
                        {
                             std::ifstream Reader ("nomoney.txt");
                            std::string Art1 = getFileContents (Reader);
                            std::cout << Art1 << std::endl;
                            system("COLOR 0C");
                            SetConsoleTextAttribute(hConsole, 3);
                            cout << "No Money no potion young man =o= Come back when you have what I want!";
                            cin.ignore();
                            cin.get();
                            system("cls");
                            break;
                        }
                        }
                    case 2:
                        {
                            if(ourHero.getGold()>99)
                        {
                            newStr = ourHero.getStr()+5;
                            ourHero.setStr(newStr);
                            newGold = ourHero.getGold()-100;
                            ourHero.setGold(newGold);
                            std::ifstream Reader ("story.txt");
                            std::string Art1 = getFileContents (Reader);
                            std::cout << Art1 << std::endl;
                            system("COLOR 0C");
                            SetConsoleTextAttribute(hConsole, 3);
                            cout << "Mr.$ tells you his past adventure experience.. STR + 5";
                            cin.ignore();
                            cin.get();
                            system("cls");
                            break;
                        }
                        else
                        {
                             std::ifstream Reader ("nomoney.txt");
                            std::string Art1 = getFileContents (Reader);
                            std::cout << Art1 << std::endl;
                            system("COLOR 0C");
                            SetConsoleTextAttribute(hConsole, 3);
                            cout << "No Money no chat young man =o= Come back when you have what I want!";
                            cin.ignore();
                            cin.get();
                            system("cls");
                            break;
                        }
                        }
                    case 3:
                        {
                            if(ourHero.getGold()>99)
                        {

                            newArmor = ourHero.getArmor()+4;
                            ourHero.setArmor(newArmor);
                            newGold = ourHero.getGold()-100;
                            ourHero.setGold(newGold);
                            std::ifstream Reader ("cloth.txt");
                            std::string Art1 = getFileContents (Reader);
                            std::cout << Art1 << std::endl;
                            system("COLOR 0C");
                            SetConsoleTextAttribute(hConsole, 3);
                            cout << "You wear the weird cloth when you turn around the cloth disappear.. Armor + 4";
                            cin.ignore();
                            cin.get();
                            system("cls");
                            break;
                        }
                        else
                        {
                             std::ifstream Reader ("nomoney.txt");
                            std::string Art1 = getFileContents (Reader);
                            std::cout << Art1 << std::endl;
                            system("COLOR 0C");
                            SetConsoleTextAttribute(hConsole, 3);
                            cout << "No Money no cloth young man =o= Come back when you have what I want!";
                            cin.ignore();
                            cin.get();
                            system("cls");
                            break;
                        }
                        }
                    case 4:
                        {
                            if(ourHero.getGold()>99)
                        {
                            newDex = ourHero.getDex()+5;
                            ourHero.setDex(newDex);
                            newGold = ourHero.getGold()-100;
                            ourHero.setGold(newGold);
                            std::ifstream Reader ("dodge.txt");
                            std::string Art1 = getFileContents (Reader);
                            std::cout << Art1 << std::endl;
                            system("COLOR 0C");
                            SetConsoleTextAttribute(hConsole, 3);
                            cout << "Mr.$'s pet suddenly want to attack you, but you dodge it.. DEX + 5";
                            cin.ignore();
                            cin.get();
                            system("cls");
                            break;
                        }
                        else
                        {
                             std::ifstream Reader ("nomoney.txt");
                            std::string Art1 = getFileContents (Reader);
                            std::cout << Art1 << std::endl;
                            system("COLOR 0C");
                            SetConsoleTextAttribute(hConsole, 3);
                            cout << "No Money no pet young man =o= Come back when you have what I want!";
                            cin.ignore();
                            cin.get();
                            system("cls");
                            break;
                        }
                        }
                    case 5:
                        {

                            if(ourHero.getGold()>999 && x ==0)
                        {
                            std::ifstream Reader1 ("dragonpiece.txt");             //Open file
                            std::string Art2 = getFileContents (Reader1);
                            std::cout << Art2 << std::endl;
                            system("COLOR 0C");
                            SetConsoleTextAttribute(hConsole, 3);
                            newDragonPiece = ourHero.getDragonPiece()+1;
                            ourHero.setDragonPiece(newDragonPiece);
                            newGold = ourHero.getGold()-1000;
                            ourHero.setGold(newGold);
                            cout << "Mr.$: I found this weird stone from the tower.\n You:WOW I like this stone .....\n(\\\Whisper in the air/// If you collect all 3 stone you will find the truth)...\nWhat does this mean?";
                            x=x+1;
                            cin.ignore();
                            cin.get();
                            system("cls");
                            break;
                        }

                        else
                        {
                            if(ourHero.getGold()>999 && x ==0)
                            {


                            cout << "No Money no stone young man =o= Come back when you have what I want!";
                            cin.ignore();
                            cin.get();
                            system("cls");
                            break;
                            }
                            else
                            {
                            std::ifstream Reader ("store.txt");
                            std::string Art1 = getFileContents (Reader);
                            std::cout << Art1 << std::endl;
                            system("COLOR 0C");
                            SetConsoleTextAttribute(hConsole, 3);
                            cout << "No more stone for you young man!";
                            cin.ignore();
                            cin.get();
                            system("cls");
                            break;
                            }
                        }
                        }
                    case 6:


                        {
                            break;
                        }

            }

            }


        case 4:
            {
                if (ourHero.getClass()=="pink monster" && ourHero.getLevel() == 1)

                    {
                    std::ifstream Reader ("youu.txt");             //Open file
                    std::string Art1 = getFileContents (Reader);
                    std::cout << Art1 << std::endl;
                    system("COLOR 0D");
                    SetConsoleTextAttribute(hConsole, 3);
                    }
                if (ourHero.getClass()=="pink monster" && ourHero.getLevel() == 2)

                    {
                    std::ifstream Reader ("you.txt");             //Open file
                    std::string Art1 = getFileContents (Reader);
                    std::cout << Art1 << std::endl;
                    system("COLOR 0D");
                    SetConsoleTextAttribute(hConsole, 3);
                    }
                  if (ourHero.getClass()=="pink monster" && ourHero.getLevel() == 3)

                    {
                    std::ifstream Reader ("youuu.txt");             //Open file
                    std::string Art1 = getFileContents (Reader);
                    std::cout << Art1 << std::endl;
                    system("COLOR 0D");
                    SetConsoleTextAttribute(hConsole, 3);
                    }

                if (ourHero.getClass()=="pink monster" && ourHero.getLevel() == 4)
                    {
                    std::ifstream Reader ("you1.txt");             //Open file
                    std::string Art1 = getFileContents (Reader);
                    std::cout << Art1 << std::endl;
                    system("COLOR 0D");
                    SetConsoleTextAttribute(hConsole, 3);
                    }
                if (ourHero.getClass()=="pink monster" && ourHero.getLevel() == 5)

                    {
                    std::ifstream Reader ("youuuu.txt");             //Open file
                    std::string Art1 = getFileContents (Reader);
                    std::cout << Art1 << std::endl;
                    system("COLOR 0D");
                    SetConsoleTextAttribute(hConsole, 3);
                    }

                if (ourHero.getClass()=="yellow monster" && ourHero.getLevel() == 1)

                    {
                    std::ifstream Reader ("youu.txt");             //Open file
                    std::string Art1 = getFileContents (Reader);
                    std::cout << Art1 << std::endl;
                    system("COLOR 0E");
                    SetConsoleTextAttribute(hConsole, 3);
                    }
                    if (ourHero.getClass()=="yellow monster" && ourHero.getLevel() == 2)

                    {
                    std::ifstream Reader ("you.txt");             //Open file
                    std::string Art1 = getFileContents (Reader);
                    std::cout << Art1 << std::endl;
                    system("COLOR 0E");
                    SetConsoleTextAttribute(hConsole, 3);
                    }
                    if (ourHero.getClass()=="yellow monster" && ourHero.getLevel() == 3)

                    {
                    std::ifstream Reader ("youuu.txt");             //Open file
                    std::string Art1 = getFileContents (Reader);
                    std::cout << Art1 << std::endl;
                    system("COLOR 0E");
                    SetConsoleTextAttribute(hConsole, 3);
                    }
                    if (ourHero.getClass()=="yellow monster" && ourHero.getLevel() == 4)

                    {
                    std::ifstream Reader ("you1.txt");             //Open file
                    std::string Art1 = getFileContents (Reader);
                    std::cout << Art1 << std::endl;
                    system("COLOR 0E");
                    SetConsoleTextAttribute(hConsole, 3);
                    }
                    if (ourHero.getClass()=="yellow monster" && ourHero.getLevel() == 5)

                    {
                    std::ifstream Reader ("youuuu.txt");             //Open file
                    std::string Art1 = getFileContents (Reader);
                    std::cout << Art1 << std::endl;
                    system("COLOR 0E");
                    SetConsoleTextAttribute(hConsole, 3);
                    }
                if (ourHero.getClass()=="red monster" && ourHero.getLevel() == 1)

                    {
                    std::ifstream Reader ("youu.txt");             //Open file
                    std::string Art1 = getFileContents (Reader);
                    std::cout << Art1 << std::endl;
                    system("COLOR 0C");
                    SetConsoleTextAttribute(hConsole, 3);
                    }
                     if (ourHero.getClass()=="red monster" && ourHero.getLevel() == 2)

                    {
                    std::ifstream Reader ("you.txt");             //Open file
                    std::string Art1 = getFileContents (Reader);
                    std::cout << Art1 << std::endl;
                    system("COLOR 0C");
                    SetConsoleTextAttribute(hConsole, 3);
                    }
                     if (ourHero.getClass()=="red monster" && ourHero.getLevel() == 3)

                    {
                    std::ifstream Reader ("youuu.txt");             //Open file
                    std::string Art1 = getFileContents (Reader);
                    std::cout << Art1 << std::endl;
                    system("COLOR 0C");
                    SetConsoleTextAttribute(hConsole, 3);
                    }
                     if (ourHero.getClass()=="red monster" && ourHero.getLevel() == 4)

                    {
                    std::ifstream Reader ("you1.txt");             //Open file
                    std::string Art1 = getFileContents (Reader);
                    std::cout << Art1 << std::endl;
                    system("COLOR 0C");
                    SetConsoleTextAttribute(hConsole, 3);
                    }
                     if (ourHero.getClass()=="red monster" && ourHero.getLevel() == 5)

                    {
                    std::ifstream Reader ("youuuu.txt");             //Open file
                    std::string Art1 = getFileContents (Reader);
                    std::cout << Art1 << std::endl;
                    system("COLOR 0C");
                    SetConsoleTextAttribute(hConsole, 3);
                    }
            cout << "=======The stats for your " << ourHero.getClass() << ":  " <<
            name << ".=======" << endl <<endl;
            SetConsoleTextAttribute(hConsole, 7);
            cout << "Level:  " << ourHero.getLevel() <<"\n"<<endl;
            SetConsoleTextAttribute(hConsole, 4);
            cout << "Health: " << ourHero.getHealth() << endl;
            SetConsoleTextAttribute(hConsole, 7);
            cout << "Strength: " << ourHero.getStr() << endl;
            cout  << "Dexterity: " << ourHero.getDex() <<"\n"<< endl ;
            SetConsoleTextAttribute(hConsole, 6);
            cout << "Money: " << ourHero.getGold() <<"\n"<<endl;
            SetConsoleTextAttribute(hConsole, 2);
            cout << "Dragon Piece: " << ourHero.getDragonPiece()<<endl;
            cin.ignore();
            cin.get();
            system("cls");
            break;
            }
        case 5:
            {
                cout << "Are you sure you want to exit MonsterTower?\n[Y]es or [n]o?";
                char yes;
                cin >> yes;
                if(yes == 'y' || yes == 'Y')
                    ourHero.setHealth(0);
                system("cls");
                break;
            }
            default:
            {

                cout << "Invalid selection.\n\n";
                cout << "Please press enter to continue...\n";
                cin.ignore();
                cin.get();
                system("cls");
            }
}
    }

}
