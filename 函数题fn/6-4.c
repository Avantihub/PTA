#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
    
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

#define N 10010
int fib(int n)
{
	if(n<=2) return 1;
	int a=1,b=1,c;
	for(int i=3;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return b;
}
void PrintFN( int m, int n )
{
	int fl=0,tmp;
	for(int i=2;;i++)
	{
		tmp=fib(i);
		if(tmp>=m&&tmp<=n)
		{
			if(fl==1) putchar(' ');
			printf("%d",tmp);
			
			fl=1;
		}
		else if(tmp>n)
			break;
	}
	if(!fl)
	{
		printf("No Fibonacci number\n");
	}
	return ;
}