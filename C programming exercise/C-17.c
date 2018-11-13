#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void arry_init(int *arry){
	
	int cnt;

	srand((unsigned int)time(NULL));

	for(cnt = 0; cnt < 10000; cnt++)
		*(arry + cnt) = (rand() % 20) + 1;

}

int arry_multiply(int *arry, int x1, int y1, int x2, int y2){

	return *(arry + y2*100 + x2) * *(arry + y1*100 + x1);

}

void arry_print(int *arry, int x, int y){

	printf("입력된 점 (%3d,%3d)의 값은 %d\n", x, y, *(arry + y*100 +x));

}

void main(){

	int x1, y1, x2, y2;
	int arry[100][100];

	printf("곱셈할 좌표를 x1 y1 x2 y2 순서로 입력 : ");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

	arry_init(&arry[0][0]);

	arry_print(&arry[0][0], x1, y1);
	arry_print(&arry[0][0], x2, y2);

	printf("두 값의 곱은 %d\n", arry_multiply(&arry[0][0], x1, y1, x2, y2));

}
