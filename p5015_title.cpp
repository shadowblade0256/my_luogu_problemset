#include <stdio.h>
#include <ctype.h>

int main()
{
    int counter=0;
    char buf=0;
    while ((buf=getchar())!=EOF)
    {
        if (!isspace(buf)) counter++;
    }
    printf("%d",counter);
    return 0;
}
