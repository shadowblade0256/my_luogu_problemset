#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

char buf[100000];

void buffer(char* buf)
{
	char tmp='\0';
	int len=0;
	while ((tmp=getchar())!='E')
	{
		if (!isspace(tmp)) buf[len++]=tmp;
	}
}

void calc11()
{
	int lscore=0,rscore=0;
	for (int i=0;i<strlen(buf);i++)
	{
		if (buf[i]=='W') lscore++;
		else if (buf[i]=='L') rscore++;
		if (lscore>=11)
		{
			if (abs(lscore-rscore)>=2)
				printf("%d:%d\n",lscore,rscore),lscore=0,rscore=0;
		}
		else if (rscore>=11)
		{
			if (abs(lscore-rscore)>=2)
				printf("%d:%d\n",lscore,rscore),lscore=0,rscore=0;
		}
	}
	printf("%d:%d\n\n",lscore,rscore);
}

void calc21()
{
	int lscore=0,rscore=0;
	for (int i=0;i<strlen(buf);i++)
	{
		if (lscore>=21)
		{
			if (abs(lscore-rscore)>=2)
				printf("%d:%d\n",lscore,rscore),lscore=0,rscore=0;
		}
		else if (rscore>=21)
		{
			if (abs(lscore-rscore)>=2)
				printf("%d:%d\n",lscore,rscore),lscore=0,rscore=0;
		}
		if (buf[i]=='W') lscore++;
		else if (buf[i]=='L') rscore++;
	}
	printf("%d:%d\n\n",lscore,rscore);
}

int main()
{
	buffer(buf);
	calc11();
	calc21();
	return 0;
} 
