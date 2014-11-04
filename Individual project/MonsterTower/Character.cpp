#include <iostream>
#include <string>
#include "Character.h"

using namespace std;


character::character(string z, int a, int b, int c, float i, int e, int f, int wexp,int dp)
{
    setClass(z);
    setHealth(a);
    setStr(b);
    setDex(c);
    setArmor(i);
    setGold(e);
    setLevel(f);
    setworkexp(wexp);
    setDragonPiece(dp);
}
void character::setClass(string x)
{
    pClass = x;
}
void character::setHealth(int h)
{
    health = h;
}
void character::setStr(int s)
{
    str = s;
}
void character::setDex(int d)
{
    dex = d;
}
void character::setArmor(float arm)
{
    armor=arm;
}
void character::setGold(int g)
{
    gold = g;
}
void character::setLevel(int l)
{
    level = l;
}
void character::setworkexp(int wexp)
{
    workexp = wexp;
}
void character::setDragonPiece(int dp)
{
    DragonPiece = dp;
}
void character::addHealth()
{
    ++health;
}
void character::subHealth()
{
    --health;
}
void character::addGold()
{
    ++gold;
}
void character::subGold()
{
    --gold;
}
void character::addLevel()
{
    ++level;
}
