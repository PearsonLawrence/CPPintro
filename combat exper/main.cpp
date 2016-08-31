#include <iostream>
#include <time.h> 
#include <cstdlib>


struct enemy
{

	float Health = 0;
	int dmg = 0;
	int weapon = 1;



};

struct player
{
	char Name;
	float Health = 100;
	int dmg = 0;
	int weapon = 1;

};


int randRange(int start, int end)
{
	srand(time(0));
	return rand() % (end - start + 1) + start;
}


int solveBattle(int attack, int defend)
{


	if (attack == defend)
		{
			return 0;
		}	
	if (attack == 1 && defend == 4)
	{
		return 1;
	}
	if (attack == 1 && defend == 2)
	{
		return 1;
	}
	if (attack == 1 && defend == 3)
	{
		return 1;
	}
	if (attack == 2 && defend == 1)
	{
		return 1;
	}
	if (attack == 2 && defend == 3)
	{
		return 1;
	}
	if (attack == 2 && defend == 4)
	{
		return 1;
	}
	if (attack == 3 && defend == 1)
	{
		return 1;
	}if (attack == 3 && defend == 2)
	{
		return 1;
	}if (attack == 3 && defend == 4)
	{
		return 1;
	}if (attack == 4 && defend == 1)
	{
		return 1;
	}if (attack == 4 && defend == 2)
	{
		return 1;
	}if (attack == 4 && defend == 3)
	{
		return 1;
	}

}





int playerAttack()
{
	int attack;
	scanf_s("%d", &attack);
	getchar();
	
    return solveBattle(attack, enemyDefense());
	
	


}

int playerDefense()
{
	int defend;
	printf("Decide how to defend! \n"
		"1 = slash your blade down to parry \n"
		"2 = turn blade donw vertically to your left \n"
		"3 = turn blade down vertically to your right\n"
		"4 = hold your blade diagonally above and infront of you \n"
		"Enter choice here: ");
	scanf_s("%d", &defend);
	getchar();

	return solveBattle(enemyAttack(), defend);




}

int enemyAttack()
{

	int attack;
	attack = randRange(1, 4);

	if (attack == 1)
	{
		printf("The enemy jabs his sword forward");
	}
	if (attack == 2)
	{
		printf("The enemy slashes to his right");
	}
	if (attack == 3)
	{
		printf("The enemy slashes to his left");
	}
	if (attack == 4)
	{
		printf("The enemy hold his balde over his head then slashes down");
	}

	return solveBattle(attack, playerDefense());

}

int enemyDefense()
{
	int defense;
	defense = randRange(1, 4);


	return defense;


}


enemy createnemy()
{
	enemy enemy1;

	enemy1.Health = randRange(50, 500);
	enemy1.dmg = randRange(1, 100);
	



}




int fight()
{

	printf("You have chosen to FIGHT!\n"
		"Here are your list of attacks\n"
		"1 = sword jab\n"
		"2 = sword slash to your right\n"
		"3 = sword slash left\n"
		"4 = sword slash down overhead\n"
		"please choose what attack you want to start off with: ");
	playerAttack();
	enemyDefense();





}





int main()
{
	char answer;
	
	
	printf("An enemy aproaches would you like to attack? ");
	scanf_s("%c", answer);
	getchar;

	if (answer == 'yes')
	{
		fight;

	}


}