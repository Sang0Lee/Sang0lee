#include <stdio.h>

int transInt(double in){

	return (int)in;

}

void main(){

	double in;

	scanf("%lf", &in);

	printf("%d\n", transInt(in));

	while(1);

}
