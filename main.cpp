#include "Warrior.h"
#include <Windows.h>
#include <iostream>
using namespace std;
int main() {
	Warrior knight("Knight", 1000, 300, 1, 100);
	Warrior paladin("Paladin", 1000, 200, 1.5, 300);
	Mags CS("Mag", 400, 100, 1, 50);
	while (knight.getHP() >= 0 && paladin.getHP() >= 0 && CS.getHP() >= 0) {
		if (paladin.getHP() > 0) {
			paladin.Attack(knight);
			knight.Attack(paladin);
		}
		else CS.Attack(knight);

		knight.Attack(CS);
		CS.hpUP();
	}
	if (paladin.getHP() > 0) cout << "Paladin wins\n";
	else
		if (knight.getHP() > 0) cout << "Knight wins\n";
		else cout << "Draw\n";
}