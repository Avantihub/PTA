#include <stdio.h>
#include <math.h>
#define ll long long

int main(void)
{
	int n;
	
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		printf("pow(3,%d) = %lld\n",i,(ll)pow(3.0,1.0*i));
	}
	return 0;
}