#include <stdio.h>
int main(void)
{
	int x;
	int function;
	printf("x���� �Է��ϼ���");
	scanf("%d", &x);

	if (x > 0)
	{
		function = (x + x + x + x + x + x + x) + 2;
		printf("%d", function);


	}
	else if (x <= 0)

	{
		function = x * x - (x + x + x + x + x + x + x + x + x) + 2;
		printf("%d", function);
	}









	return 0;
}
