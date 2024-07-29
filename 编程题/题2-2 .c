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
	double a;
	
	scanf("%lf",&a);
	if(a<0)
	{
		printf("Invalid Value!\n");
		return 0;
	}
	if(a<=50.0)
	{
		printf("cost = %.2f\n",0.53*a);
	}
	else
	{
		printf("cost = %.2f\n",0.53*a+0.05*(a-50.0));
	}
}