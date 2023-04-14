#include<stdio.h>
int main(void)
{
	int a, b, c;
	int min;
	printf("숫자 3개를 입력하세요");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b && b < c) {
		min = b;
	}
	else if (b > a && a < c)
		min = a;

	else if (b > c && a > c)
		min = c;


	printf("최솟값은 %d이다", min);



	return 0;
}

