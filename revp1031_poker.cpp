#include <cstdio>
using namespace std;

int n,sum,avg,a[110],ans;

int main()
{
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
		scanf("%d",&a[i]),sum+=a[i];
	avg=sum/n;
	for (int i=1;i<n;i++)
	{
		if (a[i]!=avg)
		{
			a[i+1]-=avg-a[i];
			a[i]=avg;
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}
