#include <stdio.h>

int reverse( int number );
    
int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

int reverse( int number )
{
	int fl=1,neg=1;
	if(number<0) neg=-1;
	int tmp=number,s,ret=0;
	while(tmp)
	{
		s=tmp%10;
		ret=ret*10+s;
		tmp/=10;
	}
	return neg*ret;
}