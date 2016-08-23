#include <iostream>

int main()
{
	char charA;
		int varA = 0, varB = 0, varC;
		printf("Please write your math problem here using (+,-,*,/,%): ");
		scanf_s(" %d %c %d", &varA, &charA,1, &varB);
	getchar();

	switch(charA)
	{
        case '+':
			varC = varA + varB;
			break;
		case '-':
			varC = varA - varB;
			break;
		case '*':
			varC = varA * varB;
			break;
			
		case '/':
			varC = varA / varB;
			break;
		case '%':
			varC = varA % varB;
			break;

	}
	

	printf("The answer is: %d", varC);




	getchar();
}