#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //Tugas 4 nomor 1
    //Menghitung sisi miring segitiga dengan rumus phytagoras
    float alas = 7, tinggi = 11, sisi_miring;
    sisi_miring = sqrt (pow(alas, 2)+ pow(tinggi, 2));

    cout << "Diketahui sebuah segitiga siku-siku yang memiliki panjang alas "<< alas
    << " cm, tinggi " << tinggi << " cm, \ndan memiliki sisi miring sebesar " << sisi_miring <<" cm." << endl;

    return 0;
}
