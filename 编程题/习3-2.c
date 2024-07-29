#include <stdio.h>
#include <math.h>

double fact(int n)
{
	double ret=1.0;
	for(int i=2;i<=n;i++)
		ret=ret*1.0*i;
	return ret;	
}

int main()
{
	double ans=0.0,fl=-1.0;
	int m,n,s=0;
	
	scanf("%d",&n);
	if(n<0)
	{
		printf("sign(%d) = -1\n",n);
	}
	else if(n>0)
	{
		printf("sign(%d) = 1\n",n);
	}
	else
	{
		printf("sign(%d) = 0\n",n);
	}
}