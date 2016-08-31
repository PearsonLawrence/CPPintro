#include <iostream>
#include <time.h> 
#include <cstdlib>
#include "Dino.h"

int main()
{

	printf("Please insert a name for your Dinosaur,\n proceeding with the number of teeth then limbs you wish it to have:  ");
	const int array_size = 2;
	dino Dino[array_size];
	for (int i = 0; i < array_size; ++i)
	{
		Dino[i] = createDino();

		printDino(Dino[i]);

		Part2(Dino[i]);
	}
	getchar();
}