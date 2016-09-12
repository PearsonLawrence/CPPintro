#include <cstdio>
#include "zombie.h"
#include <time.h>
#include <random>
#include "gamestate.h"
void main()
{
	GameState gs;
	gs.init();

	gs.start();
	while (!gs.isGameOver())
	{
		gs.update();
		gs.drawRound();
	}

	getchar();
}