#pragma once
#include <string>
class Warrior {
protected:
	std::string name;
	float hp;
	float damage;
	float pts;
	float armor;
public:
	Warrior();
	Warrior(std::string, float, float, float, float);
	std::string getName();
	float getHP();
	float getDamage();
	float getPts();
	float getArmor();
	void setName(std::string);
	void setHP(float);
	void setDamage(float);
	void setPts(float);
	void setArmor(float);
	void Attack(Warrior);
	void showStatus();
};

class Mags : public Warrior {
private:
	unsigned int charge=2;

public:
	Mags() {}
	Mags(std::string, float, float, float, float) {}

	void hpUP();

};
