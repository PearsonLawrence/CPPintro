#include <iostream>
int main()
{
	
	system("color 2");
	bool scream = true;
	int varA = 0, varC = 0;
	printf("Please list the number of the month that \n you wish to learn the amount of days of: ");
	scanf_s(" %d", &varA);
	getchar();
	
	switch (varA)
	{
	case 1:
		varC = 31;
		break;

	case 2:
		varC = 28;
		break;
	case 3:
		varC = 31;
		break;
	case 4:
		varC = 30;
		break;
	case 5:
		varC = 31;
		break;
	case 6:
		varC = 30;
		break;
	case 7:
		varC = 31;
		break;
	case 8:
		varC = 31;
		break;
	case 9:
		varC = 31;
		break;
	case 10:
		varC = 30;
		break;
	case 11:
		varC = 31;
		break;
	case 12:
		varC = 30;
		break;
	default:
	{
		while(scream)
		{printf("1010010101011100001001010100101010010100101"); }
		
	}
	
	}
	
	printf(" The amount of days in that month is %d", varC);
	
	
	
	
	getchar();
	
	
}