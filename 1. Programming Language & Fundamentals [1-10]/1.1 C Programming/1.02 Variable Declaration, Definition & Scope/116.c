#include <stdio.h>
int fun(int x)
{
	return (x+5);
}

int y = fun(20);

int main()
{
	printf("%d ", y);
}

//error: initializer element is not constant
// int y = fun(20);
// ^
