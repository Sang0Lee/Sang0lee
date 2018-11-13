//배열은 연속된 주소의 시작주소로부터 index를 이용해 각각의 메모리에 접근하고
//포인터는 시작주소를 받아와 배열처럼 인덱스를 이용해 메모리에 접근하거나 상수 연산을 통해 접근할 수 있다.
//즉 배열은 포인터의 일부 기능을 간단하게 이용할 수 있게 지원하는 형태로 볼 수 있다.
#include <stdio.h>
int sum(int *arry, int size){

	int cnt, result;
	for(cnt = 0, result = 0; cnt < size; cnt++)
		result += *(arry + cnt);
	return result;
}
