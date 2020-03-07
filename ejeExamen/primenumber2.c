#include <stdlib.h>
#include <stdio.h>
	int main(int argc, char** argv)
	{
	int i;
	int a;
	int init= atoi(argv[1]);
	int end= atoi(argv[2]);
	int total;
	int is_prime = 1;
	for(i=init; i<=end; i++)
	{
		if(i%2 == 0){
		}else{
		is_prime = 1;
		for(int a = 1; a<= i; a++){
		if(i%a==0 && a !=1 && a !=i){
		is_prime =0;
		}
		}
		if(is_prime){

		printf("is prime: %d\n", i);
		total = total +1;
		}
		}
	}
}
