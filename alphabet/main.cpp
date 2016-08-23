#include <iostream>

int main()
{
	//list your char which is the character letter
	int varA, varB, varC;
	char charA, charB, charC;
	// ask question
	printf("Please list two letters of alphabet: ");
	// %c is your char. You need two values for two numbers
	scanf_s(" %c %c", &charA, 1, &charB, 1);
	getchar();
	int ascii1 = charA;
	int ascii2 = charB;
	// create third char and create two ascii values and 
	//equal then to char A and B then create third askii and equal it to equation
	
	int ascii3 = ((ascii1 + ascii2) / 2);

	charC = ascii3;

	printf("The middle letter is: %c", charC);

	getchar();
}