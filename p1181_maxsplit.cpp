#include <stdio.h>

int src[200000],n,limit;

void input();
void split();

int main()
{
    input();
    split();
    return 0;
}
void input()
{
    scanf("%d%d",&n,&limit);
    for (int i=1;i<=n;i++)
        scanf("%d",&src[i]);
}

void split()
{
    int ans=0,tmpsum=0;
    for (int i=1;i<=n;i++)
    {
        if (tmpsum+src[i]<=limit)
            tmpsum+=src[i];
        else
        {
            ans++;tmpsum=src[i];
        }
    }
    printf("%d",ans+1);
}
