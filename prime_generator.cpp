#include <stdio.h>

int p[100000000],ps,count;
bool np[100000000];

void make(bool np[],int p[],int &ps,int n) //��ͨɸ����np��¼�Ƿ�������p��¼������ 
{
	int i; 
	np[1]=1;
	for (i=2;i*i<=n;i++)
	{
		if (!np[i])
		{
			p[count++]=i; //�˴���¼p���ɸ���ʵ�����ɾȥ����ͬ 
			//printf("%d\n",p[ps-1]);
			for (int j=i*i;j<=n;j+=i)
				np[j]=1;
		}
	}
	for (;i<=n;i++)
		if (!np[i])
		{
			p[count++]=i;
			//printf("%d\n",p[ps-1]);
		}
} 

int main()
{
	int ps,psn;
	ps=psn=100000000;
	ps=0;
	freopen("prime.txt","w",stdout);
	make(np,p,ps,psn);
	for (int i=0;i<count;i++)
		printf("%d\n",p[i]);
	printf("%d\n",count); 
	return 0;
	
} 
