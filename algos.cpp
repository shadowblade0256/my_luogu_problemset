//算法、函数库，参考

#include <cstdio>
#include <cstdlib>
using namespace std;

void make(bool np[],int p[],int &ps,int n) //普通筛法，np记录是否质数，p记录质数表 
{
	int i; 
	np[1]=1;
	for (i=2;i*i<=n;i++)
	{
		if (!np[i])
		{
			p[ps++]=i; //此处记录p，可根据实际情况删去，下同 
			for (int j=i*i;j<=n;j+=i)
				np[j]=1;
		}
	}
	for (;i<=n;i++)
		if (!np[i])
			p[ps++]=i;
} 
  
void separate(int p[],int q[],int k) //完整的质因子分解，j表示k的质因子个数，p[]表示k的质数因子，q[]表示相应质因子重数  
{
	for (j=0, i=2; i*i<=k; i++)
        if (k%i==0){
            p[j]=i; q[j]=0;
            while (k%i==0){
                q[j]++; k/=i;
            }
            j++;
        }
    if (k!=1){
        p[j]=k; q[j]=1; j++;
    } 
}

int fac(int n, int k, int t){ //n!质因数分解后k的指数 
    int ans=0;
    while (n) ans+=n/=k;
    return ans;
}

int dividers(int len) //求约数个数，需要separate()的支持 
{
	int ans=0;
	for (int i=0;i<len;i++)
	{
		ans*=q[i]+1;
	}
	return ans;
}

int quickpow(int a,int b,int c) //快速幂，求a^b%c的值 
{
	int ans=1,t=a;
	while (b>0)
	{
		if (b%2) ans=ans*t%c;
		b/=2;t=t*t%c;
	}
	return ans;
}

void lis(int n,int f[],int a[]) //动态规划，求最长单调上升子序列 
{
	a[0]=-(1<<30);a[n+1]=1<<30;
	for (int i=n;i>=0;i--)
		for (int j=i+1;j<=n+1;j++)
			if (a[j]>a[i] && f[j]>=f[i])
				f[i]=f[j]+1;
	return f[0]-1;
}

//棋盘型DFS样例 
const int d[4][2]={{0,1},{0,-1},{1,0},{-1,0}}; //指示下一步的移动方向，以dfs()中的i控制 
bool map[30][30], c[30]; //map指示某格是否已经过，c指示某字母是否已被碰到 
int r, w, ans, a[30][30];
int dfs(int x, int y, int step){ //标准棋盘DP 
    int i, dx, dy;
    bool ok=true; //ok标志是否可以记录答案 
    for (i=0; i<4; i++){
        dx=x+d[i][0]; //移动 
        dy=y+d[i][1];
        if (dx>=0 && dx<r && dy>=0 && dy<w && !map[dx][dy] && !c[a[dx][dy]]){ //如果当前状态可以进一步拓展到下一个状态 
            ok=false;
            map[dx][dy]=true; c[a[dx][dy]]=true;
            dfs(dx, dy, step+1);
            map[dx][dy]=false; c[a[dx][dy]]=false;
        }
    }    
    if (ok && step>ans) ans=step; //记录最大值 
}
//调用： 
//map[0][0]=true; c[a[0][0]]=true; //第一步需要标记 
//    ans=-1; //最小值 
//    dfs(0, 0, 1); //当前位置算作第一步！ 

void fibonacci(long long f[]) //标准斐波那契数列生成 
{
	f[1]=1;
    f[2]=1;
    for (int i=3;i<=30;i++)
        f[i]=f[i-1]+f[i-2];
}

void elapsed_time() //实用程序，检测程序运行时间，需要ctime库支持 
{
	printf("Elapsed time:%u secs./n",clock()/CLOCKS_PER_SEC); 
}

//高精度算法整理 
void chg(char *s, int a[]){ //字符串转换为高精度数 
    a[0]=strlen(s);
    for (i=1; i<=a[0]; i++)
        a[i]=s[a[0]-i]-’0’;
}
void out(int a[]){//十进制形式的高精度数的输出
    for (i=a[0]; i>0; i--)
        printf(“%d”, a[i]);
}
void out(int a[]){//万进制形式的高精度数的输出
    printf（“%d”, a[a[0]]);
    for (i=a[0]-1; i>0; i--)
        printf(“%04d”, a[i]);
}
//10 0200 0300 0005 0006
//a[0]=5 a[1]=6 a[2]=5 a[3]=300 a[4]=200 a[5]=10
void hadd(int a[], int b[], int c[]){//实现c=a+b
    c[0]=max(a[0], b[0]);
    t=0;//进位
    for (i=1; i<=c[0]; i++){
        t+=a[i]+b[i];
        c[i]=t%10;
        t/=10;
    }
    if (t>0) 
        c[++c[0]]=t;
}
bool hcmp(int a[], int b[]){
//当a>b时，返回1，当a<b时，返回-1，当a==b时，返回0.
    if (a[0] > b[0]) return 1;
    if (a[0] < b[0]) return -1;
    for (i=a[0]; i>0; i--)
        if (a[i]>b[i]) return 1;
        else if (a[i]<b[i]) return -1;
    return 0;
}
void hsub(int a[], int b[], int c[]){//高精度实现c=a-b，保证a>=b，有时a=a-b
    for (i=1; i<=a[0]; i++){//逐位相减
        c[i]=a[i]-b[i];
        if (c[i]<0){
            c[i]+=10; a[i+1]--;
        }
    }    
    for (i=a[0]; i>=0; i--)//求c数组长度
        if (c[i]!=0) {
            c[0]=i; break;
        }
//while (c[c[0]]==0) c[0]--;
}
void hmulti(int a[], int x, int b[]){//实现b=a*x，有时a=a*x
    c=0; b[0]=a[0]; //c表示进位
    for (i=1; i<=a[0]; i++){
        b[i]=a[i]*x+c;
        c=b[i]/10;
        b[i]%=10; 
    }
    while (c>0){
        b[++b[0]]=c%10; c/=10;
    }
}
void hmulti(int a[], int b[], int c[]){//实现c=a*b
    memset(c, 0, sizeof(c));//注意c数组先清零
    for (i=1; i<=a[0]; i++)
        for (j=1; j<=b[0]; j++){
            c[i+j-1]+=a[i]*b[j];
            c[i+j]+= c[i+j-1] /10;
            c[i+j-1]%=10;
        }
    c[0]=a[0]+b[0]-1; d=c[c[0]]/10;
    while (d>0){
        c[++c[0]]=d%10; d/=10;
    }
}
int hdiv(int a[], int b, int c[]){//实现c=a/b，并返回余数
    d=0;
    for (i=a[0]; i>0; i--){
        d=d*10+a[i];
        c[i]=d/b;
        d=d%b;
        //d=(d*10+a[i])%b;
    }
    while (c[c[0]]==0) c[0]--;
    return d;
}

template <typename T>
void qsort(T* a,int l,int r,bool(*cmp)(T,T))
{
    int mid=a[(l+r)/2];
    int i=l,j=r;
    do
    {
        while (cmp(a[i],mid)) i++;
        while (cmp(mid,a[j])) j--;
        if (i<=j)
        {
            T tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
            i++; j--;
        }
    } while (i<=j);
    if (l<j) qsort(a,l,j,cmp);
    if (i<r) qsort(a,i,r,cmp);
}