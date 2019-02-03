//Brendan Schneider - bzs14
//Assignment 1 - git

#include <string>
#include "Weapon.h"

//The Hammer class (25HP, ignore armor < 30)
class SimpleHammer : public Weapon
{

public:

    SimpleHammer() : Weapon("Simple Hammer", 25.0) {};

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

double SimpleHammer::hit(double armor)
{
    double damage;
	if (armor >= 30)
		damage = hitPoints - armor;
	else
		damage = hitPoints;
	
	
    if(damage < 0)
        return 0;
	else
		return damage;
}