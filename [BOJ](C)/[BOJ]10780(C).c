#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibonacci(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
	int input, result;
	scanf("%d", &input);

	result = fibonacci(input);
	printf("%d", result);
}