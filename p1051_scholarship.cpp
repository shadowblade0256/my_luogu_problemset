#include <stdio.h>
#include <iostream>

struct cstu
{
    int id;
    char name[100];
    int finalscore;
    int classscore;
    bool admin;
    bool west;
    int paper;
    int scholar;
}stu[300];

int n,sum;

bool cmp(cstu a,cstu b)
{
    if (a.scholar>b.scholar) return 1;
    else if (a.scholar==b.scholar && a.id<b.id) return 1;
    return 0;
}

void quicksort(cstu *a,int l,int r,bool (*cmp)(cstu a,cstu b))
{
    cstu mid=a[(l+r)/2];
    int i=l,j=r;
    do
    {
        while (cmp(a[i],mid)) i++;
        while (cmp(mid,a[j])) j--;
        if (i<=j)
        {
            cstu t=a[i];
            a[i]=a[j];
            a[j]=t;
            i++;j--;
        }
    }while (i<=j);
    if (l<j) quicksort(a,l,j,cmp);
    if (i<r) quicksort(a,i,r,cmp);
}

void input()
{
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        char isadmin,iswest;
        std::cin >> stu[i].name
                >> stu[i].finalscore
                >> stu[i].classscore
                >> isadmin
                >> iswest
                >> stu[i].paper;
        if (iswest=='Y') stu[i].west=1;
        if (isadmin=='Y') stu[i].admin=1;
        stu[i].id=i;
    }
}

void calc()
{
    for (int i=0;i<n;i++)
    {
        if (stu[i].finalscore>80 && stu[i].paper)
            stu[i].scholar+=8000;
        if (stu[i].finalscore>85 && stu[i].classscore>80)
            stu[i].scholar+=4000;
        if (stu[i].finalscore>90)
            stu[i].scholar+=2000;
        if (stu[i].finalscore>85 && stu[i].west)
            stu[i].scholar+=1000;
        if (stu[i].classscore>80 && stu[i].admin)
            stu[i].scholar+=850;
        sum+=stu[i].scholar;
    }
    quicksort(stu,0,n-1,cmp);
}

void output()
{
    printf("%s\n%d\n%d\n",stu[0].name,stu[0].scholar,sum);
}

int main()
{
    input();
    calc();
    output();
    return 0;
}
