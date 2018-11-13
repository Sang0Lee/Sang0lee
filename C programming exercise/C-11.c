#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define true	1
#define false	0

int arry_check(int arry[], int num){

	int cnt;

	for(cnt = 0; cnt < 7; cnt++)
		if(arry[cnt] == num) return true;

	return false;

}

void main(){

	int num, cnt, _cnt, arry[7] = {0,0,0,0,0,0,0};

	srand((unsigned)time(NULL));
	
	for(cnt = 0; cnt < 7; cnt++){
		
		num = rand() % 46;
		
		if(arry_check(arry, num)) cnt--;
		else arry[cnt] = num;

	}

	printf("로또 번호는 %2d %2d %2d %2d %2d %2d와 보너스 번호 %2d\n", arry[0], arry[1], arry[2], arry[3], arry[4], arry[5], arry[6]);

}
