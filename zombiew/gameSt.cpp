#include "zombie.h"
#include "gamestate.h"
bool GameState::isGameover() const
{
	int livingZombies = 0;
	for (int i = 0; i < Z_COUNT; ++i)
		if (zombies[i].isAlive())
			livingZombies++;

	return livingZombies == 1;

}
void GameState::init()
{
	
	zombies[0].init("bob", "tyler");
	zombies[1].init("andrew", "sally");
	zombies[2].init("kyle", "george");
	zombies[3].init("billy", "austin");
}

void GameState::start()
{
	for (int i = 0; i < Z_COUNT; ++i)
		zombies[i].draw(false);
	printf("\n Let the battle Begin");


}

void GameState::drawStatus() const
{

	for (int i = 0; i < Z_COUNT; ++i)
		zombies[i].draw(false);
}

void GameState::update()
{
	for (int i = 0; i < Z_COUNT; ++i)
	if (zombies[i].isAlive())
		zombies[rand() % Z_COUNT].takeDamage(zombies[i].rollAttack());

}

void GameState::drawRound() const
{

	printf("\nCombat Round: \n");
	for (int i = 0; i < Z_COUNT; ++i)
		
	for (int i = 0; i < Z_COUNT; ++i)
		zombies[i].draw(false);

}
