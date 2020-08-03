#include <stdio.h>

int maze[10][10],n,m,sx,sy,fx,fy,trap,ans;

void game(int x,int y);

int main()
{
    scanf("%d%d%d",&n,&m,&trap);
    scanf("%d%d%d%d",&sx,&sy,&fx,&fy);
    for (int i=1;i<=trap;i++)
    {
        int tmpx,tmpy;
        scanf("%d%d",&tmpx,&tmpy);
        maze[tmpx][tmpy]=-1;
    }
    game(sx,sy);
    printf("%d",ans);
    return 0;
}

void game(int x,int y)
{
    if (x<=0 || x>n || y<=0 || y>m || maze[x][y]<0) return;
    if (x==fx && y==fy) ans++;
    if (!maze[x][y+1])
    {
        maze[x][y]=1;
        game(x,y+1);
        maze[x][y]=0;
    }
    if (!maze[x][y-1])
    {
        maze[x][y]=1;
        game(x,y-1);
        maze[x][y]=0;
    }
    if (!maze[x+1][y])
    {
        maze[x][y]=1;
        game(x+1,y);
        maze[x][y]=0;
    }
    if (!maze[x-1][y])
    {
        maze[x][y]=1;
        game(x-1,y);
        maze[x][y]=0;
    }
}
