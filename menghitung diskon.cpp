#include <iostream>
using namespace std;

int main() {
    int kelas, jumlahTiket;
    int hargaTiket, totalHarga, diskon = 0;

    cout << "Selamat datang di Aplikasi Pemesanan Tiket Kereta!" << endl;
    cout << "==================================================" << endl;

    cout << "Pilih Kelas Tiket:" << endl;
    cout << "1. Ekonomi (Rp. 100.000)" << endl;
    cout << "2. Bisnis (Rp. 200.000)" << endl;
    cout << "3. Eksekutif (Rp. 300.000)" << endl;
    cout << "Masukkan pilihan Anda (1/2/3): ";
    cin >> kelas;

    switch (kelas) {
        case 1:
            hargaTiket = 100000;
            break;
        case 2:
            hargaTiket = 200000;
            break;
        case 3:
            hargaTiket = 300000;
            break;
        default:
            cout << "Kelas yang Anda masukkan tidak valid." << endl;
            return 0;
    }

    cout << "Masukkan jumlah tiket yang ingin dipesan: ";
    cin >> jumlahTiket;

    if (jumlahTiket <= 0) {
        cout << "Jumlah tiket yang Anda masukkan tidak valid." << endl;
        return 0;
    }

    int totalBiaya = hargaTiket * jumlahTiket;

    if (totalBiaya > 100000) 
	{
        diskon = totalBiaya * 0.1;
    } else if (totalBiaya > 200000) 
	{
        diskon = totalBiaya * 0.05;
    } else if (totalBiaya > 300000)  
	{
        diskon = totalBiaya * 0.02;
    }

    totalHarga = totalBiaya - diskon;

    cout << "==================================================" << endl;
    cout << "Rincian Pemesanan Tiket:" << endl;
    cout << "Kelas Tiket: ";
    switch (kelas) {
        case 1:
            cout << "Ekonomi" << endl;
            break;
        case 2:
            cout << "Bisnis" << endl;
            break;
        case 3:
            cout << "Eksekutif" << endl;
            break;
    }
    cout << "Jumlah Tiket: " << jumlahTiket << endl;
    cout << "Harga Tiket: Rp. " << hargaTiket << endl;
    cout << "Total Biaya: Rp. " << totalBiaya << endl;
    cout << "Diskon: Rp. " << diskon << endl;
    cout << "Total Harga: Rp. " << totalHarga << endl;
    cout << "==================================================" << endl;

    return 0;
}
