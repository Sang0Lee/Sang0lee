#include <stdio.h>

void main()
{
	int a,b,c,d;

	printf("2진수로 변환할 10진법 수 입력(음수는 2의 보수로 표현됨): ");
	scanf("%d",&a);
	
	for(b=1,c=1;b<31;b++)
	{
		c = c * 2;
	}

	if( a >= 0) printf("0b0");
	else printf("0b1");

	for(b = 30; b >= 0;b--)
	{
		d = a & c; 
		d = d >> b;

		printf("%d",d);

		c = c / 2;

	}	

	while(1);
}
