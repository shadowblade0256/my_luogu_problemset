#include <iostream>

int x0,y0;

int gcd(int x,int y)
{
    if (!y) return x;
    return gcd(y,x%y);
}

int lcm(int x,int y)
{
    return x/gcd(x,y)*y;
}

int main()
{
    using namespace std;
    cin >> x0 >> y0;
    int ans=0;
    for (int p=x0;p<=y0;p+=x0)
    {
        if (lcm(p,x0)==y0)
        {
            cout << p << ' ' << y0/p << '\n';
            ans++;
        }
    }
    cout << ans;
    return 0;
}