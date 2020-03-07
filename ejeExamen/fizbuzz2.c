#include <stdlib.h>
#include <stdio.h>

void main(int argc,char** argv){
	int i;
	int init = atoi(argv[1]);
	int end = atoi(argv[2]);
	for(i=init; i<end; i++)
	{
		printf("%d\n", i);
		if(i%3==0 && i%5==0)
		{
			printf("FizzBuzz %d\n", i);
		}
		else{
			if(1%5==0)
			{
				printf("Buzz %d\n", i);
			}
			else {
				if(i%3==0)
				{
					printf("Fizz %d\n", i);
				}
				else{
					printf("%d\n", i);
				}
			}
		}

	}

}
