#include <stdio.h>

void hollowPyramid ( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    hollowPyramid ( n );

    return 0;
}

void hollowPyramid ( int n )
{
	int sp;
	for(int i=1;i<=n;i++)
	{
		if(i==n)
		{
			sp=2*n-1;
			while(sp--) printf("%d",n);
			break;
		}
		sp=n-i;
		while(sp--) printf(" ");
		printf("%d",i);
		if(i==1)
		{
			putchar('\n');
			continue;
		}
		sp=2*i-3;
		while(sp--) putchar(' ');
		printf("%d\n",i);
	}
}