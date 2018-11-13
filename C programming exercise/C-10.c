#include <stdio.h>

#define true	1
#define false	0

int str_equals(char ref[], char tar[]){

	int cnt;

	for(cnt = 0; ref[cnt] != NULL && tar[cnt] != NULL; cnt++) //입력된 두개의 문자열에서 짧은 쪽이 끝날때까지 반복
		if(ref[cnt] != tar[cnt]) return false; // ASCII CODE 상에서 다른 문자가 발견되면 즉시 false를 반환

	return true; // 둘 중 짧은 문자열까지 매칭 검사를 해서 매칭인 경우라면 동일한 문자열로 간주, true 반환

}

void main(){

	char name[5][20], sname[20];
	double avr[5];
	int  grade[5][3];
	int cnt = 0, _cnt;

	while(cnt < 5){ //총 5개의 이름, 언어, 수리, 외국어 성적을 입력받음

		printf("\n이름 - 언어 - 수리 - 외국어 순서로 입력\n");
		scanf("%s %d %d %d", name[cnt], &grade[cnt][0], &grade[cnt][1], &grade[cnt][2]);
		
		if(grade[cnt][0] < 0 || grade[cnt][0] > 100) printf("잘못된 언어 성적 입력입니다. 다시 입력하세요\n");  // 이하 성적이 비정상 입력일 경우 저장하지 않음
		else if(grade[cnt][1] < 0 || grade[cnt][1] > 100) printf("잘못된 수리 성적 입력입니다. 다시 입력하세요\n");
		else if(grade[cnt][2] < 0 || grade[cnt][2] > 100) printf("잘못된 외국어 성적 입력입니다. 다시 입력하세요\n");
		else{ // 비정상 케이스를 제외한 정상 케이스만을 다음 저장공간으로 이동시키며 카운팅

			avr[cnt] = (grade[cnt][0] + grade[cnt][1] + grade[cnt][2])/3.0;
			cnt++;

		}

	}

	printf("\n검색할 이름을 입력하세요.\n");
	scanf("%s", sname);

	for(cnt = 0; cnt < 5; cnt++){
		
		if(str_equals(name[cnt], sname)){ // 총 5명 중 매칭되는 이름을 찾도록 비교 함수 구동, true면 if문 실행

			printf("해당 학생의 이름은 %s이고 언어 :%d 수리 : %d 외국어 : %d\n평균은 %3.1lf\n", name[cnt], grade[cnt][0],  grade[cnt][1], grade[cnt][2], avr[cnt]);
			return; // 찾는 즉시 메인 함수 종료

		}

	}

	printf("매칭되는 학생이 없습니다.\n"); // 찾아지지 않는 경우에만 실행됨


}
