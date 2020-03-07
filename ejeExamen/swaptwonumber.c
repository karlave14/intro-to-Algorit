#include <stdlib.h>
#include <stdio.h>

 	void swap(int *numA, int *numB){
	int temp = *numA;
	*numA = *numB;
	*numB = temp;
	}
	void main (){

		int numA = 14;
		int numB = 20;
		printf("a = %d y b = %d\n", numA, numB);
		swap(&numA, &numB);
		printf("a = %d y b = %d \n", numA, numB);

	}
