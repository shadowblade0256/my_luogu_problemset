#include <stdio.h>
#include <iostream>
#include <algorithm>

typedef long long LL;

int n;
long long fruits[20000];

bool cmp(long long a,long long b)
{
    return a<b;
}

void quicksort(long long* a,int l,int r,bool (*cmp)(long long x,long long y))
{
    long long mid=a[(l+r)/2];
    int i=l,j=r;
    do
    {
        while (cmp(a[i],mid)) i++;
        while (cmp(mid,a[j])) j--;
        if (i<=j)
        {
            long long tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
            i++;j--;
        }
    }while (i<=j);
    if (l<j) quicksort(a,l,j,cmp);
    if (i<r) quicksort(a,i,r,cmp);
}

void view()
{
    for (int i=1;i<=n;i++)
        printf("%I64d ",fruits[i]);
    printf("\n");
}
void input()
{
    freopen("mixfruits.in","r",stdin);
    freopen("mixfruits.out","w",stdout);
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        std::cin >> fruits[i];
    //quicksort(fruits,1,n,cmp);
    std::sort(fruits+1,fruits+n+1);
    view();
}

void mix()
{
    long long ans=0,now=fruits[1];
    for (int i=2;i<=n;i++)
    {
        printf("now=%I64d,total=%I64d,next=%I64d\n",now,ans,fruits[i]);
        now+=fruits[i];
        ans+=now;
    }
    std::cout << ans;
}

int main()
{
    input();
    mix();
    return 0;
}
