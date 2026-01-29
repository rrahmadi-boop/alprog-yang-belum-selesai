#include <iostream>
using namespace std;

int main() {
    // 1. Menghitung luas lingkaran
    int r = 14;
    float luas;
    luas = (22.0 / 7) * r * r;

    cout << "=== Program Gabungan ===" << endl;
    cout << "1. Luas Lingkaran" << endl;
    cout << "Jari-jari = " << r << endl;
    cout << "Luas lingkaran = " << luas << endl << endl;

    // 2. Menghitung rata-rata bilangan
    int a = 4, b = 1, c = 9, d = 6, e = 2;
    float rataRata;

    rataRata = (a + b + c + d + e) / 5.0;

    cout << "2. Rata-rata Bilangan" << endl;
    cout << "Bilangan: 4, 1, 9, 6, 2" << endl;
    cout << "Rata-rata = " << rataRata << endl << endl;

    // 3. Konversi detik ke jam, menit, dan detik
    int second = 3781;
    int jam, menit, detik;

    jam = second / 3600;
    second = second % 3600;
    menit = second / 60;
    detik = second % 60;

    cout << "3. Konversi Waktu" << endl;
    cout << "3781 detik = ";
    cout << jam << " jam " << menit << " menit " << detik << " detik" << endl;

    return 0;
}
