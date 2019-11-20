#include <stdio.h>
#include <iostream>

long long a[1000001];
int n;

bool cmp(long long a,long long b)
{
    return a<b;
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
    }while (i<=j);
    if (l<j) quicksort(a,l,j,cmp);
    if (i<r) quicksort(a,i,r,cmp);
}

int main()
{
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        std::cin >> a[i];
    quicksort(a,1,n,cmp);
    for (int i=1;i<=n;i++)
        std::cout << a[i] << ' ';
    return 0;
}
