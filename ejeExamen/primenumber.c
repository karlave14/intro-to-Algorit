#include <stdio.h>
#include <stdlib.h>
/* Prime numbers */
	int main()
	{
	int i;
	int a;
	int total;
	int is_prime = 1;
		for(i =1; i <= 30; i++){

		if(i%2 == 0){
		}else{
		is_prime = 1;
		for(int a=1; a<=i; a++){
		if(i%a ==0 && a !=1 && a !=i){
		is_prime=0;
		}
		}
		if(is_prime){
		printf ("is prime: %d\n", i);
		total = total +1;
		}
		}

		}
return 0;
	}
