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
bool check(int a, int b) {
	return (NWD(a, b) == 1);
}
int main()
{
	unsigned int a, b;

	cout << "Podaj dwie liczby: ";
	cin >> a >> b;


	cout << (check(a, b) ? "TAK" : "NIE") << endl;



	return 0;
}
