#include <stdlib.h>
#include <stdio.h>

	void main(int argc, char** argv)
	{
	int init = atoi(argv[1]);
	int end = atoi(argv[2]);
	int i;
		for(int i = init; i <= end; i++)
		{
		if(i%4 == 0 && i%100 != 0)
		{
			printf("Leap year is: %d\n", i);
		}
		else{
			printf("%d\n", i);
		}
		}
	}
