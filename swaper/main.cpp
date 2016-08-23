#include <iostream>

int main()
{
	int varA = 0, varB = 0, varC;// unitialized (bad)
	
	printf("Insert two integers: ");
	scanf_s("%d %d", &varA, &varB); // assign var value from console
	getchar();
	printf("A: %d, B: %d \n", varA, varB);
	
	// swap values here
	varC = varA;
	varA = varB;
	varB = varC;
	printf("Swap successful! (well probably)\n");
	printf("A: %d, B: %d \n", varA, varB);
	
	getchar(); //prevent program from closing
}