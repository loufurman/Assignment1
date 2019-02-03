/* 
 * File:   WeaponFactory.cpp
 * Author: Javier <jrescobara@gmail.com>
 *  
 */ 

#include <string>
#include <stddef.h> 
#include "WeaponFactory.h"
#include "CommonSword.h" 
#include "CommonSpear.h"
#include "SimpleHammer.cpp"
#include "CrazyRandomSword.cpp"
#include "Rapier.cpp"

WeaponFactory* WeaponFactory::instance = NULL;

WeaponFactory * WeaponFactory::getInstance() {
    if (!instance) {
        instance = new WeaponFactory();
    }
    return instance;
}

Weapon * WeaponFactory::getWeapon(std::string name) {
    if (name.compare("sword") == 0) {
        return new CommonSword();
    }
    
    if (name.compare("spear") == 0) {
        return new CommonSpear();
    }
	
	//new stuff
	if (name.compare("randomsword") == 0) {
        return new CrazyRandomSword();
    }
	
	if (name.compare("hammer") == 0) {
        return new SimpleHammer();
    }
	
	if (name.compare("rapier") == 0) {
        return new Rapier();
    }

    throw "Invalid weapon";
}