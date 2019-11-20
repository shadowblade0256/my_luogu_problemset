#include <stdio.h>
#include <stdlib.h>

struct cmilk
{
    int amount;
    int price;
}milk[6000];

int n,total,ans;

bool cmp(cmilk a,cmilk b)
{
    if (a.price!=b.price) return a.price<b.price;
    else if (a.price==b.price && a.amount!=b.amount) return a.amount>b.amount;
    return 0;
}

template <typename T>
void quicksort(T* a,int l,int r,bool (*cmp)(T x,T y))
{
    T mid=a[(l+r)/2];
    int i=l,j=r;
    do
    {
        while (cmp(a[i],mid)) i++;
        while (cmp(mid,a[j])) j--;
        if (i<=j)
        {
            T tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
            i++;j--;
        }
    } while (i<=j);
    if (l<j) quicksort(a,l,j,cmp);
    if (i<r) quicksort(a,i,r,cmp);
}

void input();
void pick();

int main()
{
    input();
    pick();
    return 0;
}

void input()
{
    scanf("%d%d",&total,&n);
    for (int i=1;i<=n;i++)
        scanf("%d%d",&milk[i].price,&milk[i].amount);
    quicksort(milk,1,n,cmp);

    /*for (int i=1;i<=n;i++)
        printf("%d %d\n",milk[i].price,milk[i].amount);*/
}

void pick()
{
    int cur=0;
    for (int i=1;i<=n;i++)
    {
        if (cur+milk[i].amount<=total)
        {
            cur+=milk[i].amount;
            ans+=milk[i].amount*milk[i].price;
        }
        else
        {
            ans+=(total-cur)*milk[i].price;
            break;
        }
    }
    printf("%d",ans);
}
