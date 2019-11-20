#include <stdio.h>

bool dcheck(int a,int b,int c)
{
	int used[10]={0};
	while (a && b && c)
	{
		used[a%10]++; used[b%10]++; used[c%10]++;
		a/=10; b/=10; c/=10;
	} 
	for (int i=1;i<10;i++)
		if (used[i]>1 || !used[i]) return 0;
	return 1;
}

int main()
{
	int a,b,c;
	bool found=0;
	scanf("%d%d%d",&a,&b,&c);
	for (int i=100;i<=999;i++)
	{
		bool flag=0;
		for (int j=i+1;j<=999 && !flag;j++)
		{
			for (int k=j+1;k<=999 && !flag;k++)
			{
				if (a*j==i*b && c*j==k*b) 
				{
					if (dcheck(i,j,k)) printf("%d %d %d\n",i,j,k),found=1;
					flag=1;
				}
			}
		}
	}
	if (!found) printf("No!!!\n");
	return 0;
}
