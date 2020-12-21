#include "Warrior.h"
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
Warrior::Warrior() :name(" "), hp(0), damage(0), pts(0), armor(0) {}
Warrior::Warrior(std::string fname, float fhp, float fdamage, float fpts, float farmor) : name(fname), hp(fhp), damage(fdamage), pts(fpts), armor(farmor) {}


std::string Warrior::getName() { return name; }
float Warrior::getHP() { return hp; }
float Warrior::getDamage() { return damage; }
float Warrior::getPts() { return pts; }
float Warrior::getArmor() { return armor; }


void Warrior::setName(std::string fname) { name = fname; }
void Warrior::setHP(float fhp) { hp = fhp; }
void Warrior::setDamage(float fdamage) { damage = fdamage; }
void Warrior::setPts(float fpts) { pts = fpts; }
void Warrior::setArmor(float farmor) { armor = farmor; }


void Warrior::Attack(Warrior person) {
	//The object introduced as a parameter attack
	cout<< person.name << " attack: "<< endl;
	float fdamage = person.getDamage();
	float farmor = this->getArmor();
	float part = farmor / 1000;
	float pdamage = fdamage * (1 - part);
	float fhp = this->getHP();
	fhp = hp - pdamage;
	this->setHP(fhp);
	this->showStatus();
	Sleep(1000);
}
void Warrior::showStatus() {
	std::cout << " name " << name << " Health " << hp << " damage " << damage << " pts " << pts << " armor " << armor << std::endl;
}

//Mags::Mags() :charge(2) {}
//Mags::Mags(string str, float fhp, float dmg, float fpts, float arm) : Warrior(str, fhp, dmg, fpts, arm) {}

void Mags::hpUP() {
	if (charge > 0 && hp <= hp / 2) {
		float HP = hp + 200;
		this->setHP(HP);
	}
}