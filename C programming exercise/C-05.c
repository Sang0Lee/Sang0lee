#include <stdio.h>

void main()
{
	char a;

	printf("구분할 문자 입력 : ");
	a=getchar();

	if('0' <= a && a <= '9') printf("숫자입니다.\n");
	else if ('A'<= a && a <='Z') printf("대문자입니다.\n");
	else if ('a'<= a && a <='z') printf("소문자입니다.\n");
	else printf("해당없음.");
	
	while(1);
}
