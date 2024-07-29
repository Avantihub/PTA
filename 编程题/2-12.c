#include <stdio.h>

int main()
{
	int f,l,r;
	double c=0.0;
	
	scanf("%d%d",&l,&r);
	if(l>r)
	{
		printf("Invalid.\n");
		return 0;
	}
	printf("fahr celsius\n");
	for(f=l;f<=r;f+=2)
	{
		c=5.0*(f-32.0)/9.0;
		printf("%d%6.1f\n",f,c);
	}
	
	return 0;
}