#include <iostream>
using namespace std;
bool isprime(int num)
{	
	if (num == 1) return 0;
	if (num == 2) return 1 ;
	if (num % 2 == 0) return 0;
	else 
	{
		for (int i = 2;i < num;i++)
		{
			if (num % i == 0)
				return 0;
		}

	}
	return 1;
}
int main()
{	
	int x = 2; int prime_count = 0;
	while (prime_count < 200)
	{
		if (isprime(x))
		{
			cout << x << '\t';
			prime_count++;

			if (prime_count % 10 == 0)
				cout << endl;
		}
		x++;
	}
	return 0;
}