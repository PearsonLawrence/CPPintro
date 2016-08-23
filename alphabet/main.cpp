#include <iostream>

int main()
{
	//list your char which is the character letter
	int varA = 0, varB = 0, varC = 0;
	char charA, charB, charC;
	// ask question
	printf("Please list two letters of alphabet: ");
	// %c is your char. You need two values for two numbers
	scanf_s(" %c %c", &charA, 1, &charB, 1);
	getchar();
	
	 
	charA = (charA - 65) % 32 + 65;
	charB = (charB - 65) % 32 + 65;

	
	charC = ((charA + charB) / 2);
	printf("The middle letter is: %c", charC);

	getchar();
}