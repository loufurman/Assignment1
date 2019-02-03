//Brendan Schneider - bzs14
//Assignment 1 - git

#include <string>
#include <cstdlib>
#include "Weapon.h"

//The Rapier class (20HP twice, 50% chance to ignore armor)
class Rapier : public Weapon
{

public:

    Rapier() : Weapon("Basic Rapier", 20.0) {};

    virtual ~Rapier() {};

    virtual double hit(double armor);

};

//Each hit can ignore armor
double Rapier::hit(double armor)
{
    double damage;
	int pierce = rand() % 2;
	
	if(pierce == 0)
		damage = hitPoints;
	else
		damage = hitPoints - armor;
	
	if(damage < 0.0)
		damage = 0.0;
	
	pierce = rand() % 2;
	if(pierce == 0)
		damage = hitPoints;
	else
		damage = hitPoints - armor;
	
    if(damage < 0)
        return 0;
	else
		return damage;
}