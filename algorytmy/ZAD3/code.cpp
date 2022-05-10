// ZAD3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.

#include <iostream>
#include <stdio.h>     
#include <stdlib.h>     
#include <time.h>     

using namespace std;
int tab[11];
int n;
int wynik;
int r = 7;
int gene()
{
	srand(time(NULL)); //RESET RANDOM
	tab[1] = rand() % 50 + 1;
	tab[2] = tab[1]+r; // r=7
	for (int i = 3; i <= 10; i++)
	{
		tab[i] = tab[i-1]+r;
		
	}
	return 0;
}
int licz()
{
	for (int x = 1; x <= n; x++)
	{
		wynik += tab[x];
	}
	return wynik;
}
int main()
{
	cout << "Ile n ciagu arytmetycznego policzyc? (r=7)  ";
	cin >> n;
	cout << endl;
	gene();
	cout << "Wygenerowany ciag arytmetyczny: \n";
	for (int i = 1; i <= 10; i++)
	{
		cout << "a" << i << " = " << tab[i] << endl;
	}
	cout << "\nWynik: " << licz() << "\n\n\n";
}
