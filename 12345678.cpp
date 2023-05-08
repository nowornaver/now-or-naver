// qweeq.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main(void)
{

    int num, tot = 0;

    do {

        printf(“정수 입력 : ”);

        scanf(“ % d”, &num);

        tot += num;

    } while (num != 0);

    printf(“total = % d\n”, tot);  // do while 문은 일단 한번은 do 를 실행을 한다. while 을 보면 넘이 0이 아닐때까지 계속 
                                //do 에 있는걸 반복한다 즉 내가 입력한 숫자가 0을 입력할때까지 모든 숫자를 더하는 프로그램이다.

	
	
}
