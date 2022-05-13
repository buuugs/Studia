#include <iostream>
#include <iomanip>
#include <cstdlib>               
#include <time.h>

using namespace std;

int main()
{
    int** A, ** B, n, m, iw, ik;

    srand(time(NULL));  

    m = rand() % 7 + 2;      
    n = rand() % 7 + 2;

    A = new int* [m];
    B = new int* [n];

    for (iw = 0; iw < m; iw++) A[iw] = new int[n];    
    for (iw = 0; iw < n; iw++) B[iw] = new int[m];

    for (iw = 0; iw < m; iw++)
        for (ik = 0; ik < n; ik++) A[iw][ik] = rand() % 199 - 99;




    cout << "m = " << m << endl  << "n = " << n << endl << endl
        << "Matrix 1:" << endl;

    for (iw = 0; iw < m; iw++)
    {
        for (ik = 0; ik < n; ik++) cout << setw(5) << A[iw][ik];
        cout << endl;
    }

   

    for (iw = 0; iw < m; iw++)
        for (ik = 0; ik < n; ik++) B[ik][iw] = A[iw][ik];

   

    cout << endl << "Matrix 2 = AT:" << endl;

    for (iw = 0; iw < n; iw++)
    {
        for (ik = 0; ik < m; ik++) cout << setw(5) << B[iw][ik];
        cout << endl;
    }

  

    for (iw = 0; iw < m; iw++) delete[] A[iw];
    for (iw = 0; iw < n; iw++) delete[] B[iw];
    delete[] A;
    delete[] B;

    return 0;
}
