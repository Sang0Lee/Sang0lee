#include <stdio.h>

#define true	1
#define false	0

int str_equals(char ref[], char tar[]){

	int cnt;

	for(cnt = 0; ref[cnt] != NULL && tar[cnt] != NULL; cnt++)
		if(ref[cnt] != tar[cnt]) return false;

	return true;

}

void main(){

	char name[5][20], sname[20];
	double avr[5];
	int  grade[5][3];
	int cnt = 0, _cnt;

	while(cnt < 5){

		printf("\n이름 - 언어 - 수리 - 외국어 순서로 입력\n");
		scanf("%s %d %d %d", name[cnt], &grade[cnt][0], &grade[cnt][1], &grade[cnt][2]);
		
		if(grade[cnt][0] < 0 || grade[cnt][0] > 100) printf("잘못된 언어 성적 입력입니다. 다시 입력하세요\n");
		else if(grade[cnt][1] < 0 || grade[cnt][1] > 100) printf("잘못된 수리 성적 입력입니다. 다시 입력하세요\n");
		else if(grade[cnt][2] < 0 || grade[cnt][2] > 100) printf("잘못된 외국어 성적 입력입니다. 다시 입력하세요\n");
		else{

			avr[cnt] = (grade[cnt][0] + grade[cnt][1] + grade[cnt][2])/3.0;
			cnt++;

		}

	}

	printf("\n검색할 이름을 입력하세요.\n");
	scanf("%s", sname);

	for(cnt = 0; cnt < 5; cnt++){
		
		if(str_equals(name[cnt], sname)){

			printf("해당 학생의 이름은 %s이고 언어 :%d 수리 : %d 외국어 : %d\n평균은 %3.1lf\n", name[cnt], grade[cnt][0],  grade[cnt][1], grade[cnt][2], avr[cnt]);
			return;

		}

	}

	printf("매칭되는 학생이 없습니다.\n");


} 
