#include <iostream>
using namespace std;

double Pow(double number, int power)
{
	double sum = 1;
	for (size_t i = 0; i < power; i++)
	{
		sum = sum * number;
	}
	return sum;
}

double Min(double a, double b)
{
	if (a < b) return a;
	else return b;
}

double Max(double a, double b)
{
	if (a > b) return a;
	else return b;
}

double minOf3(double a, double b, double c)
{
	if (a < Min(b, c)) return a;
	else return Min(b, c);
}

double maxOf3(double a, double b, double c)
{
	if (a > Max(b, c)) return a;
	else return Max(b, c);
}

bool isAlpha(char charachtrer)
{
	if (charachtrer > 64 && charachtrer < 91 || charachtrer>96 && charachtrer < 123) return true;
	else return false;
}

bool isDigit(char digit)
{
	if (digit > 47 && digit < 58) return true;
	else return false;
}

int main()
{
	cout << Pow(3.25, 100) << endl;
	cout << Min(-1, 1) << endl;
	cout << Max(-1, 18443333333333333333) << endl;
	cout << minOf3(1000.6, 1000.5, 1000.9) << endl;
	cout << maxOf3(1000.6, 1000.5, 1000.9) << endl;
	cout << isAlpha('5') << endl;
	cout << isDigit('a') << endl;
}