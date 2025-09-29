#include <stdlib.h>
#include <stdio.h>

int main(void){
	int x = 45;
	int * ptr_x = &x;
	printf("x is %x", *ptr_x);
	return 0;
}