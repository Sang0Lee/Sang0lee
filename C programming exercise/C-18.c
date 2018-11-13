#include <stdio.h>
#include <string.h>

void main(int argc, char *argv[]){

	int cnt, _cnt, min_cnt;
	char *temp;

	// sort algorithm은 매우 다양한 algorithm이 존재하나 가장 직관적이고 이해하기 쉬운
	// linaer sort algorithm을 적용함
	// 여러 sort algorithm 중 기초적인 내용은 자료구조 강의에서 직접적으로 배울 것

	for(cnt = 1; cnt < argc; cnt++){ 

		min_cnt = cnt;

		for(_cnt = cnt; _cnt < argc; _cnt++)
			if(strcmp(argv[min_cnt], argv[_cnt]) > 0) min_cnt = _cnt;

		temp = argv[min_cnt];
		argv[min_cnt] = argv[cnt];
		argv[cnt] = temp;

		printf("%s\n", argv[cnt]);
		
	}

}
