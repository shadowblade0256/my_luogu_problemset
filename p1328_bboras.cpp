#include <stdio.h>

int pata[300],patb[300];
int scorea[5][5]={0,0,1,1,0,
				1,0,0,1,0,
				0,1,0,0,1,
				0,0,1,0,1,
				1,1,0,0,0},
	scoreb[5][5]={0,1,0,0,1,
				0,0,1,0,1,
				1,0,0,1,0,
				1,1,0,0,0,
				0,0,1,1,0};


void emulate()
{
	int n,loopa,loopb,sa=0,sb=0;
	scanf("%d%d%d",&n,&loopa,&loopb);
	for (int i=0;i<loopa;i++)
		scanf("%d",&pata[i]);
	for (int i=0;i<loopb;i++)
		scanf("%d",&patb[i]);
	for (int i=0;i<n;i++)
	{
		sa+=scorea[pata[i%loopa]][patb[i%loopb]];
		sb+=scoreb[pata[i%loopa]][patb[i%loopb]];
	}
	printf("%d %d",sa,sb);
}

int main()
{
	emulate();
	return 0;
}
	
