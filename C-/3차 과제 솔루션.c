/* 1�� ����
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


/* 2�� ����

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

/* 3�� ����
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


// 4�� ����
/*#include <stdio.h>

void main(){

	int arry[100][100], add_num[2] = {1, -1};
	int size, cnt, _cnt, num;

	while(1){

		scanf("%d", &size);
		if(size >=1 && size <= 100) break;
		printf("�߸��� �Է��Դϴ�!\n");

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



/* 5�� ����
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

/* 6�� ����
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

			printf("�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���.\n");
			continue;

		}

		arry[size] = num;
		size++;
		
	}
	
	printf("result : %d\n", sum(arry, size));

}
*/

// 7�� ����
/* #include <stdio.h>

#define true	1
#define false	0

int str_equals(char ref[], char tar[]){

	int cnt;

	for(cnt = 0; ref[cnt] != NULL && tar[cnt] != NULL; cnt++) //�Էµ� �ΰ��� ���ڿ����� ª�� ���� ���������� �ݺ�
		if(ref[cnt] != tar[cnt]) return false; // ASCII CODE �󿡼� �ٸ� ���ڰ� �߰ߵǸ� ��� false�� ��ȯ

	return true; // �� �� ª�� ���ڿ����� ��Ī �˻縦 �ؼ� ��Ī�� ����� ������ ���ڿ��� ����, true ��ȯ

}

void main(){

	char name[5][20], sname[20];
	double avr[5];
	int  grade[5][3];
	int cnt = 0, _cnt;

	while(cnt < 5){ //�� 5���� �̸�, ���, ����, �ܱ��� ������ �Է¹���

		printf("\n�̸� - ��� - ���� - �ܱ��� ������ �Է�\n");
		scanf("%s %d %d %d", name[cnt], &grade[cnt][0], &grade[cnt][1], &grade[cnt][2]);
		
		if(grade[cnt][0] < 0 || grade[cnt][0] > 100) printf("�߸��� ��� ���� �Է��Դϴ�. �ٽ� �Է��ϼ���\n");  // ���� ������ ������ �Է��� ��� �������� ����
		else if(grade[cnt][1] < 0 || grade[cnt][1] > 100) printf("�߸��� ���� ���� �Է��Դϴ�. �ٽ� �Է��ϼ���\n");
		else if(grade[cnt][2] < 0 || grade[cnt][2] > 100) printf("�߸��� �ܱ��� ���� �Է��Դϴ�. �ٽ� �Է��ϼ���\n");
		else{ // ������ ���̽��� ������ ���� ���̽����� ���� ����������� �̵���Ű�� ī����

			avr[cnt] = (grade[cnt][0] + grade[cnt][1] + grade[cnt][2])/3.0;
			cnt++;

		}

	}

	printf("\n�˻��� �̸��� �Է��ϼ���.\n");
	scanf("%s", sname);

	for(cnt = 0; cnt < 5; cnt++){
		
		if(str_equals(name[cnt], sname)){ // �� 5�� �� ��Ī�Ǵ� �̸��� ã���� �� �Լ� ����, true�� if�� ����

			printf("�ش� �л��� �̸��� %s�̰� ��� :%d ���� : %d �ܱ��� : %d\n����� %3.1lf\n", name[cnt], grade[cnt][0],  grade[cnt][1], grade[cnt][2], avr[cnt]);
			return; // ã�� ��� ���� �Լ� ����

		}

	}

	printf("��Ī�Ǵ� �л��� �����ϴ�.\n"); // ã������ �ʴ� ��쿡�� �����


} */


/* 8�� ����
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

	printf("%s�� %c��(��) ���Ե� Ƚ���� %d\n", arry, c, str_search(arry, c));

}
*/


/* 9�� ���� skip */


/* 10�� ����
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

	printf("�ζ� ��ȣ�� %2d %2d %2d %2d %2d %2d�� ���ʽ� ��ȣ %2d\n", arry[0], arry[1], arry[2], arry[3], arry[4], arry[5], arry[6]);

}

*/

// 11�� ����
/*#include <stdio.h>

int rearrange(int num, int order[]){
	
	int cnt, result, temp;

	for(cnt = 0, result = 0; cnt < 8; cnt++){ // int�������� ����ϹǷ� �� 8���� ����ڵ尡 �߻���. ���� 8���� ����

		temp = 0xf0000000 >> (4 * cnt); // �Էµ� �迭���� ���ʴ�� �ֻ��� ����ڵ���� ���������� �̵��ϹǷ� �̿� ���� bit mask ����
		temp = num & temp; // ������� �߻��� bit mask�� ��迭�� ��� ���ڿ� bit and
		temp <<= (4 * cnt); // mask ó���� ���� �ֻ��� ����ڵ�� �̵����� ����ȭ

		temp = temp >> (4 * (8 - order[cnt])); // ����ȭ �� ����ڵ带 �迭�� �� ������� ����ڵ� ��ġ ����
		temp &= (0xf << (4*(order[cnt]-1))); // ������ �ּ����� �� ��
		result |= temp; // ������ ��ġ�� �̵��� ����ڵ带 ���� ��ȯ ������ bit or �����Ͽ� ����

	}

	return result;

} 

void main(){

	int num, arry[8];
	int cnt;

	printf("��� ���� �Է� : ");
	scanf("%d", &num);

	for(cnt = 0; cnt < 8;){ // int �������� ����ϹǷ� �� 8���� ����ڵ尡 �߻���. ���� 8���� ��������� �ʿ��ϸ� �̸� �迭�� ����

		printf("%d��° ���� �Է� : ", cnt + 1);
		scanf("%d", &arry[cnt]);
		if(arry[cnt] < 1 || arry[cnt] > 8) printf("�߸��� �Է���. �ٽ� �Է��ϼ�\n\n"); // ������ �Է� ����ó��
		else cnt++; // ���� �Է��� ��쿡�� ���� ����������� �̵�

	}
	
	printf("\n�Էµ� ���ڴ� %#x(%d), ������ ���ġ�� ����� %#x\n", num, num, rearrange(num, arry)); // ���ġ �Լ� ����, ��� ���

}*/

// 12�� ����
#include <stdio.h>

void main(){

	int num, cnt, _cnt, __cnt;

	while(1){

		printf("column�� ���� �Է� : ");
		scanf("%d", &num);

		if(num >= 1 && num <= 5) break;
		
		printf("�߸��� �Է� �ٽ� �Է�\n\n");
		
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