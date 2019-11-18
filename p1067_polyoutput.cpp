#include <stdio.h>
#include <string.h>

struct term
{
	int coef;
	int expo;
}poly[200];

void poly_out(int n)
{
	for (int i=n;i>=0;i--)
	{
		if (poly[i].expo>1)
		{
			if (poly[i].coef>0)
			{
				if (i!=n) printf("+");
				if (poly[i].coef!=1) printf("%dx^%d",poly[i].coef,poly[i].expo);
				else printf("x^%d",poly[i].expo);
			}
			else if (poly[i].coef<0)
			{
				if (poly[i].coef!=-1) printf("%dx^%d",poly[i].coef,poly[i].expo);
				else printf("-x^%d",poly[i].expo);
			}
		}
		else if (poly[i].expo==1)
		{
			if (poly[i].coef>0)
			{
				if (i!=n) printf("+");
				if (poly[i].coef!=1) printf("%dx",poly[i].coef,poly[i].expo);
				else printf("x",poly[i].expo);
			}
			else if (poly[i].coef<0)
			{
				if (poly[i].coef!=-1) printf("%dx",poly[i].coef,poly[i].expo);
				else printf("-x",poly[i].expo);
			}
		}
		else
		{
			if (poly[i].coef>0) printf("+%d",poly[i].coef);
			else if (poly[i].coef<0) printf("%d",poly[i].coef);
		}
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	for (int i=n;i>=0;i--)
	{
		scanf("%d",&poly[i].coef);
		poly[i].expo=i;
	}
	poly_out(n);
	return 0;
}
