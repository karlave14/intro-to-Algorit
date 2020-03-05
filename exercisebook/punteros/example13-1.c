#include <stdio.h>

int main()
{
	int thing_var;
	int *thing_ptr;
	thing_var = 2;
	printf("thing %d\n", thing_var);

	thing_ptr = &thing_var;
	*thing_ptr = 3;

	printf("thing %d\n", thing_var);
	printf("thing %d\n", *thing_ptr);
	return (0);
}



















