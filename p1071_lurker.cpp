#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char origin[200],crypt[200],crypt2[200],rev[200],text[200];

bool check_crypt();
void input();
void decrypt();

int main()
{
    input();
    decrypt();
    return 0;
}

bool check_crypt()
{
    for (char i='A';i<='Z';i++)
        if (!crypt[i]) return 0;
    return 1;
}

void input()
{
    gets(crypt2);
    gets(origin);
    if (strlen(origin)<26)
    {
        printf("Failed");
        exit(0);
    }
    for (int i=0;i<strlen(origin);i++)
    {
        if (crypt[origin[i]] && crypt[origin[i]]!=crypt2[i])
        {
            printf("Failed");
            exit(0);
        }
        crypt[origin[i]]=crypt2[i];
        rev[crypt2[i]]=origin[i];
    }
    if (!check_crypt())
    {
        printf("Failed");
        exit(0);
    }
    gets(text);
}

void decrypt()
{
    for (int i=0;i<strlen(text);i++)
        putchar(rev[text[i]]);
}
