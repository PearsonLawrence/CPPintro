#include <iostream>

int main()
{
	/*
	int varA, varB;


	printf("Please input two numbers to represent a number range: ");
	scanf_s("%d %d", &varA, &varB);
	getchar();

	

	

	for (int i = varB; i <= varA; ++i)
	{

		printf("%d \n", i);
	}

	for (int i = varB - 1; i <= varA; ++i)
	{

		printf("%d \n", i);
	}

	*/

int userA;
int userB;
int i;
printf(" please input 2 characters");

scanf_s("%d %d", &userA, &userB);
if (userA < userB)
	for (i = userA; i < userB + 1; ++i)
	{


		if (i % 2 == 0)
		{
			printf("\n%d", i);
		}
	}

	
	//if (userA > userB)
	for (int i = userA - 1; i > userB; --i)
			{


				//if (i % 2 == 1)
				//{
					printf("\n%d", i);
				//}
			}
		
		//	else if (i % 2 == 1)
		//{
		//	for (i = userA; i < userB + 1; --i)
//
	//		printf("\n%d", i);
	//	}
		

//else	
//{
//	for(i = userA; i--)
//	i = userA;
//	printf("\n %d", i);
	
//
     /*for (int i = userA; i < userB + 1; ++i)
	{


		if (i % 2 == 0)
		{
			printf("\n%d", i);
		}
	}
if (userA < userB)
	for (int i = userA - 1; i < userB + 2; ++i)
	{


		if (i )
		{
			printf("\n%d", i);
		}
	}

for (int i = userA; i < userB + 1; ++i)
{


	if (i)
	{
		printf("\n%d", i);
	}
}
*/
getchar();

getchar();
}