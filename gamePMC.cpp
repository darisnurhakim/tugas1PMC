#include <iostream>

int main() {
    // inisialisasi awal, anggap semua ember kosong
    int A = 0;
    int B = 0;
    int C = 0;
    int pilihan;

    // Deskripsi Game
    std::cout << "WATER JUG PROBLEM" << std::endl;
    std::cout << "Terdapat dua buah ember, ember A berkapasitas 5 liter dan B berkapasitas 3 liter." << std::endl;
    std::cout << "Anda diminta mengambil 4 liter air dari danau menggunakan kedua ember tersebut,";
    std::cout << "tetapi hanya boleh dengan instruksi yang tersedia." << std::endl;
    std::cout << "Anda dinyatakan memenangkan permainan jika isi ember A atau B sama dengan 4 liter." << std::endl;
    std::cout << std::endl;

    // Game
    while (B != 4){
        // Instruksi Game
        std::cout << "Instruksi yang dapat dilakukan:" << std::endl;
        std::cout << "1. Mengisi ember A sampai penuh" << std::endl;
        std::cout << "2. Mengisi ember B sampai penuh" << std::endl;
        std::cout << "3. Mengosongkan ember A" << std::endl;
        std::cout << "4. Mengosongkan ember B" << std::endl;
        std::cout << "5. Menuangkan isi ember A ke ember B sampai B penuh" << std::endl;
        std::cout << "6. Menuangkan isi ember B ke ember A sampai A penuh" << std::endl;
        std::cout << "Pilih nomor instruksi : ";
        std::cin  >> pilihan;

        // Memproses Pilihan
        if (pilihan == 1){
            A = 3;
            std::cout << "Air di ember A = " << A << " liter dan air di ember B = " << B << " liter" << std::endl;
            std::cout << std::endl;
        }
        else if (pilihan == 2){
            B = 5;
            std::cout << "Air di ember A = " << A << " liter dan air di ember B = " << B << " liter" << std::endl;
            std::cout << std::endl;
        }
        else if (pilihan == 3){
            A = 0;
            std::cout << "Air di ember A = " << A << " liter dan air di ember B = " << B << " liter" << std::endl;
            std::cout << std::endl;
        }
        else if (pilihan == 4){
            B = 0;
            std::cout << "Air di ember A = " << A << " liter dan air di ember B = " << B << " liter" << std::endl;
            std::cout << std::endl;
        }
        else if (pilihan == 5){
            B = B + A;
            A = 0;
            while (B > 5){
                B = B - 1;
                A = A + 1;
            }
            std::cout << "Air di ember A = " << A << " liter dan air di ember B = " << B << " liter" << std::endl;
            std::cout << std::endl;
        }
        else if (pilihan == 6){
            A = A + B;
            B = 0;
            while (A > 3){
                A = A - 1;
                B = B + 1;
            }
            std::cout << "Air di ember A = " << A << " liter dan air di ember B = " << B << " liter" << std::endl;
            std::cout << std::endl;
        }
    }

    // nilai akhir
    A = A;
    B = B - 4;
    C = 4;
    
    std::cout << "Selamat Anda Menang!" << std::endl;
    std::cout << "Air di ember A = " << A << " liter, air di ember B = " << B << " liter, dan air di ember C = " << C << " liter" << std::endl;
    std::cout << std::endl;
}
