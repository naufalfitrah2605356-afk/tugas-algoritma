#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double jarijari, tinggi;
    double volume, luaspermukaan;
    const double phi = 3.14159;

    cout << "jari-jari tabung : ";
    cin >> jarijari;

    cout << "tinggi tabung : ";
    cin >> tinggi;

    volume = phi * jarijari * jarijari * tinggi;

    luaspermukaan = 2 * phi * jarijari * (jarijari + tinggi);

    cout << fixed << setprecision(2);

    cout << "\n===== HASIL PERHITUNGAN TABUNG =====" << endl;
    cout << "jari-jari : " << jarijari << endl;
    cout << "tinggi : " << tinggi << endl;
    cout << "volume tabung : " << volume << endl;
    cout << "luas permukaan : " << luaspermukaan << endl;

    cout << "\n===== PROSESE PERHITUNGAN =====" << endl;

    cout << "volume = " << phi << "x"
         << jarijari << " x " << jarijari << " x "
         << tinggi << endl;
    
    cout << "volume = " << volume << endl;

    cout << "\nluas permukaan = 2 x " << phi << " x "
         << jarijari << " x (" << jarijari << " + " 
         << tinggi <<")" << endl;

    cout << "luas permukaan = " << luaspermukaan << endl;

    return 0;
}