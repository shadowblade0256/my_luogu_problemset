#include <stdio.h>
#include <algorithm>

int stack[200],ans,n,sum;

void print()
{
	for (int i=0;i<n;i++)
		printf("%d ",stack[i]);
	printf("\n");
}

void move()
{
	int ave=sum/n;
	for (int i=0;i<n;i++)
	{
		stack[i+1]-=ave-stack[i];
		stack[i]=ave;
		ans++;
	}
}

int main()
{
	scanf("%d",&n);
	for (int i=0;i<n;i++)
		scanf("%d",&stack[i]),sum+=stack[i];
	move();
	printf("%d",ans);
	return 0;
}
