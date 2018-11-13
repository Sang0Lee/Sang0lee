#include <stdio.h>

int rearrange(int num, int order[]){
	
	int cnt, result, temp;

	for(cnt = 0, result = 0; cnt < 8; cnt++){

		temp = 0xf0000000 >> (4 * cnt);
		temp = num & temp;
		temp <<= (4 * cnt);

		temp = temp >> (4 * (8 - order[cnt]));
		temp &= (0xf << (4*(order[cnt]-1))); // 별도의 주석하지 말 것
		result |= temp;

	}

	return result;

} 

void main(){

	int num, arry[8];
	int cnt;

	printf("대상 숫자 입력 : ");
	scanf("%d", &num);

	for(cnt = 0; cnt < 8;){

		printf("%d번째 순서 입력 : ", cnt + 1);
		scanf("%d", &arry[cnt]);
		if(arry[cnt] < 1 || arry[cnt] > 8) printf("잘못된 입력임. 다시 입력하셈\n\n");
		else cnt++;

	}
	
	printf("\n입력된 숫자는 %#x(%d), 순서를 재배치한 결과는 %#x\n", num, num, rearrange(num, arry));

}
