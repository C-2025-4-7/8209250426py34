#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int numbers[size];
	int uniqueNumber[size];
	int uniCount = 0;
	cout << "请输入十个数" << endl;
	for (int i = 0;i < size;i++)
	{
		cin >> numbers[i];
	}
	for (int i = 0;i < size;i++)
	{
		bool isunique = 1;
		for (int j = 0;j < uniCount;j++)
		{
			if (numbers[i] == uniqueNumber[j])
			{
				isunique = 0;
				break;
			}
		}
		if (isunique)
		{
			uniqueNumber[uniCount] = numbers[i];
			uniCount++;
		}
	}
	cout << "不同的数字有" << endl;
	for (int i = 0;i < uniCount;i++)
		cout << uniqueNumber[i];
}