#include <iostream>



void setInt(int *ptr, int value) 
{ 
	*ptr = value; 
}

struct mystructure
{
	float dinosaur, chicken, minkey;
};

void main()
{
	mystructure *str_ptr;

	(*str_ptr).chicken;

		str_ptr->chicken; 

	int variable = 0; 
	
	int *ptr = nullptr;
	if(ptr != nullptr)
            setInt(&variable, 40);

	getchar();

}