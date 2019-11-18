//Luogu P1002 sub1 网格距离
//by LaevaCoder 
//去除了p1002的限制条件，单纯求网格距离 

#include <stdio.h>
#include <string.h>

int chessboard[22][22];

//初始化
void initialize(int n,int m)
{
	chessboard[1][1]=0;
	for (int i=2;i<=n;i++)
		chessboard[i][1]=1;
	for (int i=2;i<=m;i++)
		chessboard[1][i]=1;
}
//DEBUG: 显示全网格距离 
void print_board(int n,int m)
{
	printf("\n");
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
			printf("%8d ",chessboard[i][j]);
		printf("\n");
	}
	printf("\n");
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	initialize(n,m);
	for (int i=2;i<=n;i++)
	{
		for (int j=2;j<=m;j++)
		{
			chessboard[i][j]=chessboard[i-1][j]+chessboard[i][j-1];
		}
	}
	//print_board(n,m);
	printf("%d",chessboard[n][m]);
	return 0;
} 
