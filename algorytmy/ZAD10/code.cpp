#include <iostream>
#include <iomanip>      
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int** A, ** B, ** C, n, m, iw, ik;

    srand((unsigned)time(NULL));                
    m = rand() % 5 + 2;
    n = rand() % 5 + 2;              

    A = new int* [m];
    B = new int* [m];
    C = new int* [m];           

    for (iw = 0; iw < m; iw++)         
    {
        A[iw] = new int[n];             
        B[iw] = new int[n];
        C[iw] = new int[n];
    }

    for (iw = 0; iw < m; iw++)
        for (ik = 0; ik < n; ik++)
        {
            A[iw][ik] = rand() % 100;
            B[iw][ik] = rand() % 100;
        }

    cout << "m = " << m << endl << "n = " << n << endl << endl
        << "Matrix 1:" << endl;

    for (iw = 0; iw < m; iw++)
    {
        for (ik = 0; ik < n; ik++)
            cout << setw(5) << A[iw][ik];
        cout << endl;
    }

    cout << endl << "Matrix 2:" << endl;

    for (iw = 0; iw < m; iw++)
    {
        for (ik = 0; ik < n; ik++)
            cout << setw(5) << B[iw][ik];
        cout << endl;
    }

    

    for (iw = 0; iw < m; iw++)
        for (ik = 0; ik < n; ik++)
            C[iw][ik] = A[iw][ik] + B[iw][ik];

    

    cout << endl << "Matrix C = A + B:" << endl;

    for (iw = 0; iw < m; iw++)
    {
        for (ik = 0; ik < n; ik++)
            cout << setw(5) << C[iw][ik];
        cout << endl;
    }

    // koniec

    for (iw = 0; iw < m; iw++)
    {
        delete[] A[iw];
        delete[] B[iw];
        delete[] C[iw];
    }
    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
