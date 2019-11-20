#include <stdio.h>
#include <string.h>
#include <deque>

std::deque<int> memdict;
int m,n,article[10000];

bool exist(std::deque<int> dq,int val)
{
	std::deque<int>::iterator dqi;
	for (dqi=dq.begin();dqi!=dq.end();dqi++)
	{
		if (*dqi==val) return 1;
	}
	return 0;
} 
void emulate()
{
	int buf=-1,ref=0;
	for (int i=0;i<n;i++)
		scanf("%d",&article[i]);
	for (int i=0;i<n;i++)
	{
		if (!exist(memdict,article[i]))
		{
			ref++;
			if (memdict.size()==m) memdict.pop_front();
			memdict.push_back(article[i]);
		}
	}
	printf("%d",ref);
}

int main()
{
	scanf("%d%d",&m,&n);
	emulate();
	return 0;
}
