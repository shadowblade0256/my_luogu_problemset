#include <stdio.h>
#include <math.h>

double f_log(double base,double num)
{
	return log10(num)/log10(base);
}

int main()
{
	int s,x; 
	double t1,t2; 
	scanf("%d%d",&s,&x);
	t1=f_log(0.98,1-(s-x)/343.0);
	t2=f_log(0.98,1-(s+x)/343.0);
	if (t2-t1<=1.00)
		printf("n");
	else
		printf("y");
	return 0;
}
