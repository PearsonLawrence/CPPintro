#pragma once
#include <random>
int inline randRange(int min, int max) { return rand() % (max - min) + min; }

class Zombie
{
private:
	char name[64], prior[64];
	int health;
	int attack, critRate, kills;
	
public:
	void init(const char name[], const char occ[]);
	int rollAttack() const;
	void takeDamage(int dmg);
	void draw(bool breif) const;
	bool isAlive() const;

};