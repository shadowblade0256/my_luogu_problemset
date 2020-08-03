#include <stdio.h>
#include <math.h>
int primes[150000],plen;
bool notprime[150000];

void make_prime(int n)
{
    notprime[1]=1;
    for (int i=2;i<=n;i++)
    {
        if (!notprime[i])
        {
            for (int j=i*i;j<=n;j+=i)
            {
                notprime[j]=1;
            }
        }
    }
    for (int i=1;i<=n;i++)
        if (!notprime[i]) primes[plen++]=i;
}

int main()
{
    int range;
    scanf("%d",&range);
    //printf("%lf",sqrt(range*1.0));
    make_prime((int)(sqrt(range)));
    for (int i=0;i<plen;i++)
    {
        if (range%primes[i]==0)
        {
            printf("%d",range/primes[i]);
            break;
        }
    }
    return 0;
}