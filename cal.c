#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

// youngmin
int sub(int a, int b)
{
	return a - b;
}

// jjajang
int mult(int a, int b)
{
	return a * b;
}

// $==S
int div(int a, int b)
{
}

double MySqrt(double x)
{
}

double MyPow(double x)
{
}

double MyLog(double x)
{
}

double MyExp(double x)
{
	return exp(x);
}

// Jaewon Choi
int main()
{
	printf("2 + 3 = %d\n", add(2, 3));
	printf("2 - 3 = %d\n", sub(2, 3));
	printf("2 * 3 = %d\n", mult(2, 3));
	printf("2 / 3 = %d\n", div(2, 3));

	printf("exp(4) = %lf\n", MyExp(4));

	return 0;
}
