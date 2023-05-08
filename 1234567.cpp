// qweeq.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main(void)
{

    int a = 100, b = 200, c;

    c = (a == 100 || b > 200); //둘다 참이여야만 참 이것은 거짓이다 거짓이므로 0 c의 값은 0이된다

    printf(“ % d\n”, c);

    return 0;

	
	
}
