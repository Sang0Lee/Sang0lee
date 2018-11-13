/* 1번 문제
#include <stdio.h>
#include <math.h>

#define pi 3.141592

void main() {
	
	double x, y, angle;

	while(1){
		scanf("%lf %lf", &x, &y);
		if(x == 0){ printf("Divide by 0 error!\n"); return;}

		angle = atan(y/x);
		angle = angle * 180 / pi;

		if(y < 0){
			angle += 180;
			if(x > 0) angle += 180;
		}
		else if(x < 0) angle += 180;

		printf("%4.2lf\n", angle);

	}

	while(1);
}

*/


/* 2번 문제

#include <stdio.h>

int transInt(double in){

	return (int)in;

}

void main(){

	double in;

	scanf("%lf", &in);

	printf("%d\n", transInt(in));

	while(1);

}

*/

/* 3번 문제
#include <stdio.h>

int sum(int x){

	if(x > 1) return x + sum(x-1);
	else return 1;

}

void main(){

	int x;

	scanf("%d", &x);

	printf("%d\n", sum(x));
	
}
*/


// 4번 문제
/*#include <stdio.h>

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
}*/



/* 5번 문제
#include <stdio.h>

void main(){

	char string[100] = {NULL};
	int cnt;

	gets(string);

	for(cnt = 0; string[cnt] != NULL; cnt++){
		if(string[cnt] == ' '){
			string[cnt] = NULL;
			break;
		}
	}

	puts(string);

}
*/

/* 6번 문제
#include <stdio.h>

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
*/

// 7번 문제
/* #include <stdio.h>

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


} */


/* 8번 문제
#include <stdio.h>

int str_search(char str[], char c){

	int cnt, num;

	for(cnt = 0, num = 0; str[cnt] != NULL; cnt++)
		if(str[cnt] == c) num++;

	return num;

}

void main(){

	char arry[100], c;

	scanf("%s %c", arry, &c);

	printf("%s에 %c이(가) 포함된 횟수는 %d\n", arry, c, str_search(arry, c));

}
*/


/* 9번 문제 skip */


/* 10번 문제
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

*/

// 11번 과제
/*#include <stdio.h>

int rearrange(int num, int order[]){
	
	int cnt, result, temp;

	for(cnt = 0, result = 0; cnt < 8; cnt++){ // int변수만을 고려하므로 총 8개의 헥사코드가 발생함. 따라서 8번의 실행

		temp = 0xf0000000 >> (4 * cnt); // 입력된 배열에는 차례대로 최상위 헥사코드부터 최하위까지 이동하므로 이에 맞춰 bit mask 설정
		temp = num & temp; // 순서대로 발생된 bit mask를 재배열할 대상 숫자와 bit and
		temp <<= (4 * cnt); // mask 처리된 값을 최상위 헥사코드로 이동시켜 정규화

		temp = temp >> (4 * (8 - order[cnt])); // 정규화 된 헥사코드를 배열에 들어간 순서대로 헥사코드 위치 변경
		temp &= (0xf << (4*(order[cnt]-1))); // 별도의 주석하지 말 것
		result |= temp; // 지정된 위치로 이동된 헥사코드를 최종 반환 변수에 bit or 연산하여 저장

	}

	return result;

} 

void main(){

	int num, arry[8];
	int cnt;

	printf("대상 숫자 입력 : ");
	scanf("%d", &num);

	for(cnt = 0; cnt < 8;){ // int 변수만을 고려하므로 총 8개의 헥사코드가 발생함. 따라서 8개의 저장공간이 필요하며 이를 배열로 저장

		printf("%d번째 순서 입력 : ", cnt + 1);
		scanf("%d", &arry[cnt]);
		if(arry[cnt] < 1 || arry[cnt] > 8) printf("잘못된 입력임. 다시 입력하셈\n\n"); // 비정상 입력 예외처리
		else cnt++; // 정상 입력인 경우에만 다음 저장공간으로 이동

	}
	
	printf("\n입력된 숫자는 %#x(%d), 순서를 재배치한 결과는 %#x\n", num, num, rearrange(num, arry)); // 재배치 함수 실행, 결과 출력

}*/

// 12번 과제
#include <stdio.h>

void main(){

	int num, cnt, _cnt, __cnt;

	while(1){

		printf("column의 수를 입력 : ");
		scanf("%d", &num);

		if(num >= 1 && num <= 5) break;
		
		printf("잘못된 입력 다시 입력\n\n");
		
	}

	for(cnt = 2; cnt < 10; cnt += num){

		for(_cnt = 1; _cnt < 10; _cnt++){

			for(__cnt = cnt; __cnt < (num+cnt) && __cnt < 10; __cnt++)
				printf("%2d * %2d = %2d   ", __cnt, _cnt, __cnt*_cnt);
			printf("\n");

		}
		printf("\n\n");

	}
	
} 