#include <stdio.h>
#define div(i,j) i/j
#define rem(i,j) i%j

void main()
{
	int a,b,c;

	printf("첫번째 입력 : ");
	scanf("%d",&a);
	printf("두번째 입력 : ");
	scanf("%d",&b);

	printf("몫 : %d, 나머지 : %d \n",div(a,b),rem(a,b));

	c = a*a;

	printf("첫번째 정수의 제곱 : %d \n",c);
	printf("첫번째 정수의 제곱을 두번째 정수로 나눈 몫 : %d, 나머지 : %d\n",div(c,b),rem(c,b));
	
	while(1);
}

