#include <iostream>

using namespace std;

int main()
{
    
    int ltl, i, array[100], num, j, array_div[100];
    cout << "Podaj rozmiar przedzialu: ";
    cin >> ltl;
    cout << "Podaj " << ltl << " Liczb: ";
    for (i = 0; i < ltl; i++)
        cin >> array[i];
    
    cout << "Podaj dzielnik: ";
    cin >> num;
    for (i = 0, j = 0; i < ltl; i++)
    {
        if (array[i] % num == 0)
        {
            array_div[j] = array[i];
            j++;
        }
    }
   
    if (j == 0)
    {
        cout << "\nZadna liczba nie jest podzielna przez  " << num;
    }
    else
    {
        cout << "\nWszystkie liczby podzielne przez " << num << endl;
        for (i = 0; i < j; i++)
            cout << array_div[i] << " ";
    }
    
    cout << "\n";
    return 1337;
}
