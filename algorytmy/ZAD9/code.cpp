#include <iostream>
#include <iomanip>             
#include <cstdlib>
#include <time.h>

using namespace std;

int main()                    
{
    int** A, c, n, m, iw, ik;             

    srand(time(NULL));

    m = rand() % 8 + 2;
    n = rand() % 8 + 2;      

    A = new int* [m];

    for (iw = 0; iw < m; iw++) A[iw] = new int[n]; 

    for (iw = 0; iw < m; iw++)
        for (ik = 0; ik < n; ik++) A[iw][ik] = rand() % 100; 

    c = rand() % 21 - 10;   

    cout << "m = " << m << endl << "n = " << n << endl << endl;

    for (iw = 0; iw < m; iw++)
    {
        for (ik = 0; ik < n; ik++)
            cout << setw(5) << A[iw][ik];
        cout << endl;
    }

    

    cout << endl << "c = " << c << endl << endl;

   

    for (iw = 0; iw < m; iw++)
        for (ik = 0; ik < n; ik++) A[iw][ik] *= c;

    

    for (iw = 0; iw < m; iw++)
    {
        for (ik = 0; ik < n; ik++)
            cout << setw(5) << A[iw][ik];
        cout << endl;
    }

    

    for (iw = 0; iw < m; iw++) delete[] A[iw];
    delete[] A;

    return 0;
}
