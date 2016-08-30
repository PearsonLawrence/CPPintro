#include <iostream>


//exercise 1 
//= sts
//
//exercise 2-3
//= D.
//
//exercise 4 
//you cant make a char a double
//
//exercuse 5

void main()
{
	 
	int var = -12132322;
	float far = var;

	printf("%f\n", far);

	far = *(float*)&var;

	printf("%f\n", far);

	getchar();


}