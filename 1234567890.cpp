// qweeq.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main(void)
{

	int i = 0x10;  // 0001 0000
	//					0000 1000
	//					0000 0100
	//					0000 0010
	//					0000 0001 5번 실행됨

	for (; i; i >>= 1)

		printf(“hello”);


	return 0;
	
	
}
