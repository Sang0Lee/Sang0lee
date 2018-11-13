include <stdio.h>

int sum(int arry[], int size){

	int cnt, result;

	for(cnt = 0, result = 0; cnt < size; cnt++)
		result += arry[cnt];

	return result;

}

void main(){

	int arry[100];
	int num = 1, size = 0;

	while(num != 0){

		scanf("%d", &num);
		if(num == 0) break;
		else if(num < 1 || num > 10){

			printf("잘못된 입력입니다. 다시 입력하세요.\n");
			continue;

		}

		arry[size] = num;
		size++;
		
	}
	
	printf("result : %d\n", sum(arry, size));

}
