#include <stdio.h>
#include <string.h>

int a[10000],b[10000],c[10000];

int max(int a,int b)
{
    return a>b?a:b;
}

void show(int *num);
void add(int *a,int *b,int *c);
void read(char *num,int *dest);

int main()
{
    char buf1[10000],buf2[10000];
    read(buf1,a);
    read(buf2,b);
    add(a,b,c);
    show(c);
    return 0;
}

void show(int *num)
{
    for (int i=num[0];i;i--)
        printf("%d",num[i]);
}

void add(int *a,int *b,int *c)
{
    int t;
    c[0]=max(a[0],b[0]);
    for (int i=1;i<=c[0];i++)
    {
        t+=a[i]+b[i];
        c[i]=t%10;
        t/=10;
    }
    if (t>0)
        c[c[0]++]=t;
}

void read(char* num,int* dest)
{
    scanf("%s",num);
    dest[0]=strlen(num);
    for (int i=0;i<dest[0];i++)
    {
        dest[dest[0]-i]=num[i]-'0';
    }
}

