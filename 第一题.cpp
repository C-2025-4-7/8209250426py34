#include<iostream>
using namespace std;
int maxyue(int a, int b)
{
	int c;
	while (a % b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return b;
}
int max(int a, int b)
{
	int c = (a > b ? a : b);
	return c;
}
int minbei(int a, int b)
{	
	for (int c = max(a, b);0 == 0;c++)
	{
		if (c % a == 0 && c % b == 0)
		{
			return c;
			break;
		}
	}
}
int main() 
{
	int m, n;
	cin >> m >> n;
	cout <<"最大公约数是" << maxyue(m, n) << endl;
	cout <<"最小公倍数是" << minbei(m, n) << endl;
	return 0;
}