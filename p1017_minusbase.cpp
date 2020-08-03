#include <stdio.h>

int coef[100],num,base;

int quickpow(int base,int exp,int mod)
{
    int res=1,t=base;
    while (exp)
    {
        if (exp%2) res=res*t%mod;
        exp>>=1; t=t*t%mod;
    }
    return res;
}

int convert(int n,int base)
{
    int len=0,poslen=0,tmp=n;
    base=-base;
    while (tmp)
    {
        poslen++;
        tmp=tmp/base;
    }
    if (n<0) poslen+=2;
    base=-base;
    for (int i=poslen;i>=0;i--)
    {
        coef[len++]=n%base*(base>0?1:-1);
        n-=quickpow(base,i,2147483647);
    }
    return len;
}

int main()
{
    scanf("%d%d",&num,&base);
    int length=convert(num,base);
    for (int i=0;i<length;i++)
        printf("%d",coef[i]);
    return 0;
}
