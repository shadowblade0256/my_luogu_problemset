#include <stdio.h>
#include <math.h>

int a[30]={1,1,1,0,1,1,1},ways;

//朴素筛，本题可行 
bool is_prime(int x)
{ 
	if (x<=1) return 0;  //处理0和add_by_pattern里的无效值-1 
	for (int i=2;i<=(int)sqrt(x);i++)
	{
		if (x%i==0) return 0;
	}
	return 1;
}

//本题的核心：二进制模拟状态
//1~n个数中每个数有取或不取两种状态，故可用一个二进制数表示
//其中每一位0表示不取，1表示取
//（n<=20,故总状态数不超过(2^20)-1=1048575，遍历是可行的） 

//依据给出的状态码pattern，从n中取出对应的k个数相加 
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
	if (taken!=k) return -1;      //必须要刚好取出k个才是可行解 
	return sum;
}

int main()
{
	int n,k,pattern;
	scanf("%d%d",&n,&k);
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	//从全0(0)到全1((1<<n)-1)遍历状态 
	for (pattern=0;pattern<(1<<n);pattern++)
	{
		if (is_prime(add_by_pattern(pattern,n,k)))
			ways++;
	}
	printf("%d",ways);
	return 0;
}
