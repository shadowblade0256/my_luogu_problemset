#include <stdio.h>
#include <string.h>
#include <ctype.h>

char str[200];

void expand(int p1,int p2,int p3)
{
	for (int i=0;i<strlen(str);i++)
	{
		if (str[i]=='-' && ((isalpha(str[i-1])&&isalpha(str[i+1]))||
						(isdigit(str[i-1])&&isdigit(str[i+1]))))
		{
			if (i==0 || i==strlen(str)-1) putchar(str[i]);
			else
			{
				char tmp1=str[i-1],tmp2=str[i+1];
				if (tmp1>=tmp2) putchar(str[i]);
				else if (p3==1)
				{
					//putchar(str[i-1]);
					for (char c=tmp1+1;c<tmp2;c++)
					{
						for (int j=1;j<=p2;j++)
						{
							if (p1==1) putchar(c);
							else if (p1==2) putchar(isalpha(c)?toupper(c):c);
							else if (p1==3) putchar('*');
						}
					}
					//putchar(str[i+1]);
				}
				else if (p3==2)
				{
					//putchar(str[i+1]);
					for (char c=tmp2-1;c>tmp1;c--)
					{
						for (int j=1;j<=p2;j++)
						{
							if (p1==1) putchar(c);
							else if (p1==2) putchar(isalpha(c)?toupper(c):c);
							else if (p1==3) putchar('*');
						}
					}
					//putchar(str[i-1]);
				}
			}
		} 
		else
			putchar(str[i]);
	} 
}

int main()
{
	int p1,p2,p3;
	scanf("%d%d%d",&p1,&p2,&p3);
	scanf("%s",str);
	expand(p1,p2,p3);
	return 0;
} 

