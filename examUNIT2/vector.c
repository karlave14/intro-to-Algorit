#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv){

	if((argc-1) %2 != 0){
		printf("Should enter even number of argument\n");
	}
	float vector = 0;
	int i;
	for(i = 1; i<=argc/2; i++){
	float v1 = atof(argv[i]);
	float v2 = atof(argv[argc/2+ i]);
	vector = vector + (v1*v2);
	}
	printf("Producto punto is = %.2f\n", vector);
return 0;
}



