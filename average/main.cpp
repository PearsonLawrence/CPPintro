#include <iostream>

int main()
{
	int varA, varB, varC, varD, varE;
	printf("please insert five numbers: ");
	scanf_s("%d %d %d %d %d", &varA, &varB, &varC, &varD, &varE);
	
	getchar();

	printf("%d", ((varA + varB + varC + varD + varE) / 5));
	
	getchar();
}