#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );
    
int main()
{
    int m, n;
  
    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

int narcissistic( int number )
{
	int sum=0,tmp,di;
	if(number<=999)
	{
		tmp=number;
		while(tmp)
		{
			di=tmp%10;
			sum+=di*di*di;
			tmp/=10;
		}
		return number==sum?1:0;
	}
	else
	{
		tmp=number;
		while(tmp)
		{
			di=tmp%10;
			sum+=di*di*di*di;
			tmp/=10;
		}
		return number==sum?1:0;
	}
}
void PrintN( int m, int n )
{
	for(int i=m+1;i<n;i++)
		if(narcissistic(i)==1)
		{
			printf("%d\n",i);
		}
	return ;	
}