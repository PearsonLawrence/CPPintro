#include <iostream>
int main()
{


	int values[3][3];
	int valcounter = 1;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			values[i][j] = valcounter++;
			printf("%d\t", values[i][j]);
		}
			printf("\n");
	}

	getchar();
}