#include <iostream>
#include <string>

struct CHaniwa
{
	std::string name;
	int direction;
}haniwa[150000];

void input(int& n,int& m)
{
	using namespace std;
	cin >> n >> m;
	for (int i=0;i<n;i++)
	{
		cin >> haniwa[i].direction >> haniwa[i].name; 
		if (!haniwa[i].direction) haniwa[i].direction=-1;
	}
}

int getid(int x,int n)
{
	return (x+n)%n;
}

void emulate(int m,int n)
{
	int cursor=0;
	for (int i=0;i<m;i++)
	{
		int dir=0,mov=0;
		std::cin >> dir >> mov;
		if (!dir) dir=-1;
		cursor=getid(cursor+dir*mov*haniwa[cursor].direction*(-1),n);
	}
	std::cout << haniwa[cursor].name;
}

int main()
{
	std::ios::sync_with_stdio(false);
	int n,m;
	input(n,m);
	emulate(m,n);
	return 0;
}
