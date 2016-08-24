#include <iostream>
using namespace std;
int main()
{
	int var[10];
		
		
	printf("please insert 10 numbers to find the largest and smallest numnber:");
	scanf_s("%d %d %d %d %d %d %d %d %d %d", &var[0], &var[1], &var[2], &var[3], &var[4], &var[5], &var[6], &var[7], &var[8], &var[9]);
	getchar();

	int largest = INT_MIN;
	int smallest = INT_MAX;

	for (int i = 0; i < 10; ++i)
	{
		if (var[i] > largest)
		{
			largest = var[i];
		}

		if (var[i] < smallest)
		{
			smallest = var[i];
		}
	
	
	}


	printf("Largest: %d   Smallest: %d", largest, smallest);


	getchar();
}