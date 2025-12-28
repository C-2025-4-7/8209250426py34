#include <iostream>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0;i < 26;i++)
	{
		counts[i] = 0;
	}
	for (int i = 0;s[i] != '\0';i++)
	{
		char ch = s[i];
		if (ch >= 'a' && ch <= 'z')
		{
			int index = ch - 'a';
			counts[index]++;
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			int index = ch - 'A';
			counts[index]++;
		}
	}
}
int main()
{
	const int maxlength = 1000;
	char input[maxlength];
	int lettercounts[26];
	cout << "enter a string";
	char ch;
	int i = 0;
	while (cin.get(ch) && ch != '\n' && i < maxlength - 1)
	{
		input[i++] = ch;
	}
	input[i] = '\0';
	count(input, lettercounts);
	cout << "letter counts(nonzero)" << endl;
	bool foundnonzero = false;
	for (int i = 0;i < 26;i++)
	{
		if (lettercounts[i] > 0)
		{
			foundnonzero = true;
			char letter = 'a' + i;
			cout << letter << ":" << lettercounts[i] << endl;
		}
	}
	if (!foundnonzero)
	{
		cout << "no letter found in the string" << endl;
	}
	return 0;
}