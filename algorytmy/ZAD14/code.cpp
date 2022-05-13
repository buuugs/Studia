#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int** A, ** B, ** C, m, n, p, i, j, k, s;

    cin >> m >> n >> p;

    A = new int* [m];
    B = new int* [n];
    C = new int* [m];
    for (i = 0; i < m; i++)
    {
        A[i] = new int[n];
        C[i] = new int[p];
    }

    for (i = 0; i < n; i++) B[i] = new int[p];

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) cin >> A[i][j];

    for (i = 0; i < n; i++)
        for (j = 0; j < p; j++) cin >> B[i][j];

    cout << endl;

    for (i = 0; i < m; i++)
        for (j = 0; j < p; j++)
        {
            s = 0;
            for (k = 0; k < n; k++) s += A[i][k] * B[k][j];
            C[i][j] = s;
        }

   

    cout << "C = A x B:\n";

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++) cout << setw(6) << C[i][j];
        cout << endl;
    }

    

    for (i = 0; i < m; i++)
    {
        delete[] A[i];
        delete[] C[i];
    }

    for (i = 0; i < n; i++) delete[] B[i];
    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
