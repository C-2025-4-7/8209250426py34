#include <iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	if (s1 == nullptr || *s1=='\0')return 0;
	if (s2 == nullptr || *s2 == '\0')return -1;
	const char* p1, * p2, * p_start;
	for (p_start = s2;*p_start;p_start++)
	{
		p1 = s1;
		p2 = p_start;
		while (*p1 && *p2 && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (*p1 == '\0')
		{
			return(int)(p_start - s2);
		}
	}
	return -1;
}
int main()
{
	char s1[100], s2[100];
	cout << "please enter a string2";
	cin.getline(s2, 100);
	cout << "please enter a string1";
	cin.getline(s1, 100);
	int pos = indexof(s1, s2);
	if (pos >= 0)
	{
		cout << "find substring" << pos << endl;
		cout << "Ö÷×Ö·û´®" << s2 << endl;
		cout << "Æ¥ÅäÎ»ÖÃ";
		for (int i = 0; i < pos; i++) cout << " ";
		cout << "^" << endl;
	}
	else {
		cout << "Î´ÕÒµ½×Ó´®" << endl;
	}

	return 0;
}
	

