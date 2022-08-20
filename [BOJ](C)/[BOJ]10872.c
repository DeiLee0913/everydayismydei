#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input;
	long long result = 1;
	scanf("%d", &input);

	while (input > 0)
	{
		result *= input--;
	}

	//long long의 형식 지정자: lld
	printf("%lld", result);
}