#include <stdio.h>
#include <stdlib.h>

 void main(int argc, char** argv)
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = atoi(argv[3]);
	if(a>b && a>c){
		if(b > c){
			printf("%d > %d > %d\n", a, b, c);
		} else {
			printf("%d > %d > %d\n", a, c, b);
			}
	}
	else  if(b > a && b > c){
		if(a > c){
			printf(" %d > %d > %d\n", b, a, c);
		} else {
			printf("%d > %d > %d\n", b, c, a);
			}
	}
	else {
		if(a > b){
			printf("%d > %d > %d\n", c, a, b);
		}else {
			printf("%d > %d > %d\n", c, b, a);
			}
	}
}
