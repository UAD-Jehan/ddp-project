#include <iostream>
using namespace std;

int main(){
    // Deklarasi
    long long int detikawal, hari, jam, menit, detik;
    // Input nilai detikawal
    cout << "Masukkan bilangan > 1 (satuan detik)    : "; cin >> detikawal;
        if(detikawal>1){
            detik = detikawal;
            // Inisialisasi var.hari
            hari = detik/86400;
            detik %= 86400;
            // Inisialisasi var.jam
            jam = detik/3600; 
            detik %= 3600;
            // Inisialisasi var.menit
            menit = detik/60;
            detik %= 60; // sisa detik
            // Print output
            cout << "Hasil Konversi : " << endl;
            cout << detikawal << " detik    = " << hari << " Hari, " << jam << " Jam, " << menit << " Menit, " << detik << " Detik.";
        } else {
            cout << "Bilangan harus > 1 !" << endl;
        }
    return 0;
}
