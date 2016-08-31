#include <time.h> 
#include <cstdlib>
#include <iostream>
#include "Dino.h"


dino createDino()
{
	dino Dino;
	scanf_s("%s %d %d", Dino.Name, 80, &Dino.teeth, &Dino.limbs);
	Dino.Health = 100;
	getchar();
	return Dino;
}

void growDino(dino &Dino)
{
	Dino.Health += 500;
	Dino.teeth += 20;
	Dino.limbs += 6;
}

void printDino(const dino Dino)
{

	printf("Your Ferocious Dinosaur's name is: %s \n The Dinosaur has %d teeth, and %d limbs. His HP is at %f\n Press enter to continue.", Dino.Name, Dino.teeth, Dino.limbs, Dino.Health);
	getchar();
}

void printDino2(const dino Dino)
{
	printf("The Dinosaur has %d teeth, and %d limbs. His HP is at %f\n Press enter to continue.", Dino.teeth, Dino.limbs, Dino.Health);
	getchar();
}

int randRange(int start, int end)
{
	srand(time(0));
	return rand() % (end - start + 1) + start;
}

void attackDino()
{
	int choice = 0;
	scanf_s("%d", &choice);
	getchar();

	if (choice == 1)
	{
		int result = randRange(1, 100);

		if (result <= 50)
		{
			printf("You are brutally eaten alive.\n Try again and dont die please. \nCreate a New dino by entering its info here.");
		}

		else if (result >= 51)
		{
			printf("You smash the Dino's face in. You got lucky dont punch dino's in the face, Now retry to fix your mistake by creating another Dino:");
		}
	}
	else if (choice == 2)
	{
		printf("You hightail it out of there! Good choice. \n Now retry to fix your mistake by creating another Dino:");
	}


};


// RETURNTYPE ALIAS(PARAMS)
void Part2(dino Dino)
{

	int response = 0;
	printf("\n Would you like to pet your Dinosaur? yes(1) or no(2):   ");
	scanf_s("%d", &response);
	getchar();

	if (response == 1)
	{
		printf("%s is very very happy, now create another Dino so your dino is not lonley.\nEnter info Here:", Dino.Name, 80);



	}
	else if (response == 2)
	{

		printf("%s is very very angry and changes!! \n", Dino.Name);
		growDino(Dino);
		printDino2(Dino);

		printf("Do you want to try to kill(1) %s ? or run(2)? ", Dino.Name);
		attackDino();



	}
};