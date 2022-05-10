// ZAD1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
// Napisz program wyszukujacy liczby parzyste z danego przedzialu liczb [a,b]. Wyklucz z tego przedzialu liczbe 0

#include <iostream>
#include <math.h>

using namespace std;
int a;
int b;
int szukaj(int a, int b);

int main()
{
    cout << "Wpisz liczbe A: ";
    cin >> a;
    cout << "\nWpisz liczbe B: ";
    cin >> b;
    cout << "Wyszukiwanie parzystych liczb w przedziale [" << a << " - " << b << "]" << endl;
    cout << "\n\nLiczby parzyste ze zbioru: \n";
    szukaj(a, b);
}

int szukaj(int a, int b)
{
    for (int l = a; l <= b; l++)
    {
        if (l % 2 == 0 && l != 0)
        {
            cout << l << endl;
        }
    }
    return 0;
}
