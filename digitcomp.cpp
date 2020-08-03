#include <stdio.h>
#include <string.h>

int num[30],len;

bool cmp(int a,int b)
{
    return a>b;
}

template <typename T>
void quicksort(T* a,int l,int r,bool (*cmp)(T,T))
{
    T mid=a[(l+r)/2];
    int i=l,j=r;
    do
    {
        while (cmp(a[i],mid)) i++;
        while (cmp(mid,a[j])) j--;
        if (i<=j)
        {
            T tmp;
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
        }
    }while (i<=j);
    if (l<j) quicksort(a,l,j,cmp);
    if (i<r) quicksort(a,i,r,cmp);
}

void split(int x);

int main()
{
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        int t;
        scanf("%d",&t);
        split();
        quicksort(num,0,strlen(num)-1,cmp);
        for (int i=0;i<len;i++)
            printf("%d",num[i]);
        printf("\n");
        memset(num,0,sizeof(num));
        len=0;

    }
    return 0;
}

void split()
{
    for (int )
}
