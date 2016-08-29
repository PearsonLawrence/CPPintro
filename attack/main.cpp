#include <iostream>

int main()
{

	int villager[5];
	villager[0] = 100;
	villager[1] = 100;
	villager[2] = 100;
	villager[3] = 100;
	villager[4] = 100;

	int damage = 40;

	int playeratk;
	printf("Please choose a villager 1-5. To attack use a number 0-4.You will have 5 attacks to kill your target.\n");
	printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
	scanf_s("%d", &playeratk);
		getchar();

		switch (playeratk)
		{
		case 0: 
			if (villager[0] >= 1)
			{
				villager[0] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;
		case 1:
			if (villager[1] >= 1)
			{
				villager[1] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;
			
		case 2:
			if (villager[2] >= 1)
			{
				villager[2] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;
			break;
		case 3:
			if (villager[3] >= 1)
			{
				villager[3] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;
		case 4:
			if (villager[4] >= 1)
			{
				villager[4] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;
		
		}
		int playeratk2;
		printf("Please choose a villager 1-5. To attack use a number 0-4.You will have 4 attacks to kill your target.\n");
		scanf_s("%d", &playeratk2);
		getchar();

		switch (playeratk2)
		{
		case 0:
			if (villager[0] >= 1)
			{
				villager[0] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;
		case 1:
			if (villager[1] >= 1)
			{
				villager[1] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;

		case 2:
			if (villager[2] >= 1)
			{
				villager[2] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;
			break;
		case 3:
			if (villager[3] >= 1)
			{
				villager[3] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;
		case 4:
			if (villager[4] >= 1)
			{
				villager[4] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;

		}
		int playeratk3;
		printf("Please choose a villager 1-5. To attack use a number 0-4.You will have 3 attacks to kill your target.\n");
		scanf_s("%d", &playeratk3);
		getchar();

		switch (playeratk3)
		{
		case 0:
			if (villager[0] >= 1)
			{
				villager[0] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;
		case 1:
			if (villager[1] >= 1)
			{
				villager[1] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;

		case 2:
			if (villager[2] >= 1)
			{
				villager[2] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;
			break;
		case 3:
			if (villager[3] >= 1)
			{
				villager[3] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;
		case 4:
			if (villager[4] >= 1)
			{
				villager[4] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;

		}

		int playeratk4;
		printf("Please choose a villager 1-5. To attack use a number 0-4.You will have 2 attacks to kill your target.\n");
		scanf_s("%d", &playeratk4);
		getchar();

		switch (playeratk4)
		{
		case 0:
			if (villager[0] >= 1)
			{
				villager[0] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;
		case 1:
			if (villager[1] >= 1)
			{
				villager[1] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;

		case 2:
			if (villager[2] >= 1)
			{
				villager[2] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;
			break;
		case 3:
			if (villager[3] >= 1)
			{
				villager[3] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;
		case 4:
			if (villager[4] >= 1)
			{
				villager[4] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;

		}
		int playeratk5;
		printf("Please choose a villager 1-5. To attack use a number 0-4.You will have 1 attack to kill your target.\n");
		scanf_s("%d", &playeratk5);
		getchar();

		switch (playeratk5)
		{
		case 0:
			if (villager[0] >= 1)
			{
				villager[0] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;
		case 1:
			if (villager[1] >= 1)
			{
				villager[1] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;

		case 2:
			if (villager[2] >= 1)
			{
				villager[2] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			
			break;
		case 3:
			if (villager[3] >= 1)
			{
				villager[3] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;
		case 4:
			if (villager[4] >= 1)
			{
				villager[4] -= damage;
				printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
			}
			else
			{
				printf("Your target is already dead please select different target");
			}
			break;

		}
		//printf("Villager 1 Hp:%d  | Villager 2 Hp:%d | Villager 3 Hp:%d | \nVillager 4 Hp:%d | Villager 5 Hp:%d \n ", villager[0], villager[1], villager[2], villager[3], villager[4]);
		getchar();
	getchar();
}