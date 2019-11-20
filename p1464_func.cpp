#include <iostream>
#include <stdio.h>

int f[25][25][25];
bool v[25][25][25];

int w(long long a,long long b,long long c)
{
	if (a<=0 || b<=0 || c<=0) return 1;
	if (a>20 || b>20 || c>20) 
		return w(20,20,20);
	if (v[a][b][c]) return f[a][b][c];
	if (a<b && b<c) 
	{
		v[a][b][c]=1;
		return f[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
	}
	v[a][b][c]=1;
	return f[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
}

int main()
{
	long long xa,xb,xc;
	std::cin >> xa >> xb >> xc;
	while (xa!=-1 || xb!=-1 || xc!=-1)
	{
		std::cout << "w(" << xa << ", " << xb << ", "
				<< xc << ") = " << w(xa,xb,xc) << "\n";
		std::cin >> xa >> xb >> xc; 
	}
	return 0;
	
}
