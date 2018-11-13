#include <stdio.h>

void arry_multiply(int *ptr, int num, int size){

	int cnt;

	for(cnt = 0; cnt < size; cnt++)
		*(ptr + cnt) *= num;

}

void main(){

	int num, cnt, _cnt;
	int arry[5][5] = { {1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}, {16,17,18,19,20}, {21,22,23,24,25}};

	printf("숫자 입력 : ");
	scanf("%d", &num);

	arry_multiply(&arry[0][0], num, sizeof(arry)/sizeof(arry[0][0]));

	for(cnt = 0; cnt < 5; cnt++){
		for(_cnt = 0; _cnt < 5; _cnt++)
			printf("%3d", arry[cnt][_cnt]);
		printf("\n");
	}


}
