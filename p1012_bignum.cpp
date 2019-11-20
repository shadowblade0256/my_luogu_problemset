#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>

std::string nums[300];
int len;

bool cmp(std::string a,std::string b)
{
    return strcmp(a.c_str(),b.c_str())>0;
}

void quicksort(std::string* a,int l,int r,bool (*cmp)(std::string x,std::string y))
{
    using namespace std;
    string mid=a[(l+r)/2];
    int i=l,j=r;
    do
    {
        while (cmp(a[i],mid)) i++;
        while (cmp(mid,a[j])) j--;
        if (i<=j)
        {
            string tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
            i++;j--;
        }
    }while (i<=j);
    if (l<j) quicksort(a,l,j,cmp);
    if (i<r) quicksort(a,i,r,cmp);
}

void input();
void compound();

int main()
{
    input();
    compound();
    return 0;
}

void input()
{
    using namespace std;
    scanf("%d",&len);
    for (int i=1;i<=len;i++)
        cin >> nums[i];
    quicksort(nums,1,len,cmp);
}

void compound()
{
    using namespace std;
    for (int i=1;i<=len;i++)
    {
        string t1=nums[i]+nums[i+1],t2=nums[i+1]+nums[i];
        if (strcmp(t1.c_str(),t2.c_str())<0)
        {
            string tmp=nums[i];
            nums[i]=nums[i+1];
            nums[i+1]=tmp;
        }
    }
    for (int i=1;i<=len;i++)
        cout << nums[i];
}
