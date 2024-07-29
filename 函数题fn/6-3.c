#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );
    
int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

int factorsum( int number )
{
	if(number<=5) return -1;
	int ret=1;
	int n=number/2+1;
	for(int i=2;i<n;i++)
		if(number%i==0)
		{
			ret+=i;
		}
	return ret;	
}
void PrintPN( int m, int n )
{
	int fl=0;
	for(int i=m;i<=n;i++)
	{
		if(i==factorsum(i))
		{
			fl=1;
			//6 = 1 + 2 + 3
			printf("%d = 1",i);
			for(int j=2;j<i;j++)
				if(i%j==0)
				{
					printf(" + %d",j);
				}
			printf("\n");	
		}
	}
	if(!fl)
	{
		printf("No perfect number\n");
		return ;
	}
}