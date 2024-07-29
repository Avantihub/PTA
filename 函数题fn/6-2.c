#include <stdio.h>

int fn( int a, int n );
int SumA( int a, int n );
    
int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));        
    printf("s = %d\n", SumA(a,n));    
    
    return 0;
}

int fn(int a,int n)
{
	int ret=0;
	while(n--) ret=ret*10+a;
	return ret;
}
int SumA(int a,int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
		sum+=fn(a,i);
	return sum;	
}