#ifndef CHARCATER_H_INCLUDED
#define CHARCATER_H_INCLUDED
#ifndef CHARACTER_H
#define CHARACTER_H
class character
{
    public:
        character(std::string z, int a, int b, int c, float i, int e, int f,int wexp, int dp);
        void setClass(std::string x);
        void setHealth(int h);
        void setStr(int s);
        void setDex(int d);
        void setArmor(float arm);
        void setGold(int g);
        void setLevel(int l);
        void setworkexp(int wexp);
        void setDragonPiece(int dp);
        void addHealth();
        void subHealth();
        void addGold();
        void subGold();
        void addLevel();
        std::string getClass()
        {
            return pClass;
        }
        int getHealth()
        {
            return health;
        }
        int getStr()
        {
            return str;
        }
        int getDex()
        {
            return dex;
        }
        float getArmor()
        {
            return armor;
        }
        int getGold()
        {
            return gold;
        }
        int getLevel()
        {
            return level;
        }
        int getworkexp()
        {
            return workexp;
        }
        int getDragonPiece()
        {
            return DragonPiece;
        }
    private:
        std::string pClass;
        int health;
        int str;
        int dex;
        float armor;
        int gold;
        int level;
        int workexp;
        int DragonPiece;

};

character ourHero();

#endif // CHARACTER_H



#endif // CHARCATER_H_INCLUDED
