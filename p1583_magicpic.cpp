#include <stdio.h>

struct cpeople
{
    int id;
    int weight;
    int order;
}people[30000];

int n,k,e[11];

int c(cpeople x)
{
    return (x.order-1)%10+1;
}

bool cmp(cpeople a,cpeople b)
{
    if (a.weight>b.weight) return 1;
    else if (a.weight==b.weight && a.id<b.id) return 1;
    return 0;
}

template<typename T>
void quicksort(T* a,int l,int r,bool (*cmp)(T a,T b))
{
    T mid=a[(l+r)/2];
    int i=l,j=r;
    do
    {
        while (cmp(a[i],mid)) i++;
        while (cmp(mid,a[j])) j--;
        if (i<=j)
        {
            T t=a[i];
            a[i]=a[j];
            a[j]=t;
            i++;j--;
        }
    }while (i<=j);
    if (l<j) quicksort(a,l,j,cmp);
    if (i<r) quicksort(a,i,r,cmp);
}

int main()
{
    scanf("%d%d",&n,&k);
    for (int i=1;i<=10;i++)
        scanf("%d",&e[i]);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&people[i].weight);
        people[i].id=i;
    }
    quicksort(people,1,n,cmp);
    for (int i=1;i<=n;i++)
    {
        people[i].order=i;
        people[i].weight+=e[c(people[i])];
    }
    quicksort(people,1,n,cmp);
    for (int i=1;i<=k;i++)
        printf("%d ",people[i].id);
    return 0;
}
