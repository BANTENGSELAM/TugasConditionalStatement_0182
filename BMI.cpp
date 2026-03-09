//library
#include <iostream>
using namespace std;

//input
void input(float &berat, float &tinggi) {
    cout << "Masukkan Berat badn (kg): ";
    cin >> berat;

    cout << "Masukkan Tinggi badan (meter): ";
    cin >> tinggi;
}

//bmi
float bmi(float berat, float tinggi){
    return berat / (tinggi * tinggi);
}