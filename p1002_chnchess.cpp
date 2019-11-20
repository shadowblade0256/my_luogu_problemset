//Luogu P1002 ������ 
//AC by LaevaCoder
//����DP��ϸ�ڼ��� 
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string.h>

long long chessboard[22][22];
int hx,hy;

bool check_horse(int x,int y,int hx,int hy)
{
	if ((x==hx && y==hy)
		|| (x==hx-1 && y==hy-2)
		|| (x==hx-1 && y==hy+2)
		|| (x==hx+1 && y==hy-2)
		|| (x==hx+1 && y==hy+2)
		|| (x==hx-2 && y==hy-1)
		|| (x==hx-2 && y==hy+1)
		|| (x==hx+2 && y==hy-1)
		|| (x==hx+2 && y==hy+1))
		return 1;
	return 0; 
}
//�������Ʊ߽�λ�ã�����߽�λ�õĳ�ʼ����
//ע�⣺����Ƶĵ��ڱ߽�ʱ�������ң��£���Ҳ�߲�ͨ
//�����Ƶ�������ʱ���ǿ����Ƶ��� 
bool clear(int n,int m,int hx,int hy) 
{
	for (int i=hx;i<=n;i++)
		chessboard[i][hy]=0;
	for (int i=hy;i<=m;i++)
		chessboard[hx][i]=0; 
} 
//��ʼ������ 
void initialize(int n,int m)
{
	chessboard[1][1]=1;
	//chessboard[2][1]=1;
	for (int i=1;i<=n;i++)
		chessboard[i][1]=1;
	for (int i=1;i<=m;i++)
		chessboard[1][i]=1;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=m;j++)
			if (check_horse(i,j,hx+1,hy+1))
				clear(n,m,i,j); 
}
//DEBUG: ��ʾ�������̵Ĳ��� 
void print_board(int n,int m)
{
	printf("\n");
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			std::cout << std::setw(12) << chessboard[i][j] << ' ';
			if (check_horse(i,j,hx+1,hy+1))
				printf("*");
		}
		printf("\n");
	}
	printf("\n");
}

int main()
{
	int n,m;
	scanf("%d%d%d%d",&n,&m,&hx,&hy);
	initialize(n+1,m+1);
	for (int i=2;i<=n+1;i++)
	{
		for (int j=2;j<=m+1;j++)
		{
			//״̬ת�Ʒ��� 
			chessboard[i][j]=chessboard[i-1][j]+chessboard[i][j-1];
			//�м���������Ƶ�������ֻ�����㼴�� 
			if (check_horse(i-1,j-1,hx,hy))
				chessboard[i][j]=0;	
		}
	}
	
	print_board(n+1,m+1);
	std::cout << chessboard[n+1][m+1];
	return 0;
} 
