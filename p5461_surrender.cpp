#include <iostream>

int square[1030][1030];

//初始所有人都处于未被赦免的状态
void init(int size)
{
    for (int i=1;i<=size;i++)
        for (int j=1;j<=size;j++)
            square[i][j]=1;
}

//将指定区块内的人赦免（只有1x1格时实际上不会执行）
void set_0(int sx,int sy,int ex,int ey)
{
    for (int i=sx;i<=ex;i++)
        for (int j=sy;j<=ey;j++)
            square[i][j]=0;
    //std::cout << "set (" << sx << ',' << sy << ')'
    //    << "to (" << ex << ',' << ey << ')' << '\n';
}

//分治核心，参数记录每一步的中心点和方阵规模
void surrender(int center_x,int center_y,int size)
{
    //鉴于size==1时1<<(size-2)会出现不正确结果
    //做特殊处理：1x1时直接赦免此人
    if (size==1)
    {
        square[center_x][center_y]=0;
        return;
    }
    //将该层级上“左上角”清零
    set_0(center_x-(1<<(size-1))+1,center_y-(1<<(size-1))+1,center_x,center_y);
    //递归寻找右上、右下、左下的新中心
    surrender(center_x+(1<<(size-2)),center_y-(1<<(size-2)),size-1);
    surrender(center_x+(1<<(size-2)),center_y+(1<<(size-2)),size-1);
    surrender(center_x-(1<<(size-2)),center_y+(1<<(size-2)),size-1);
}

void show_all(int size)
{
    for (int i=1;i<=size;i++)
    {
        for (int j=1;j<=size;j++)
            std::cout << square[i][j] << ' ';
        std::cout << '\n';
    }
}

int main()
{
    int n;
    std::cin >> n;
    init(1<<n);
    surrender(1<<(n-1),1<<(n-1),n);
    show_all(1<<n);
    return 0;
}