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
	int sum2 = mydiv(a,b);
	printf("init here %d %d %d\n",sum,sum1,sum2);
	return 0;
}
