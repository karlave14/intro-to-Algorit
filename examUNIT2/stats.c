#include <stdlib.h>
#include <stdio.h>
#include <math.h>

	int main(int argc, char** argv)
	{
		int i;
		float sum = 0;
		float max = 0;
		float min = 0;
		float ave = 0;
		int calf = 0;
		for(i = 1; i < argc; i++)
		{
		float num = atof(argv[i]);
		calf++;
		sum = sum + num;
		if( i == 1){
			min = num;
			max = num;
		} else{
			if(num > max) {
			max = num;
			}
			if(num < min){
			min = num;
			}
		}
	}
		ave = sum/calf;
	printf("Average is: %.2f\n", ave);
	printf("Maximun is: %.2f\n", max);
	printf("Minimun is: %.2f\n", min);


	return 0;

	}
