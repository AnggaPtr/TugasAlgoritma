  #include <iostream>
using namespace std;

void hitungLuasPersegi(int sisi)
{
	int luas = sisi * sisi;
	cout << " luas persegi: " << luas << endl;
}

void hitungLuasPersegiPanjang(int panjang, int lebar)
{
	int luas = panjang * lebar;
	cout << " luas persegi panjang: " << luas << endl;
}

void hitungLuasLingkaran(double jari_jari)
{
    double luas = 3.14 * jari_jari * jari_jari;
	cout << " luas lingkaran: " << luas << endl;
}


int main()
 {
    int pilihan;
    float sisi, panjang, lebar, luas;
    double jari_jari; 
    
    cout << "Pilih bangun datar yang ingin dihitung luasnya:" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Lingkaran" << endl;
    cout << "Masukkan pilihan (1-3): ";
    cin >> pilihan;

    if (pilihan == 1)
	 {
        cout << "Masukkan panjang sisi persegi: ";
        cin >> sisi;
        luas = sisi * sisi;
        cout << "Luas persegi adalah: " << luas << endl;
    } else if (pilihan == 2)
	 {
        cout << "Masukkan panjang persegi panjang: ";
        cin >> panjang;
        cout << "Masukkan lebar persegi panjang: ";
        cin >> lebar;
        luas = panjang * lebar;
        cout << "Luas persegi panjang adalah: " << luas << endl;
    } else if (pilihan == 3) 
	{
        cout << "Masukkan jari-jari lingkaran: ";
        cin >> jari_jari;
        luas = 3.14 * jari_jari * jari_jari;
        cout << "Luas lingkaran adalah: " << luas << endl;
    } else
	 {
        cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}

