#include <iostream>
#include "header/NewtonRaphson.h"
#include "header/SecantMethod.h"

using namespace std;

int main() {
    int menu;

    do {
        cout << endl << "---------------------------------------------------------------------------------" << endl;
        cout << "                       Tugas Akhir Semester Pemrograman Lanjut" << endl;
        cout << "Mencari Akar Persamaan Polinomial dengan Metode Newton Raphson dan Metode Secant" << endl;
        cout << "---------------------------------------------------------------------------------" << endl;
        cout << "Nama   : Jerico " << endl;
        cout << "NPM    : ----------" << endl;
        cout << "---------------------------------------------------------------------------------" << endl;
        cout << "Pilih metode untuk mencari akar dari persamaan polinomial:" << endl;
        cout << "1. Metode Newton Raphson" << endl;
        cout << "2. Metode Secant" << endl;
        cout << "3. Keluar" << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> menu;

        switch (menu) {
            case 1:
                newtonRaphson();
                break;
            case 2:
                secantMethod();
                break;
            case 3:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }
    } while (menu != 3);

    return 0;
}
