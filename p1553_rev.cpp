#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cctype>

char num[1000];

int input();
long long numrev(long long x);
long long atoll_m(char* x);
void integer(char* x);
void decimal(char* x);
void fraction(char* x);
void percentage(char* x);

int main()
{
    using namespace std;
    int type=input();
    switch (type)
    {
        case 1:
            integer(num);
            break;
        case 2:
            decimal(num);
            break;
        case 3:
            fraction(num);
            break;
        case 4:
            percentage(num);
            break;
        default:
            cout << "ERROR!!!\n";
    }
    return 0;
}

int input()
{
    using namespace std;
    char buf=0;
    int flag=1,len=0;
    cin.get(buf);
    while (!isspace(buf))
    {
        num[len++]=buf;
        if (buf=='.') flag=2;
        if (buf=='/') flag=3;
        if (buf=='%') flag=4;
        cin.get(buf);
    }
    return flag;
}

long long numrev(long long x)
{
    long long res=0;
    while (x)
    {
        res=res*10+x%10;
        x/=10;
    }
    return res;
}

long long atoll_m(char* x)
{
    long long res=0;
    int sign=1;
    if (x[0]=='-') sign=-1;
    for (int i=0;i<strlen(x);i++)
    {
        if (x[i]=='-') continue;
        else if (isdigit(x[i]))
            res=res*10+x[i]-'0';
    }
    return res*sign;
}

void integer(char* x)
{
    long long num=atoll_m(x);
    std::cout << numrev(num);
}

void decimal(char* x)
{
    long long itg=0,dec=0;
    int sign=1;
    bool flag=0;
    if (x[0]=='-') sign=-1;
    for (int i=0;i<strlen(x);i++)
    {
        if (x[i]=='.')
        {
            flag=1;
            continue;
        }
        if (x[i]=='-') continue;
        if (flag) dec=dec*10+(x[i]-'0');
        else itg=itg*10+(x[i]-'0');
    }
    std::cout << sign*numrev(itg) << '.' << numrev(dec) << '\n';
}

void fraction(char* x)
{
    long long itg=0,dec=0;
    int sign=1;
    bool flag=0;
    if (x[0]=='-') sign=-1;
    for (int i=0;i<strlen(x);i++)
    {
        if (x[i]=='/')
        {
            flag=1;
            continue;
        }
        if (x[i]=='-') continue;
        if (flag) dec=dec*10+(x[i]-'0');
        else itg=itg*10+(x[i]-'0');
    }
    std::cout << sign*numrev(itg) << '/' << numrev(dec) << '\n';
}

void percentage(char* x)
{
    x[strlen(x)-1]=0;
    long long num=atoll_m(x);
    std::cout << numrev(num) << '%';
}