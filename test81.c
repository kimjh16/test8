#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int fibo(int n)
{
	int f1 = 1;
	int f2 = 1;
	int fn = 0;

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
		for (int i = 3; i <= n; i++)
		{
			fn = f1 + f2;
			f1 = f2;
			f2 = fn;
		}
		return fn;
	}
}

int main()
{
	int N;

	printf("N 입력: ");
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		printf("F(%d) = %d\n", i, fibo(i));
	}

	return 0;
}