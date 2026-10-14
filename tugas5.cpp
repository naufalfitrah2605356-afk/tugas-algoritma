#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    string namabarang;
    double harga, diskon, hargadiskon, hargasetelahdiskon;

    cout << "nama barang (kursi/sofa/laptop/hp) : ";
    cin >> namabarang;

    if (namabarang == "kursi") {
        harga = 5000000;
        diskon = 25;

    }
    else if (namabarang == "sofa") {
        harga = 30000000;
        diskon = 30;

    }
    else if (namabarang == "laptop") {
        harga = 25000000;
        diskon = 20;

    }
    else if (namabarang == "hp") {
        harga = 3700000;
        diskon = 15;

    }   
    else {
        cout << "barang tidak tersedia" << endl;
        return 0;
    } 

    hargadiskon = harga * diskon / 100;

    hargasetelahdiskon = harga - hargadiskon;

    cout << fixed << setprecision(2);

    cout << "\n====== HASIL PERHITUNGAN =====" << endl;

    cout << "nama barang : " << namabarang << endl;
    cout << "harga barang : Rp" << harga << endl;
    cout << "presentase diskon : " << diskon << "%" << endl;
    cout << "jumlah diskon : Rp" << hargadiskon << endl;
    cout << "harga setelah diskon : Rp" << hargasetelahdiskon << endl;

    cout << "\nperhitungan:" << endl;
    cout << "Rp" << harga << "- Rp" << hargadiskon
         << " = Rp" << hargasetelahdiskon << endl;
    
    return 0;
    
}