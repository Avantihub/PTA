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
int main()
{
	int a=1,b=1,c,n,m,ans;
	char ch[N];
//	memset(op,'\0',sizeof(op));
	
	gets(ch);
	n=strlen(ch);
	if(ch[0]>='a'&&ch[0]<='z')
	{
		ch[0]=ch[0]-'a'+'A';
	}
	for(int i=1;i<n;i++)
	{
		if(ch[i-1]==' '&&ch[i]>='a'&&ch[i]<='z') 
			ch[i]=ch[i]-'a'+'A';
	}
	puts(ch);
}