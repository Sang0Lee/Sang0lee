#include <stdio.h>

int* transAddr(int *in){

	return in;
}

void main(){

	int c;
	int *ptr;

	c = 15;
	ptr = transAddr(&c);

	printf("%#x\n",ptr);

}
