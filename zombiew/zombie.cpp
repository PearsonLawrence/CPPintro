#include "zombie.h"
#include <cstdio>
#include <random>


void Zombie::init(const char a_name[], const char a_occ[])
{
	sprintf_s(name, "%s", a_name);
	sprintf_s(prior, "%s", a_occ);

	health = randRange(90, 150);
	attack = randRange(10, 25);
	critRate = randRange(5, 25);
	kills = 0;
}


void Zombie::draw(bool breif) const
{
	printf("%s %s \n", name, prior);

	if (!breif)
		printf("\thealth: %d\n \tAttack: %d\n", health, attack);
}
bool Zombie::isAlive() const { return health > 0; }
void Zombie::takeDamage(int dmg) { health -= dmg; }
int Zombie::rollAttack() const { return attack; }