#include<stdio.h>
int main(void)
{
	int a, b, c;
	int min;
	printf("���� 3���� �Է��ϼ���");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b && b < c) {
		min = b;
	}
	else if (b > a && a < c)
		min = a;

	else if (b > c && a > c)
		min = c;


	printf("�ּڰ��� %d�̴�", min);



	return 0;
}

