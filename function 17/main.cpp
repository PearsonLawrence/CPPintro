#include <iostream>
#include <time.h> 
#include <cstdlib>


int randRange(int start, int end)
{
	srand(time(0));
	return rand() % (end - start + 1) + start;
}

int solveBattle(int playerMove, int computer)
{


	if (playerMove == computer)
	{
		return 0;
	}
	if (playerMove == 1 && computer == 2)
	{
		return -1;
	}
	if (playerMove == 2 && computer == 1)
	{
		return 1;
	}
	if (playerMove == 3 && computer == 1)
	{
		return -1;
	}
	if (playerMove == 1 && computer == 3)
	{
		return 1;
	}
	if (playerMove == 2 && computer == 3)
	{
		return -1;
	}
	if (playerMove == 3 && computer == 2)
	{
		return 1;
	}


}




int main()
{
	int PlayerMove;
	printf("You are playing Rock, Paper, Scissors against the computer, \n enter a number to represent what you choose \n 1 = Rock 2 = Paper 3 = Scissors \n ");
	
	int result = 0;
	
	while (result == 0)
	{
		printf("Please enter your choice here: \n");
		scanf_s("%d", &PlayerMove);
		getchar();



		int computer = randRange(1, 3);
		result = solveBattle(PlayerMove, computer);

		switch (result)
		{
		case 1:
		{
			printf(" %d - %d \n You win!!!", PlayerMove, computer);
			break;
		}
		case 0:
		{
			printf("%d - %d \n Tie! \n", PlayerMove, computer);
			break;
		}

		case -1:
		{
			printf("%d - %d \n You Lose.", PlayerMove, computer);
			break;
		}
		}
	}

	getchar();


}