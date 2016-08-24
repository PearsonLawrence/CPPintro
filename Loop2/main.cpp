#include <iostream>


int main()
{
	/*
	for (int i = 100; i > 0; --i)
	{
		if (((i % 3) == 0) && (i % 5) == 0)
		{

		printf("Fizzbuzz \n");
		 }
		else if ((i % 3) == 0)
		{
			printf("Buzz \n");

		}

		else if ((i % 5) == 0)
		{
			printf("Fizz \n");
		}
		else
			printf("%d \n", i);
	}*/
	int i = 101;

	while (i > 1)


	{
		--i;

		if (((i % 3) == 0) && (i % 5) == 0)
		{

			printf("Fizzbuzz \n");
		}
		else if ((i % 3) == 0)
		{
			printf("Buzz \n");

		}

		else if ((i % 5) == 0)
		{
			printf("Fizz \n");
		}
		else
			printf("%d \n", i);

	}
	
	getchar();
}