#include <iostream>
using namespace std;
int listSize = 10;
double swap(double a[])
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize-1; j++)
			if (a[j] > a[j + 1])
			{
				double b;b = a[j];a[j] = a[j + 1];a[j + 1] = b;
				changed = true;
			}
	} while (changed);

	return 0;
}
int main()
{
	double b[10];
	for (int i = 0;i < listSize;i++)
	{
		cin >> b[i];
	}
	swap(b);
	for (int i = 0;i < listSize;i++)
	{
		cout << b[i] << endl;
	}
}