#include <iostream>

// anatomy of a function
// <return type> <alias>(<parameter list>)
//{
//return < value of return type>
//}


// Multiply parameters together then subtract resylt 
// from RHS
int MulThenSub(int a_param, int a_param2)
{
	if(a_param % 2 == 0)
	return a_param * a_param2 - a_param2;
	else 
		return a_param * a_param2 - a_param;
}

void printNum(int n) { printf("%d", n); }

int scanNum()
{
	int var = 0;
	scanf_s("%d", &var);
	getchar();
	return var;
}

int main()
{
	printf("How many times would you like to run?");
	int times = scanNum();

	for (int i = 0; i < 6; ++i)
	printNum(MulThenSub(scanNum(), scanNum()));
	getchar();
}