#include <stdio.h>

int main(void)
{
	double a,b;
	
	scanf("%lf",&a);//double has to read by "lf"
	if(a==0.0)
	{
		printf("f(0.0) = 0.0\n");
		return 0;
	}
	printf("f(%.1f) = %.1f\n",a,1.0/a);
	return 0;
}