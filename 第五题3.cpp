#include <iostream>
using namespace std;
int sheng(int d)
{
	int left;
	if (d == 8)
		left = 10;
	else left = (sheng(d + 1) + 1) * 2;
	return(left);
}
int main()
{
	int d = 1;
	cout << "第一天有" << sheng(d) << "个桃子" << endl;
}
