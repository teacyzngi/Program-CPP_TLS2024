#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Daftar nama khodam
    string khodam[] = {"Gajah Sigma", "Harimau Mewing", "Kambing Lucu", "Mimi Peri", "Kepiting kenari", "Kucing Anggora", "Durian", "Tombak Kyai", "Tempe Basi ", "Kotak Loncat" ,"Babi Panggang" , "Keris Barong"};
    int jumlahKhodam = sizeof(khodam) / sizeof(khodam[0]);

    // Inisialisasi generator angka acak
    srand(time(0));

    // Menghasilkan indeks acak
    int indeksAcak = rand() % jumlahKhodam;

    // Menampilkan nama khodam acak
    cout << "Khodam Kamu: " << khodam[indeksAcak] << endl;

    return 0;
}
