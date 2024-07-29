#include <stdio.h>

int sum(int m, int n);

int main()
{    
    int m, n;

    scanf("%d %d", &m, &n);
    printf("sum = %d\n", sum(m, n));
    
    return 0;
}
int sum(int m,int n)
{
	if(n<=0)
	{
		return -((m*(m-1)-n*(n+1))/2);
	}
	if(m>=0)
	{
		return -(m*(m-1)-n*(n+1))/2;
	}
	if(m<0&&n>0)
	{
		return (n*(n+1)/2-m*(m-1)/2);
	}
}