#include <iostream>
using namespace std;
bool box[100];
int main()
{
	int i = 1;
	for(i;i<50;i++)
		for (int j =1 ;j * i <= 100;j++)
		{
			box[i * j-1] = !box[i * j-1];
		}
	for (int m = 49;m < 99;m++)
		box[m] = !box[m];
	for (int n = 0;n <= 99;n++)
	{
		if (box[n] == 1)
			cout << n+1 <<" ";
	}
}