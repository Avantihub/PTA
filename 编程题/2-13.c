#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	double s=0.0,fl=1.0;
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		s+=fl*1.0/(3.0*i-2.0);
		fl=-fl;
	}
	printf("sum = %.3f\n",s);
}