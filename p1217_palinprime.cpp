#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#define INF 2147483647

int palins[800];

//朴素法判定素数
bool is_prime(int x)
{
	if (x==1) return 0;
	for (int i=2;i*i<=x;i++)
		if (x%i==0) return 0;
	return 1;
}

//求x的位数
int digit(int x)
{
	int tmp=x,d=0;
	while (tmp)
	{
		d++;
		tmp/=10;
	}
	return d;
}

//int to c-string
char* itos(int x)
{
	int d=digit(x);
	char* res;
	res=new char[d+1];
	memset(res,0,sizeof(res));
	for (int i=0;i<d;i++)
	{
		res[d-1-i]=48+x%10;
		x/=10;
	}
	return res;
}

//根据前半段生成回文数（前半段完全镜像）
int palin_gen(int origin)
{
	char s_origin[15]={0};
	int n=digit(origin);
	strncpy(s_origin,itos(origin),n);
	for (int i=0;i<n;i++)
		s_origin[2*n-1-i]=s_origin[i];
	return atoi(s_origin);
}

//根据前半段生成回文数（前半段最后一位取为中心）
int palin_center_gen(int origin)
{
	char s_origin[15]={0};
	int n=digit(origin);
	strncpy(s_origin,itos(origin),n);
	for (int i=0;i<n;i++)
		s_origin[2*n-2-i]=s_origin[i];
	return atoi(s_origin);
}

int main()
{
	int count=0,a,b;
	scanf("%d%d",&a,&b);
	//将10000镜像就可把最大范围扩展到1000000001
	for (int i=1;i<=10000;i++)
	{
		if (is_prime(palin_gen(i)))
		{
			if (palin_gen(i)>=a && palin_gen(i)<=b) palins[count++]=palin_gen(i);
		}
		if (is_prime(palin_center_gen(i)))
		{
			if (palin_center_gen(i)>=a && palin_center_gen(i)<=b)palins[count++]=palin_center_gen(i);
		}
	}
	std::sort(palins,palins+count);
	for (int i=0;i<count;i++)
		printf("%d\n",palins[i]);
	return 0;
}
