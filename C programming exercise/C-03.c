#include <stdio.h>
void main()
{
	int a, b, c;

	for(a=1; a < 10; a++)
	{
		for (b=1; b < 10; b++)
		{
			c = a*b;
			printf("%d * %d = %d\n",a,b,c);
		}
		printf("\n");
	}

	while(1);
}

