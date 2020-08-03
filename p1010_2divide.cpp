#include <iostream>
#include <string>
using namespace std;

int bicheck(int num)
{
    int max=-1;
    for (int i=0;i<=30;i++)
    {
        if ((1<<i)&num)
        {
            if (i>max) max=i;
        }
    }
    return max;
}

//TIPS: 最大可到2^31-1==2147483647
void divide(int num)
{
    if (num<=0) return;
    if (num==1)
    {
        cout << "2(0)";
        return;
    }
    else if (num==2)
    {
        cout << "2";
        return;
    }
    else
    {
        while (num>2)
        {
            //3时若不加此判断会分解成2(2(0))+2(0)而不是2+2(0)
            if (num>3)
            {
                cout << "2(";
                divide(bicheck(num));
                cout << ")";
            }
            else if (num==3)
            {
                cout << "2";
            }
            
            if (num-(1<<(bicheck(num)))) cout << "+";
            num-=(1<<(bicheck(num)));
        }
        if (num==2) cout << "2";
        if (num==1) cout << "2(0)";
    }
}

//测试用，只处理一级分解
void divide_flat(int num)
{

    if (num<=0) return;
    if (num==1)
    {
        cout << "2(0)";
        return;
    }
    else if (num==2)
    {
        cout << "2";
        return;
    }
    else
    {
        while (num>2)
        {
            //3时若不加此判断会分解成2(2(0))+2(0)而不是2+2(0)
            if (num>3)
            {
                cout << "2(";
                cout << bicheck(num);
                cout << ")";
            }
            else if (num==3)
            {
                cout << "2";
            }
            
            if (num-(1<<(bicheck(num)))) cout << "+";
            num-=(1<<(bicheck(num)));
        }
        if (num==2) cout << "2";
        if (num==1) cout << "2(0)";
    }
}

int main()
{
    int x;
    cin >> x;
    divide(x);
    cout << '\n';
    divide_flat(x);
    return 0;
}