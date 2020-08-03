#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef long long LL;

int troops[100100],n,m,p1,p2,s1,s2;
LL dragon_p,tiger_p;

void input();
void power_init();
void solve();

int main()
{
    input();
    power_init();
    solve();
    return 0;
}

void input()
{
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        scanf("%d",&troops[i]);
    scanf("%d%d%d%d",&m,&p1,&s1,&s2);
}

void power_init()
{
    for (int i=1;i<m;i++)
        dragon_p+=troops[i]*labs(m-i);
    for (int i=m+1;i<=n;i++)
        tiger_p+=troops[i]*labs(m-i);
    //Deus Ex MACHINA!!!
    if (p1<m) dragon_p+=s1*labs(m-p1);
    else if (p1>m) tiger_p+=s1*labs(m-p1);
}

void solve()
{
    LL mn=922337203685477LL;
    //printf("dragon=%lld tiger=%lld",dragon_p,tiger_p);
    for (int i=1;i<=n;i++)
    {
        if (i<m)
        {
            if (llabs((dragon_p+s2*labs(m-i))-tiger_p)<mn)
            {
                mn=llabs(dragon_p+s2*labs(m-i)-tiger_p);
                p2=i;
            }
            //printf("P2=%d? dragon=%lld tiger=%lld\n",i,dragon_p+s2*labs(m-i),tiger_p);
        }
        else if (i>m)
        {
            if (llabs(tiger_p+s2*labs(m-i)-dragon_p)<mn)
            {
                mn=llabs(tiger_p+s2*labs(m-i)-dragon_p);
                p2=i;
            }
            //printf("P2=%d? dragon=%lld tiger=%lld\n",i,dragon_p,tiger_p+s2*labs(m-i));
        }
    }
    printf("%d",p2);
}
