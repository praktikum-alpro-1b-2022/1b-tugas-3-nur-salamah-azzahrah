#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Tugas 4 nomor 3
    //Menghitung Arus (I), Tegangan (V), dan Hambatan (R)
    int nomor;
    char no;

    do {
    string desk = "Mencari besar rangkaian listrik yang dimasukkan oleh pengguna\n"
    "\n"
    "1. I: Arus\n"
    "2. V: Tegangan\n"
    "3. R: Hambatan\n"
    "\n";

    cout << desk;
    cout << "Masukkan pilihan Anda: ";
    cin >> nomor;

    switch (nomor){
    case 1:
        float V, R, I;
        cout << "Input V: ";
        cin >> V;
        cout << "Input R: ";
        cin >> R;
        I = V/R;
        cout << "Besar arus listrik I = " << I << " ampere." << endl;
    break;
    case 2:
        cout << "Input I: ";
        cin >> I;
        cout << "Input R: ";
        cin >> R;
        V = I*R;
        cout << "Besar tegangan listrik V = " << V << " volt." << endl;
        break;
    case 3:

        cout << "Input V: ";
        cin >> V;
        cout << "Input I: ";
        cin >> I;
        R = V/I;
        cout << "Besar hambatan listrik = " << R << " ohm." << endl;
    break;
    default:
        cout << "Pilih angka" << endl;
    break;
    }
    cout << endl;
    cout << "Ingin memilih rumus lain (y/t)? ";
    cin  >> no;
    cout << endl;
    }
    while (no !='t');

    return 0;
}
