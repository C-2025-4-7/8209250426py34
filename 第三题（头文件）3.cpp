#include<iostream>
using namespace std;
double celsius_to_fah(double cel)
{	
		double fah=(cel * 9 / 5 + 32);
		return fah;
		
}
double fah_to_celsius(double fah)
{
	double cel=(fah - 32) * 5 / 9;
	return cel;
}
int main()
{
	cout << "Celsius" << '\t' << "Fahrenheit  " << '|' << "  Fahrenheit" << '\t' << "Celsius" << endl;
	double a = 40.0; double b = 120.0;
	for (int num = 0;num < 10;num++)
	{
		cout <<a<<'\t'<< celsius_to_fah(a) <<"        " << "|" <<"  " << b << '\t' <<"        " << fah_to_celsius(b) << endl;
		a = a - 1;b = b - 10;
	}
	

}