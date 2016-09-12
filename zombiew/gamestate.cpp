#include "zombie.h"

class GameState {

	const int Z_COUNT = 4;
	Zombie zombies[Z_COUNT];


public:
	void init();
	void update()
	{
		while (!gameOver)
		{

			printf("\nCombat Round: \n");
			for (int i = 0; i < Z_COUNT; ++i)
				if (zombies[i].isAlive())
					zombies[rand() % Z_COUNT].takeDamage(zombies[i].rollAttack());

			for (int i = 0; i < Z_COUNT; ++i)
				zombies[i].draw(false);

			gameOver = false;

			int livingZombies = 0;
			for (int i = 0; i < Z_COUNT; ++i)
				if (zombies[i].isAlive())
					livingZombies++;

			gameOver = (livingZombies == 1);

			printf("\n");


		}

	};



	void drawStatus();
	void drawRound();
	bool isGameover();


};