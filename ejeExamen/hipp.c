#include <stdlib.h>
#include <stdio.h>
#include <math.h>

	float hipotenusa(float catA, float catB);
 	int main(int argc, char** argv)
	{
		float catA = atof(argv[1]);
		float catB = atof(argv[2]);
		float result =  hipotenusa(catA, catB);
		printf("Hipotenusa es: %.2f\n", result);

	}

		float hipotenusa(float catA, float catB)
	{
		return(sqrt(pow(catA, 2) + pow(catB, 2)));
	}
