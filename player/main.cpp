#include <iostream>

/*

struct vec2 { float x,y;};



struct Point
{
	float x, y;
};

struct player
{
	char name;
	float health = 100;
	int score = 0;
	Point position;
	float position, velocity

};

struct rectangle
{
	vec2 corners[4];
	
	Point points[4];
};
*/

struct vec2 { float x, y; };

struct Player
{
	char Name[80];
	int score;
	float health;
	vec2 position, velocity;
};

Player makePlayerC()
{
	Player player;

	
	scanf_s("%s %d\n", &player.Name, 80, &player.score);
	getchar();
	return player;
}

void printPlayer(Player player)
{
	printf("Player Name: %s Player score: %d\n", player.Name, player.score);
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
}

void main()
{
	char PlayerName[80] = { 0 };
	printf("Please insert player name, as well as your score: ");

	Player players[2];
	for (int i = 0; i < 2; ++i)
	{
		players[i] = makePlayerC();
	}

	for (int i = 0; i < 2; ++i)
	{
		printPlayer(players[i]);
	}
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
}