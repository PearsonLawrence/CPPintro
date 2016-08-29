#include <iostream>


float numHalf(float A)
{
	float result = A / 2;
	return result;

}



int main()
{
	float A = 0;
	printf("Enter a number to find its half point: \n");
	scanf_s("%f", &A);
	getchar();


	float half = numHalf(A);

	printf("Half of the number is: %f", half);
	getchar();

}