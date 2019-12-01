#include <stdio.h>

int sum(int n)
{
	if (n==0)
		return 0;
	else 
		return n+ sum(n-1);
}
int fibo(int n){
	if(n==1)
		return 1;
	else
		return fib(n-1) + fib(n-2);
}

int main()
{
	printf("Hello World!\n");
	printf("%d\n", fib(5));
	return 0;
}

