#pragma once
#include "zombie.h"
#include <iostream>
#include <cstdio>
class GameState {
private:
	const int Z_COUNT = 4;
	Zombie zombies[4];

public:
	void init();
	void update();
	void start();
	void drawStatus() const;
	void drawRound() const;
	bool isGameover() const;


};