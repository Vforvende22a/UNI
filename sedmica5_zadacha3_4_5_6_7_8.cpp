#include <iostream>
using namespace std;

const int ARRAY_SIZE = 10;

void printNumberToThePowerOfTwo(double x)
{
	cout << x * x << endl;
}

void umnojenieNaMasivSCqloChislo(double array[], int length, int number)
{
	for (size_t i = 0; i < length; i++)
	{
		array[i] = array[i] * number;
	}
}

void umnojenieNaMasivSRealnoChislo(double array[], int length, double number)
{
	for (size_t i = 0; i < length; i++)
	{
		array[i] = array[i] * number;
	}
}

void Print(double array[], double length)
{
	for (size_t i = 0; i < length; i++)
	{
		cout << array[i]<<" ";
	}
	cout << endl;
}

bool isArrayDesendeing(int masiv[], int length)
{
	for (size_t i = 1; i < length; i++)
	{
		if (masiv[i] > masiv[i - 1]) return false;
	}
	return true;
}

int howManyWordsAreThere(char masiv[], int length)
{
	int count = 1;
	for (size_t i = 0; i < length; i++)
	{
		if (masiv[i] == ' ') count++;
	}
	return count;
}

bool isDigit(char digit)
{
	if (digit > 47 && digit < 58) return true;
	else return false;
}

int howManyDigits(char masiv[], int length)
{
	int count = 0;
	for (size_t i = 0; i < length; i++)
	{
		if(isDigit(masiv[i])) count++;
	}
	return count;
}

int main()
{
	printNumberToThePowerOfTwo(3.14);

	double masiv[ARRAY_SIZE] = { 10,20,2,50,100,4,0,1 };
	double masiv1[ARRAY_SIZE] = { 10,20,2,50,100,4,0,1 };

	int descendingMasiv[ARRAY_SIZE] = { 10,10,8,7,6,5,4,3,2,1 };

	char vhodenMasiv[200] = {"asd asd dddd sdds asd"};

	char array[200] = { "qwe2xqd 2edsd3f45    4" };

	umnojenieNaMasivSCqloChislo(masiv, ARRAY_SIZE, 5);
	Print(masiv, ARRAY_SIZE);
	umnojenieNaMasivSRealnoChislo(masiv1, ARRAY_SIZE, 5.1);
	Print(masiv1, ARRAY_SIZE);

	cout << isArrayDesendeing(descendingMasiv, ARRAY_SIZE) << endl;

	cout << howManyWordsAreThere(vhodenMasiv, 200) << endl;

	cout << howManyDigits(array, 22);

	//osma ne q razbrah
}