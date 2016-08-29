#include <iostream>


// exercise 1 = 1, 1, 2, 2, 3, 2, 1





/*
//Exercise 2

// A is 5.5 and B is 7.5
float SmallLarge(float A, float B)
{
	if (A < B)
	{
		return A;
	}
	else
	{
		return B;
	}
}



int main()
{
	float A;
	float B;

	printf("Please enter two decimals to find the smaller number");
	scanf_s("%f %f", &A, &B);
	getchar();

	float smaller = SmallLarge(A, B);
	//float smaller = 5.5;

	printf("The smaller variable is: %f", smaller);

	getchar();

}

*/


float SmallLarge(float A, float B, float C)
{
	
	if ((A < B) && (A < C))
	{
		return A;
	}
	else if ((B < A) && (B < C))
	{
		return B;
	}
	else if ((C < B) && (C < A))
	{
		return C;
	}
}



int main()
{
	float A;
	float B;
	float C;
	printf("Please enter three decimals to find the smaller number");
	scanf_s("%f %f %f", &A, &B, &C);
	getchar();

	float smaller = SmallLarge(A, B, C);
	//float smaller = 5.5;

	printf("The smaller variable is: %f", smaller);

	getchar();

}