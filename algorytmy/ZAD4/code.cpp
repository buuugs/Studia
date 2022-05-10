// ZAD3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.

#include <iostream>
#include <stdio.h>     
#include <stdlib.h>     
#include <time.h>     

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
    int a, b;

    cout << "Podaj dwie liczby: ";
    cin >> a >> b;

    cout << "Najwieksze wspolny dzielnik: " << NWD(a, b) << endl;

    return 0;
}
