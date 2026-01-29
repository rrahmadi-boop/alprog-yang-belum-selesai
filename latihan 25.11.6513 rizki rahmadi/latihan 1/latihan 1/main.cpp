#include <iostream>
using namespace std;

int main() {
    const int MAX = 50;

    int idBarang[MAX];
    char namaBarang[MAX][30];   // nama barang max 29 karakter
    int jumlahBarang[MAX];

    int jumlahData = 0;
    int pilihan;

    do {
        cout << "\n=== MENU INVENTARIS BARANG ===" << endl;
        cout << "1. Input Data Barang" << endl;
        cout << "2. View Data Barang" << endl;
        cout << "3. Exit" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        if (pilihan == 1) {
            if (jumlahData >= MAX) {
                cout << "Data sudah penuh!" << endl;
            }
            else {
                cout << "\nInput Data Barang" << endl;

                cout << "ID Barang    : ";
                cin >> idBarang[jumlahData];

                cout << "Nama Barang  : ";
                cin >> namaBarang[jumlahData]; // TANPA spasi

                cout << "Jumlah Barang: ";
                cin >> jumlahBarang[jumlahData];

                jumlahData++;
                cout << "Data berhasil disimpan." << endl;
            }
        }
        else if (pilihan == 2) {
            if (jumlahData == 0) {
                cout << "Belum ada data barang." << endl;
            }
            else {
                cout << "\n=== DATA INVENTARIS ===" << endl;
                for (int i = 0; i < jumlahData; i++) {
                    cout << "Data ke-" << i + 1 << endl;
                    cout << "ID Barang    : " << idBarang[i] << endl;
                    cout << "Nama Barang  : " << namaBarang[i] << endl;
                    cout << "Jumlah Barang: " << jumlahBarang[i] << endl;
                    cout << "----------------------" << endl;
                }
            }
        }
        else if (pilihan == 3) {
            cout << "Keluar dari program." << endl;
        }
        else {
            cout << "Pilihan tidak valid!" << endl;
        }

    } while (pilihan != 3);

    return 0;
}
