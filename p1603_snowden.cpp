#include <stdio.h>
#include <iostream>
#include <string.h>
#include <ctype.h>
#include <string>
#include <map>
#include <algorithm>

std::map<std::string,int> strtonum;

void make_map()
{
    strtonum["one"]=1;
    strtonum["two"]=2;
    strtonum["three"]=3;
    strtonum["four"]=4;
    strtonum["five"]=5;
    strtonum["six"]=6;
    strtonum["seven"]=7;
    strtonum["eight"]=8;
    strtonum["nine"]=9;
    strtonum["ten"]=10;
    strtonum["eleven"]=11;
    strtonum["twelve"]=12;
    strtonum["thirteen"]=13;
    strtonum["fourteen"]=14;
    strtonum["fifteen"]=15;
    strtonum["sixteen"]=16;
    strtonum["seventeen"]=17;
    strtonum["eighteen"]=18;
    strtonum["nineteen"]=19;
    strtonum["twenty"]=20;

    strtonum["a"]=1;
    strtonum["both"]=2;
    strtonum["another"]=1;
    strtonum["first"]=1;
    strtonum["second"]=2;
    strtonum["third"]=3;
}

bool cmp(int a,int b)
{
    return a>b;
}

long long calc(char* src)
{
    char tmp=0;
    std::string buf;
    int numbuf[20]={0};
    long long ans=0;
    int len=0,numlen=0;
    for (int i=0;i<strlen(src);i++)
    {
        tmp=src[i];
        if (!isspace(tmp))
            buf+=tmp;
        else
        {
            //std::cout << buf << std::endl;
            if (strtonum.find(buf)!=strtonum.end())
            {
                numbuf[numlen++]=strtonum[buf]*strtonum[buf]%100;
            }
            buf.clear();
            len=0;
        }
    }
    std::sort(numbuf,numbuf+numlen,cmp);
    long long base=1;
    for (int i=0;i<numlen;i++,base*=100)
    {
        //std::cout << "ans=" << ans << std::endl;
        ans+=numbuf[i]*base;
    }
    return ans;
}

int main()
{
    char str[200];
    std::cin.getline(str,150,'\n');
    make_map();
    std::cout << calc(str);
    return 0;
}
