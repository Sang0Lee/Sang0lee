#include <stdio.h>

void main(){

	int num, cnt, _cnt, __cnt;

	while(1){

		printf("column의 수를 입력 : ");
		scanf("%d", &num);

		if(num >= 1 && num <= 5) break;
		
		printf("잘못된 입력 다시 입력\n\n");
		
	}

	for(cnt = 2; cnt < 10; cnt += num){

		for(_cnt = 1; _cnt < 10; _cnt++){

			for(__cnt = cnt; __cnt < (num+cnt) && __cnt < 10; __cnt++)
				printf("%2d * %2d = %2d   ", __cnt, _cnt, __cnt*_cnt);
			printf("\n");

		}
		printf("\n\n");

	}
	
} 
