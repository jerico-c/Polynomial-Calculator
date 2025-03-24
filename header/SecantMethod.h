#ifndef SECANTMETHOD_H
#define SECANTMETHOD_H

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Definisi fungsi
#define f(x) (x * x - 4) // fungsi f(x) = x^2 - 4

void secantMethod() {
    float x0, x1, x2, f0, f1, f2, e;
    int iter = 1, N;

    cout << setprecision(6) << fixed;

    // Inputs
    cout << "Masukkan tebakan pertama: ";
    cin >> x0;
    cout << "Masukkan tebakan kedua: ";
    cin >> x1;
    cout << "Masukkan toleransi error: ";
    cin >> e;
    cout << "Masukkan jumlah iterasi maksimum: ";
    cin >> N;

    cout << endl << "---------------------------------------------------------------------------------" << endl;
    cout << "                       Metode Secant" << endl;
    cout << "---------------------------------------------------------------------------------" << endl;

    do {
        f0 = f(x0);
        f1 = f(x1);
        if (f0 == f1) {
            cout << "Kesalahan Matematis.";
            exit(0);
        }

        x2 = x1 - (x1 - x0) * f1 / (f1 - f0);
        f2 = f(x2);

        cout << "Iterasi-" << iter << ":\t x2 = " << setw(10) << x2 << " dan f(x2) = " << setw(10) << f(x2) << endl;

        x0 = x1;
        f0 = f1;
        x1 = x2;
        f1 = f2;

        iter = iter + 1;

        if (iter > N) {
            cout << "Tidak Konvergen.";
            exit(0);
        }
    } while (fabs(f2) > e);

    cout << endl << "Akar adalah: " << x2 << endl;
}

#endif // SECANTMETHOD_H