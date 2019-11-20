#include <stdio.h>
#include <math.h>

int a[30]={1,1,1,0,1,1,1},ways;

//����ɸ��������� 
bool is_prime(int x)
{ 
	if (x<=1) return 0;  //����0��add_by_pattern�����Чֵ-1 
	for (int i=2;i<=(int)sqrt(x);i++)
	{
		if (x%i==0) return 0;
	}
	return 1;
}

//����ĺ��ģ�������ģ��״̬
//1~n������ÿ������ȡ��ȡ����״̬���ʿ���һ������������ʾ
//����ÿһλ0��ʾ��ȡ��1��ʾȡ
//��n<=20,����״̬��������(2^20)-1=1048575�������ǿ��еģ� 

//���ݸ�����״̬��pattern����n��ȡ����Ӧ��k������� 
int add_by_pattern(int pattern,int n,int k)
{ 
	int sum=0,taken=0;
	for (int i=0;i<n;i++)
	{
		if (pattern&(1<<i))
		{
			sum+=a[i];
			taken++;
		}
	} 
	if (taken!=k) return -1;      //����Ҫ�պ�ȡ��k�����ǿ��н� 
	return sum;
}

int main()
{
	int n,k,pattern;
	scanf("%d%d",&n,&k);
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	//��ȫ0(0)��ȫ1((1<<n)-1)����״̬ 
	for (pattern=0;pattern<(1<<n);pattern++)
	{
		if (is_prime(add_by_pattern(pattern,n,k)))
			ways++;
	}
	printf("%d",ways);
	return 0;
}
