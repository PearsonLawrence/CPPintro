#include <iostream>

int main()
{
	printf("Hello world! \n "); // \n creates new line
	
	// Variable definition
	//Im asking the computer for memory
	//This memory will be used for integer math
	// I've given this variable the alia 'var'

	float var; // var is uninitialized

	//Variabl assignment and initialization
	// I'm using the literal value '12'
	//and assigning into my variable
	//first assignment is an initialization

	var = 12.5;

	// Variable instantiation
	//when you define and initialize at the same time
	int ivar = var + 4;

	printf("%f %d \n", var, ivar);
	printf("%d \n", (2 / 3 + 3 / 5));
	printf("%d \n", (2%3 + 3%5));
	printf("%d \n", (23 % 15 % -2));
	printf("%d \n", (25 * 1 / 2));
	printf("%d \n", (25 * 1.0 / 2));
	printf("%d \n", (25 * (1 / 2)));
	printf("%d \n", (235 / 8 + 7));
	printf("%d \n", (235 / 8.0 + 7));
	float t = (((20 + 1) / 2 - 2.0) / (23 + 3)*0.2);	
	printf("%f \n", t);
		
	// (8.0) / 26 * .2
	int sHeight;
	int upTax;
	int downTax;

	int a = 121;
	float b = 9.4;
	char c = 'r';
	int d = 100000;
	bool e = false; 
	


	getchar();
}
