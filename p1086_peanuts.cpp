#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int peanuts[30][30];
bool visit[30][30];
int n,m,k,pcount,ans;

struct ppos
{
	int x,y,num;
}pos[500];

int fdis(int x1,int y1,int x2,int y2)
{
	return abs(x1-x2)+abs(y1-y2);
}

int cmp(const void* p,const void* q)
{
	return ((ppos*)p)->num-((ppos*)q)->num>0?-1:1;
}

void input()
{
	scanf("%d%d%d",&n,&m,&k);
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			scanf("%d",&peanuts[i][j]);
			if (peanuts[i][j])
			{
				pos[pcount].x=j+1;
				pos[pcount].y=i+1;
				pos[pcount++].num=peanuts[i][j];
			}
		}
	}
	qsort(pos,pcount,sizeof(ppos),cmp);
}

void pick()
{
	int sx=pos[0].x,sy=0,time=0,i;
	for (i=0;i<pcount;i++)
	{
	    //printf("now position (%d,%d), nowhave=%d, time=%d\n",sx,sy,ans,time);
		if (time+fdis(sx,sy,pos[i].x,pos[i].y)+1+pos[i].y<=k)
		{
		    //printf("picked tree (%d,%d) num=%d, dis=%d, time=%d, have=%d\n",pos[i].x,pos[i].y,pos[i].num,fdis(sx,sy,pos[i].x,pos[i].y),time+fdis(sx,sy,pos[i].x,pos[i].y)+1,ans+pos[i].num);
			time+=fdis(sx,sy,pos[i].x,pos[i].y)+1;
			ans+=pos[i].num;
			sx=pos[i].x;
			sy=pos[i].y;
		}
		else
            break;
	}
    //printf("now position (%d,%d), nowhave=%d, time=%d\n",sx,sy,ans,time);
}

int main()
{
	input();
	pick();
	printf("%d",ans);
	return 0;
}
