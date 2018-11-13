#include <stdio.h>

int str_search(char **ptr, char c, int size){

	int cnt, _cnt, result;
	char *_ptr;

	for(cnt = 1, result = 0; cnt < size; cnt++){

		_ptr = *(ptr + cnt);

		for(_cnt = 0; _ptr[_cnt] != NULL; _cnt++)
			if(_ptr[_cnt] == c) result++;

	}

	return result;

}

void main(int argc, char *argv[]){

	
	char input;
	int	num;

	printf("찾을 문자를 입력 : ");
	scanf("%c", &input);

	num = str_search(argv, input, argc);

	printf("총 횟수는 %d\n", num);

}
