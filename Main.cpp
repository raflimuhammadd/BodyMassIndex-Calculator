#include<iostream>
#define min 18.5

using namespace std;
const double maks = 24.9;

int main()
{
    int BB[20];
    string nama;
    int i, status, umur, bmi, bmin, bmaks, t=0;
    float brtrata, tb;


    cout << " PROGRAM MEGHITUNG BODY MASS INDEX " << endl;
    cout << "=======================================" << endl;
    cout << "  21081010262_MUHAMMAD RAFLI PRATAMA " << endl;
    cout << "=======================================" << endl;
    for(i=1; i<=2; i++)
    {
        cout << "Masukkan Berat Badan (Kg) \t:  ";
        cin >> BB [i];
        cout << "Masukkan Tinggi (M) \t\t: ";
        cin >> tb;
        bmi = BB[i] / (tb * tb);
        cout << "Hasil Perhitugan BMI Anda \t:" << bmi <<endl;
        cout << endl ;

        if (bmi<=18.5) {
            cout << "Anda Terlalu Kurus"<<endl;
        } else if (bmi >18.5 && bmi <=25){
            cout << "Berat Badan Anda Sudah Ideal"<<endl;
        } else if (bmi >25 && bmi <=30){
            cout << "Anda Terlalu Gemuk"<<endl;
        } else {
            cout << "Anda Mengalami Obesitas"<<endl;
        }

        cout << endl;
        cout << "=======================================" << endl;
        cout << "     BERAT MAKSIMAL DAN MINIMAL     " << endl;
        cout << "=======================================" << endl;
        cout << "Tinggi Badan (M) : " << tb << endl;
        bmin = min*tb*tb;
        cout << "Berat Badan Ideal Minimal  (Kg) : " << bmin << endl;
        bmaks = maks*tb*tb;
        cout << "Berat Badan Ideal Maksimal (Kg) : " << bmaks << endl;
        cout << "=======================================" << endl;
        cout << endl;
    }
    do {
        cout << "TERIMAKASIH TELAH MENGGUNAKAN PROGRAM INI" << endl;
        t++;
    }while (t<1);
    return 0;
}
