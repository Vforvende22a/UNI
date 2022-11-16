#include <iostream>
using namespace std;

void printMatrica(int reda, int koloni)
{
	for (size_t i = 1; i <= reda; i++)
	{
		for (size_t j = 1; j <= koloni; j++)
		{
			if (i == j) cout << i << " ";
			else if (i < j) cout << j - i << " ";
			else cout << i * j << " ";
		}
		cout << endl;
	}
}

int main()
{
	printMatrica(5, 5);
}