#include <iostream>
using namespace std;

int main(){
    // Deklarasi
    int detikawal, jam, menit, detik;
    // Input nilai detikawal
    cout << "Masukkan bilangan > 1 (satuan detik)    : "; cin >> detikawal;
        if(detikawal>1){
            detik = detikawal;
            // Inisialisasi var.jam
            jam = detik/3600; 
            detik %= 3600;
            // Inisialisasi var.menit
            menit = detik/60;
            detik %= 60; // sisa detik
            // Print output
            cout << "Hasil Konversi : " << endl;
            cout << detikawal << " detik    = " << jam << " Jam, " << menit << " Menit, " << detik << " Detik.";
        } else {
            cout << "Bilangan harus > 1 !" << endl;
        }
    return 0;
}
