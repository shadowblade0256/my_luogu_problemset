#include <stdio.h>
#include <algorithm>

int finger[10001],n,m;

int main()
{
    using namespace std;
    scanf("%d",&n);
    scanf("%d",&m);
    for (int i=1;i<=n;i++)
        scanf("%d",&finger[i]);
    for (int i=1;i<=m;i++)
        next_permutation(finger+1,finger+n+1);
    for (int i=1;i<=n;i++)
        printf("%d ",finger[i]);
    return 0;
}
