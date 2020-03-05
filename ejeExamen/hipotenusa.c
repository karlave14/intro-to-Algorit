#include <stdio.h>
#include <stdlib.h>
#include <math.h> // use sqrt(), pow
int main(void)
{
	float catA = 5.2;
	float catB = 7.2;
	float hip = sqrt(pow(catA, 2) + pow(catB, 2));
	printf("CatA %.2f\nCatB %.2f\nhip = %.2f\n", catA, catB, hip);
}
