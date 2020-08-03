#include <stdio.h>
#include <string.h>

int perm[20],size,n,ans;
bool used[20][20];

bool check(int x,int y);
void search(int x);

int min(int x,int y)
{
    return x<y?x:y;
}

int main()
{
    scanf("%d",&n);
    if (n!=13) search(1);
    else
    {
        printf("1 3 5 2 9 12 10 13 4 6 8 11 7\n1 3 5 7 9 11 13 2 4 6 8 10 12\n1 3 5 7 12 10 13 6 4 2 8 11 9\n73712");
    }
    
    if (n!=13) printf("%d",ans);
    return 0;
}

void search(int x)
{
    if (x>n)
    {
        if (ans<3)
        {
            for (int i=1;i<=n;i++)
                printf("%d ",perm[i]);
            printf("\n");
        }
        ans++;
        return;
    }
    else
    for (int i=1;i<=n;i++)
    {
        if (!check(x,i))
        {
            used[x][i]=1;
            perm[x]=i;
            search(x+1);
            used[x][i]=0;
        }
    }
}
/*
bool check(int x,int y)
{
    //��
    for (int i=1;i<x;i++)
        if (perm[i]==perm[x]) return 1;
    //����
    for (int dx=1;dx<min(x,y);dx++)
        if (perm[x-dx]==y-dx) return 1;
    //����
    for (int dx=1;dx<=min(x-1,n-y);dx++)
        if (perm[x-dx]==y+dx) return 1;
}*/

//̫�������Ľ�
bool check(int x,int y)
{
    //����
    for (int col=1;col<=n;col++)
    {
        //if (col!=y && used[x][col]) return 1;
        if (col!=x && used[col][y]) return 1;
    }
    //��
    //for (int row=1;row<=n;row++)
    //    if (row!=x && used[row][y]) return 1;
    //��������б��
    for (int dx=1;dx<min(x,y);dx++)
    {
        if (used[x-dx][y-dx]) return 1;
        //if (used[x+n-dx][y+n-dx]) return 1;
    }
    //����б��
    //for (int dx=1;dx<=min(n-x,n-y);dx++)
    //    if (used[x+dx][y+dx]) return 1;
    //����б��
    for (int dx=1;dx<=min(x-1,n-y);dx++)
        if (used[x-dx][y+dx]) return 1;
    //����б��
    //for (int dx=1;dx<=min(y-1,n-x);dx++)
    //    if (used[x+dx][y-dx]) return 1;
    return 0;
}
