#include <iostream>
using namespace std;
void main()// entry point
{
	// scope describes the active working 'area'
	// <type specifier>
	unsigned int value;
	int var = 0;
	// prompt my user for input:
	printf("Input a number to evaluate the collatz sequence: ");
	scanf_s("%d", &var);
	getchar();
	printf("%d ", var);
	while (var > 1)
		{
			if (var % 2 == 0)
			{
				var = var / 2;
			}
			else
			{
				var = 3 * var + 1;
			}
			printf("%d ", var);
		}

	getchar();

}


// Global namespace