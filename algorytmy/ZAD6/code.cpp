#include<iostream>

using namespace std;

int NWD(int a, int b)
{
	int pom;

	while (b != 0)
	{
		pom = b;
		b = a % b;
		a = pom;
	}
	return a;
}

int main()
{
	unsigned int a, b;

	cout << "Podaj dwie liczby: ";
	cin >> a >> b;

	
	cout << "Najmniejsza wspolna wielokrotnosc: " << a / NWD(a, b) * b << endl;



	return 0;
}
