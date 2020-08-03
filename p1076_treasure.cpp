#include <stdio.h>

const int STRANGE_MOD = 20123;
const int PASS = 1;
const int DEADEND = 0;

int room[10010][110][2],n,m,start,key;

void find(int start);

int main()
{
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++)
    {
        for (int j=0;j<m;j++)
        {
            int passable,board;
            scanf("%d%d",&passable,&board);
            room[i][j][0]=passable;
            room[i][j][1]=board;
        }
    }
    scanf("%d",&start);
    find(start);
    return 0;
}

void find(int start)
{
    int now=start;
    for (int i=1;i<=n;)
    {
        int next,rotatecount=0;
        //printf("NOW: Floor %d Room %d (Board %d Pass %d) Key=%d\n",i,now,room[i][now][1],room[i][now][0],key);

        //TOO SLOW, NEED TO OPTIMIZE

        for (next=now;rotatecount<room[i][now][1];next=(next+1)%m)
        {
            if (room[i][next][0]==PASS) rotatecount++;
        }
        next=(next-1+m)%m;
        //printf("NEXT: Floor %d Room %d (Board %d Pass %d) Key=%d\n",i,next,room[i][next][1],room[i][next][0],key);
        key=(key+room[i][now][1])%STRANGE_MOD;
        now=next;
        i++;
    }
    printf("%d",key);
}


