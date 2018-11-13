#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define true	1
#define false	0

int	vending_machine(int insert, int *item){

	static int money = 0;
	static int first_access = true;
	int cnt, num;

	if(first_access){

		srand((unsigned int)time(NULL));

		for(cnt = 0; cnt < 40; cnt++){

			if(!(cnt%2))	*(item + cnt) = rand()%11;
			else *(item + cnt) = (rand()%96 + 5) * 100;

		}

		first_access = false;
	}

	money += insert;
	printf("현재 잔고 %d\n", money);

	for(cnt = 0; cnt < 40; cnt+=2)
		printf("%d번 물건은 %d개 있으며 %d원\n", (cnt/2+1), *(item + cnt), *(item + cnt +1));

	printf("\n구입할 물품의 번호 : ");
	scanf("%d", &num);

	num = (num-1) * 2;

	if(*(item + num) > 0){
		
		if(*(item + num +1) > money) printf("잔액 부족\n");
		else{

			*(item + num) -= 1;
			money -= *(item + num + 1);
			printf("남은 잔고 %d\n\n", money);

		}
			
	}
	else printf("해당 물품 재고 없음\n");

}

void main(){

	int money;
	int item[40];

	while(1){
		printf("투입 금액 : ");
		scanf("%d", &money);
		vending_machine(money, item);

	}

}
