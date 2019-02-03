/* 
 * File:   main.cpp
 * Author: Javier <jrescobara@gmail.com> 
 *
 * Created on September 25, 2017, 3:19 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include "Weapon.h"
#include "WeaponFactory.h"

using namespace std;

/**
 * Simulates the behavior of a weapon in the presence and absence of armor, by 
 * printing its damage on standard output. 
 * @param weapon Weapon to simulate
 * @param armor Armor points
 */
void simulateWeapon(Weapon * weapon, double armor)
{
    cout << weapon->getName() << " inflicts " << weapon->hit();
	cout << " when armor is 0" << std::endl;
	
    cout << weapon->getName() << " inflicts " << weapon->hit(armor);
	cout << " when armor is " << armor << std::endl << std::endl;
}

/*
 * 
 */
int main(int argc, char** argv)
{
	srand(time(NULL));
    double armor = 33;

    Weapon *weapon = WeaponFactory::getInstance()->getWeapon("sword");
    simulateWeapon(weapon, armor);
    delete(weapon);

    weapon = WeaponFactory::getInstance()->getWeapon("spear");
    simulateWeapon(weapon, armor);
    delete(weapon);
	
	weapon = WeaponFactory::getInstance()->getWeapon("hammer");
    simulateWeapon(weapon, armor);
    delete(weapon);
	
	weapon = WeaponFactory::getInstance()->getWeapon("randomsword");
    simulateWeapon(weapon, armor);
    delete(weapon);
	
	weapon = WeaponFactory::getInstance()->getWeapon("rapier");
    simulateWeapon(weapon, armor);
    delete(weapon);

    return 0;
}

