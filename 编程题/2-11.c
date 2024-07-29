#include <stdio.h>
#include <math.h>

int main(void)
{
	double a,b;
	
	scanf("%lf",&a);
	printf("f(%.2f) = ",a);
	if(a>=0)
	{
		printf("%.2f\n",sqrt(a));
	}
	else
	{
		printf("%.2f\n",(a+1)*(a+1)+2.0*a+1.0/a);
	}
}