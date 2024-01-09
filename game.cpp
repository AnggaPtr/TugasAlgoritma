#include <iostream>
#include <cstdlib>
#include <ctime>

class Karakter {
public:
    int kesehatan;
    std::string jenis;

    Karakter(int kesehatanAwal, const std::string& jenisKarakter) : kesehatan(kesehatanAwal), jenis(jenisKarakter) {}

    void serang(Karakter& target, Karakter& karakterr, int damage) {
        target.kesehatan -= damage;
        std::cout << "dari " << karakterr.jenis << "! -" << damage << " HP pada " << target.jenis << std::endl;
    }

    void pulihkan(Karakter& target1, Karakter& target2, Karakter& target3) {
        target1.kesehatan += 20;
        target2.kesehatan += 20;
        target3.kesehatan += 20;
        std::cout << "Pemulihan! +20 HP kepada seluruh party." << std::endl;
    }
};

int main() {
	int tingkatKesulitan;
	int status;
	int statusCritical;
	int statusHealMusuh;
    // Inisialisasi karakter
    Karakter ksatria(100, "Ksatria");
    Karakter pemanah(80, "Pemanah");
    Karakter tabib(70, "Tabib");
    Karakter musuh(tingkatKesulitan, "Musuh");

    // Inisialisasi HP musuh berdasarkan tingkat kesulitan 
    std::cout << "===== !!!WELCOME TO BOELAKAN HUNTER!!! ===== " << std::endl;
    std::cout << "Pilih tingkat kesulitan" << std::endl;
    std::cout << "1. Mudah (Musuh memiliki 100 HP)" << std::endl;
    std::cout << "2. Normal (Musuh memiliki 250 HP)" << std::endl;
    std::cout << "3. Sulit (Musuh memiliki 500 HP)" << std::endl;
    std::cin >> tingkatKesulitan;

    switch (tingkatKesulitan) {
        case 1:
            musuh.kesehatan = 100;
            statusHealMusuh = 1;
            break;
        case 2:
            musuh.kesehatan = 250;
            statusHealMusuh = 2;
            break;
        case 3:
            musuh.kesehatan = 500;
            statusHealMusuh = 3;
            break;
        default:
            std::cout << "Tingkat kesulitan tidak valid. Mengatur ke Normal." << std::endl;
			musuh.kesehatan = 250;
            break;
    }

    while (true) {
        // Tampilkan status karakter dan musuh
        std::cout << "Kesehatan ksatria: " << ksatria.kesehatan << " | Kesehatan pemanah: " << pemanah.kesehatan
                  << " | Kesehatan tabib: " << tabib.kesehatan << std::endl;
        std::cout << "Kesehatan musuh: " << musuh.kesehatan << std::endl;

        // Pemain memilih aksi
        std::cout << "Pilih aksi:" << std::endl;
        std::cout << "1. Ksatria menyerang" << std::endl;
        std::cout << "2. Pemanah menyerang" << std::endl;
        std::cout << "3. Tabib memulihkan" << std::endl;

        int pilihan;
        std::cin >> pilihan;

        // Lakukan aksi yang dipilih
        switch (pilihan) {
            case 1: {
            	statusCritical = std::rand() % 2;
            	switch (statusCritical) {
            		case 0: {
						int seranganKsatria = std::rand() % 10 + 10; // Serangan acak antara 10 - 19  
						std::cout << "Serangan" << ' ';
						ksatria.serang(musuh, ksatria, seranganKsatria);
						break;
					}
					case 1: {
						int seranganKsatria = std::rand() % 10 + 10;
						int seranganCriticalKsatria = seranganKsatria * 2;
						std::cout << "Serangan Critical" << ' ';
						ksatria.serang(musuh, ksatria, seranganCriticalKsatria);
						break;
					}
				}
                break;
            }
            case 2: {
                statusCritical = std::rand() % 2;
            	switch (statusCritical) {
            		case 0: {
						int seranganPemanah = std::rand() % 5 + 10; // Serangan acak antara 5 - 14
						std::cout << "Serangan" << ' ';
						pemanah.serang(musuh, pemanah, seranganPemanah);
						break;
					}
					case 1: {
						int seranganPemanah = std::rand() % 5 + 10;
						int seranganCriticalPemanah = seranganPemanah * 2;
						std::cout << "Serangan Critical" << ' ';
						pemanah.serang(musuh, pemanah, seranganCriticalPemanah);
						break;
					}
				}
                break;
            }
            case 3: {
            	status = 1;
                tabib.pulihkan(ksatria, pemanah, tabib);
                break;
            }
            default: {
                std::cout << "Pilihan tidak valid. Coba lagi." << std::endl;
                continue;
            }
        }

		if (status == 0) {
        	// Musuh menyerang karakter secara acak
        	int seranganMusuh = std::rand() % 10 + 5; // Serangan acak antara 5 - 14
        	int pilihanSasaran = std::rand() % 3; // Pilihan sasaran acak
        	int statusCritical2;

        	switch (pilihanSasaran) {
            	case 0: {
            		statusCritical2 = std::rand() % 2;
            		switch (statusCritical2) {
            			case 0: {
							std::cout << "Serangan" << ' ';
                			musuh.serang(ksatria, musuh, seranganMusuh);
                			break;
						}
						case 1: {
							int seranganCriticalMusuh = seranganMusuh * 2;
							std::cout << "Serangan Critical" << ' ';
							musuh.serang(ksatria, musuh, seranganCriticalMusuh);
							break;
						}
					}
                	break;
            	}
            	case 1: {
            		statusCritical2 = std::rand() % 2;
            		switch (statusCritical2) {
            			case 0: {
							std::cout << "Serangan" << ' ';
                			musuh.serang(pemanah, musuh, seranganMusuh);
                			break;
						}
						case 1: {
							int seranganCriticalMusuh = seranganMusuh * 2;
							std::cout << "Serangan Critical" << ' ';
							musuh.serang(pemanah, musuh, seranganCriticalMusuh);
							break;
						}
					}
                	break;
            	}
            	case 2: {
            		statusCritical2 = std::rand() % 2;
            		switch (statusCritical2) {
            			case 0: {
							std::cout << "Serangan" << ' ';
                			musuh.serang(tabib, musuh, seranganMusuh);
                			break;
						}
						case 1: {
							int seranganCriticalMusuh = seranganMusuh * 2;
							std::cout << "Serangan Critical" << ' ';
							musuh.serang(tabib, musuh, seranganCriticalMusuh);
							break;
						}
					}
                	break;
            	}
        	}
        } else {
        	status = 0;
        	int healMusuh = statusHealMusuh * 10;
        	musuh.kesehatan += healMusuh;
        	std::cout << "Musuh memulihkan sebesar +" << healMusuh << " hp." << std::endl;
		}

        // Periksa apakah kesehatan karakter atau musuh mencapai 0
        if (ksatria.kesehatan <= 0) {
            std::cout << "Ksatria telah kalah! Game over." << std::endl;
            break;
        } else if (pemanah.kesehatan <= 0) {
            std::cout << "Pemanah telah kalah! Game over." << std::endl;
            break;
        } else if (tabib.kesehatan <= 0) {
            std::cout << "Tabib telah kalah! Game over." << std::endl;
            break;
        } else if (musuh.kesehatan <= 0) {
            std::cout << "Musuh telah dikalahkan! Victory!" << std::endl;
            break;
        }
    }

    return 0;
}
