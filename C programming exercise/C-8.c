#include <stdio.h>

void main(){

	int arry[100][100], add_num[2] = {1, -1};
	int size, cnt, _cnt, num;

	while(1){

		scanf("%d", &size);
		if(size >=1 && size <= 100) break;
		printf("잘못된 입력입니다!\n");

	}

	for(cnt = 0, _cnt = 0, num = 1; cnt < size; cnt++, _cnt += add_num[cnt%2]){
		
		while(_cnt >= 0 && _cnt < size){

			arry[cnt][_cnt] = num;
			num++;
			_cnt += add_num[cnt%2];

		}

	}

	for(cnt = 0; cnt < size; cnt++){
		for(_cnt = 0; _cnt < size; _cnt++)
			printf("%2d ", arry[cnt][_cnt]);
		printf("\n");
	}
}
