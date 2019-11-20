#include <stdio.h>

int p[30000];
bool np[30000];

int make(int p[],bool np[],int n)
{
	int count=0,i;
	np[1]=1;
	for (i=2;i*i<=n;i++)
	{
		if (!np[i])
		{
			p[count++]=i;
			for (int j=i*i;j<=n;j+=i)
				np[j]=1; 
		}
	}
	for (;i<=n;i++)
		if (!np[i]) p[count++]=i;
	return count;
}

bool is_prime(int x)
{
	if (x<=1) return 0;
	for (int i=2;i*i<=x;i++)
		if (x%i==0) return 0;
	return 1;
}
int main()
{
	int origin,x;
	scanf("%d",&origin);
	x=make(p,np,origin);
	bool flag=1;
	for (int i=0;i<x && flag;i++)
	{
		for (int j=i;j<x && flag;j++)
		{
			if (is_prime(origin-p[i]-p[j]))
			{
				printf("%d %d %d\n",p[i],p[j],origin-p[i]-p[j]);
				flag=0;
			}
		}
	}
	return 0;
} 
