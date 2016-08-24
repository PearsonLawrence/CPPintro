#include <iostream>

int main()
{

	int var[5];

	printf("Please list 5 numbers to put in reverser order: ");
	scanf_s(" %d %d %d %d %d", &var[0], &var[1], &var[2], &var[3], &var[4]);
	getchar();

	printf(" %d %d %d %d %d", var[4], var[3], var[2], var[1], var[0]);



	getchar();
}