#include <stdio.h>
#include <stdlib.h>

#define none	0
#define white	1
#define black	2

// info[0] = initial value
// info[1] = increase value
// info[2] = origin

int pos_check(char *ground, signed int *x_info, signed int *y_info){
	
	signed int _x, _y, cnt, valid_data_cnt = 0;
	int origin;

	origin = *(ground + y_info[2]*25 + x_info[2]);
	_x = x_info[0];
	_y = y_info[0];

	for(cnt  = 0; cnt < 5; cnt++, _x += x_info[1], _y += y_info[1]){
		if(_x < 0 || _x >= 25) continue;
		if(_y < 0 || _y >= 25) continue;
		if(*(ground + _y*25 + _x) != origin) return none;
		
		valid_data_cnt++;

	}

	if(valid_data_cnt < 5) return none;
	else return origin;

}

int winner_check(char *ground){

	int cnt, _cnt, __cnt; // 9 11 12 1 순서로 확인
	signed int x[4][3] = {{0,1,0}, {0,1,0}, {0,0,0}, {0,-1,0}};
	signed int y[4][3] = {{0,0,0}, {0,1,0}, {0,1,0}, {0,1,0}};
	int winner;

	for(cnt = 0; cnt < 25; cnt++){
		for(_cnt = 0; _cnt < 25; _cnt++){

			for(__cnt = 0; __cnt < 4; __cnt++){

				x[__cnt][2] = _cnt;
				y[__cnt][2] = cnt;

				switch(__cnt){

					case 0: x[__cnt][0] = _cnt - 2; y[__cnt][0] = cnt; break;
					case 1: x[__cnt][0] = _cnt - 2; y[__cnt][0] = cnt - 2; break;
					case 2: x[__cnt][0] = _cnt; y[__cnt][0] = cnt - 2; break;
					case 3: x[__cnt][0] = _cnt + 2; y[__cnt][0] = cnt - 2; break;

				}

				//printf("순서 %d\n", __cnt);
				winner = pos_check(ground, x[__cnt], y[__cnt]);
				if(winner != none) return winner;

			}
		}
	}

	return none;

}


void main(){

	char arry[25][25];
	int x, y, seq = black, winner;


	for(x = 0; x < 25; x++)
		for(y = 0; y < 25; y++)
			arry[y][x] = none;

	while(1){

		for(y = 0; y < 25; y++){
			for(x = 0; x < 25; x++){
				if(arry[y][x] == black) printf("B ");
				else if(arry[y][x] == white) printf("W ");
				else printf("- ");
			}
			printf("\n");
		}
		
		winner = winner_check(&arry[0][0]);
		if(winner != 0) break;

		while(1){
			printf("\n돌을 놓을 좌표를 입력 : ");
			scanf("%d %d", &x, &y);


			if(x < 0 || x >= 25) printf("잘못된 x좌표\n");
			else if(y < 0 || y >= 25) printf("잘못된 y좌표\n");
			else if(arry[y][x] != none) printf("이미 돌이 있는 좌표!\n");
			else break;

		}

		system("cls");

		arry[y][x] = seq;
		if(seq == black) seq = white;
		else	seq = black;

	}
	
	if(winner == black) printf("\n승자는 흑돌!\n");
	else printf("\n승자는 백돌\n!");
	

}
