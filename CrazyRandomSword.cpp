//Brendan Schneider - bzs14
//Assignment 1 - git

#include <string>
#include <cstdlib>
#include "Weapon.h"

//The Random Sword class (7-100HP, ignores 2-(one-third total) armor)
class CrazyRandomSword : public Weapon
{

public:

    CrazyRandomSword() : Weapon("Crazy Random Sword", (rand() % 94) + 7) {};

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

double CrazyRandomSword::hit(double armor)
{
    double damage;
	int pierce = (rand() % ((int)armor/3 - 1)) + 2; //armor pierced

	damage = hitPoints - armor + pierce;
	
	
    if(damage < 0)
        return 0;
	else
		return damage;
}