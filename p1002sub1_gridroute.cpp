//Luogu P1002 sub1 �������
//by LaevaCoder 
//ȥ����p1002������������������������� 

#include <stdio.h>
#include <string.h>

int chessboard[22][22];

//��ʼ��
void initialize(int n,int m)
{
	chessboard[1][1]=0;
	for (int i=2;i<=n;i++)
		chessboard[i][1]=1;
	for (int i=2;i<=m;i++)
		chessboard[1][i]=1;
}
//DEBUG: ��ʾȫ������� 
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
