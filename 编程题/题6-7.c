#include <stdio.h>
#include <math.h>
#define ll long long
#define N 100010
#define M 1000010

int np[N]={0},tot=0;
const double eps=0.00001;
//const double MAX=1e5f;
/*
void sieve()
{
	np[1]=1;
	for(int i=2;i<=N;i++)
	    if(np[i]==0)
	        for(int j=i+i;j<=N;j+=i)
	            np[j]=1;
	np[2]=0;
	return ;
}
*/
double fact(int n)
{
	double ret=1.0;
	for(int i=2;i<=n;i++)
		ret=ret*1.0*i;
	return ret;	
}   

double dis(double x1,double y1,double x2,double y2)
{
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

void sieve()
{
	np[1]=1;
	for(int i=2;i<=N;i++)
		if(np[i]==0)
		{
			for(int j=i+i;j<=N;j+=i)
				np[j]=1;
		}
	np[2]=0;
	return ;	
}
int gcd(int a,int b)
{
    return b?gcd(b,a%b):a;
}
int main()
{
	int a=1,b=1,c,n,ans;
	char ch;
	
	scanf("%d",&ans);
	ch=getchar();
	while(ch!='=')
	{
		scanf("%d",&b);
		if(ch=='+') ans+=b;
		else if(ch=='-') ans-=b;
		else if(ch=='*') ans*=b;
		else if(ch=='/') 
		{
			if(b==0) 
			{
				printf("ERROR\n");
				return 0;
			}
			else ans/=b;
		}
		else 
		{
			printf("ERROR\n");
			return 0;
		}
		ch=getchar();
	}
	printf("%d\n",ans);
}