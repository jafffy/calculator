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
	printf("남자친구 사귀고 싶다\n");
	return a * b;
}

// $==S
int div(int a, int b)
{
}

// Jaewon Choi
int main()
{
	printf("2 + 3 = %d\n", add(2, 3));
	printf("2 - 3 = %d\n", sub(2, 3));
	printf("2 * 3 = %d\n", mult(2, 3));
	printf("2 / 3 = %d\n", div(2, 3));

	return 0;
}
