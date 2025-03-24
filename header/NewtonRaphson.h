#ifndef NEWTONRAPHSON_H
#define NEWTONRAPHSON_H

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Definisi fungsi dan turunan
#define f(x) (x * x - 4) // fungsi f(x) = x^2 - 4
#define g(x) (2 * x)     // Turunan dari fungsi g(x) = 2x

void newtonRaphson() {
    float x0, x1, f0, g0, e;
    int iter = 1, N;

    cout << setprecision(6) << fixed;

    // Inputs
    cout << "Masukkan titik awal: ";
    cin >> x0;
    cout << "Masukkan toleransi error: ";
    cin >> e;
    cout << "Masukkan jumlah iterasi maksimum: ";
    cin >> N;

    cout << endl << "---------------------------------------------------------------------------------" << endl;
    cout << "                   Metode Newton Raphson" << endl;
    cout << "---------------------------------------------------------------------------------" << endl;

    do {
        g0 = g(x0);
        f0 = f(x0);
        if (g0 == 0.0) {
            cout << "Kesalahan Matematis.";
            exit(0);
        }

        x1 = x0 - f0 / g0;

        cout << "Iterasi-" << iter << ":\t x1 = " << setw(10) << x1 << " dan f(x1) = " << setw(10) << f(x1) << endl;
        x0 = x1;

        iter = iter + 1;

        if (iter > N) {
            cout << "Tidak Konvergen.";
            exit(0);
        }

    } while (fabs(f(x1)) > e);

    cout << endl << "Akar adalah: " << x1 << endl;
}

#endif // NEWTONRAPHSON_H