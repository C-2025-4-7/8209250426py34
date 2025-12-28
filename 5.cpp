#include <iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int len1 = 0;int len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (len1 > len2) {
		return -1;
	}
	if (len1 == 0) {
		return 0;
	}
	for (int i = 0;i < len2 - len1;i++)
	{
		bool found = true;
		for (int j = 0;j < len1;j++)
		{
			if (s2[i + j] != s1[j])
			{
				found = false;
				break;
			}
		}
		if (found) {
			return i;
		}
	}
	return -1;
}
int main()
{
	const int Max_length = 1000;
	char s1[Max_length], s2[Max_length];
	cout << "enter the first string";
	int i = 0;
	char ch;
	while (cin.get(ch) && ch != '\n' && i < Max_length - 1) {
		s1[i++] = ch;
	}
	s1[i] = '\0';
	cout << "enter the second string";
	i = 0;
	while (cin.get(ch) && ch != '\n' && i < Max_length - 1) {
		s2[i++] = ch;
	}
	s2[i] = '\0';
	int index = indexOf(s1, s2);
	if (index != -1) {
		cout << s1 << "is a substring of" << s2 << "at index" << index << endl;
	}
	else { cout << s1 << "is not a substring of" << s2 << endl; }

	return 0;
}