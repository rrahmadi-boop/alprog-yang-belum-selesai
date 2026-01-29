#include <iostream>
#include <vector>
#include <string>
#include <thread>
#include <chrono> 

using namespace std;

int main() {

    string ucapan = "Happy New Year";

    cout << endl;
    for (int i = 0; i < ucapan.length(); i++) {
        cout << ucapan[i] << flush;
        this_thread::sleep_for(chrono::milliseconds(250));
    }
    cout << endl << endl;

    unsigned char blok = 178;

    string map2026[] = {
        "111111001111110011111100111111",
        "000001001000010000000100100000",
        "000001001000010000000100100000",
        "111111001000010011111100111111",
        "100000001000010010000000100001",
        "100000001000010010000000100001",
        "111111001111110011111100111111"
    };

    int jumlahBaris = sizeof(map2026) / sizeof(map2026[0]);

    for (int i = 0; i < jumlahBaris; i++) {
        for (int j = 0; j < map2026[i].length(); j++) {
            if (map2026[i][j] == '0') {
                cout << " ";
            }
            else {
                cout << blok;
            }
        }
        cout << endl;
    }

    cout << endl;
    cout << "Press Enter to continue . . .";

    cin.get();

    return 0;
}