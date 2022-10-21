#include <iostream>
using namespace std;

int main ()
{
    //Tugas 4 nomor 2
    //Menghitung nilai akhir mahasiswa
    int praktikum = 75, UTS = 70, UAS = 88, nilai_akhir;
    nilai_akhir = praktikum*0.2 + UTS*0.3 + UAS*0.5; //20%, 30%, 50%

    cout << "Jika nilai praktikum, UTS, dan UAS Anda adalah: " << praktikum << ", " << UTS << ", "<< UAS << endl;
    cout << "Maka nilai akhir Anda adalah: " << nilai_akhir << endl;

    return 0;
}
