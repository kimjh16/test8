#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int fibo(int n)
{

	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 1;
	}
	else
	{
		return fibo(n - 1) + fibo(n - 2);
	}
	
}
int main()
{
	int N;

	printf("N 값 입력: ");
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		printf("F(%d) = %d\n", i, fibo(i));
	}

	return 0;
}

