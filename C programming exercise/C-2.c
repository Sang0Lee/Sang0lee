#include <stdio.h>
void main()
{
	int a; 

	printf("입력 받은 수 : ");
	scanf("%d",&a);

	printf("16으로 나눈 나머지 : %d\n",a & 15);

	while(1);
}
