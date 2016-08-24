#include <iostream>

int main()
{
	// only for instantiation
	int vara[10] = { 3,4,4 + 5 };
	
	// defining the array, but it isn't initialized
	int varb[10];

	// copy values from varb to vara
	for (int i = 0; i < 10; ++i)
	{
		vara[i] = varb[i];
	}

	for (int i = 0; i < 10; ++i)
	{
		vara[i * 2] = 20;
		varb[i * 2] = 20;
		printf("%d", vara[i * 2]);
	}


	getchar();

}