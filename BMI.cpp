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

//status
string statusbmi(float bmi) {
    if (bmi < 18.5)
        return "Berat Badan Kurang";
    else if (bmi < 25)
        return "Berat Badan Normal";
    else if (bmi < 30)
        return "Berat Badan Kelebihan";
    else
        return "Obesitas";
}