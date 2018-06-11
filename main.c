#include <stdio.h>

int add(int a,int b)
{
	return a +b;
}

int main(void)
{
	int a = 10;
	int b = 10;
	int sum = add(a,b);
	int sum1 = mysub(a,b);
	printf("init here %d %d\n",sum,sum1);
	return 0;
}
