#include <stdio.h>
#include <math.h>
#include <string.h>
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
void bubble(int n,int a[])
{
	int fl=0,tmp;
	for(int i=0;i<n;i++)
	{
		fl=0;
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
				fl=1;
			}
		}
		if(!fl) break;
	}
}
int init(int n,int a[],int val)
{
	for(int i=0;i<n;i++)
	{
		if(val==a[i])
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int T,n,i,j,k,y,m,ans=0;
	int a[30],b[30],c[50],cnt=0;
	char ch[12],op;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&m);
	for(int i=0;i<m;i++)
		scanf("%d",&b[i]);
	for(int i=0;i<n;i++)
	{
		if(!init(cnt,c,a[i])&&!init(m,b,a[i]))
		{
			c[cnt++]=a[i];
		}
	}
	for(int i=0;i<m;i++)
	{
		if(!init(n,a,b[i])&&!init(cnt,c,b[i]))
		{
			c[cnt++]=b[i];
		}
	}
	printf("%d",c[0]);
	for(int i=1;i<cnt;i++)
		printf(" %d",c[i]);
	
	return 0;
}