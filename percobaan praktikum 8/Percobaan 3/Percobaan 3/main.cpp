#include <iostream>
using namespace std;

// fungsi untuk mengecek pemenang
bool cekPemenang(char board[3][3], char player) {
    // cek baris
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player &&
            board[i][1] == player &&
            board[i][2] == player) {
            return true;
        }
    }

    // cek kolom
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == player &&
            board[1][i] == player &&
            board[2][i] == player) {
            return true;
        }
    }

    // cek diagonal
    if (board[0][0] == player &&
        board[1][1] == player &&
        board[2][2] == player) {
        return true;
    }

    if (board[0][2] == player &&
        board[1][1] == player &&
        board[2][0] == player) {
        return true;
    }

    return false;
}

int main() {
    // papan permainan 3x3
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    // simbol pemain
    char players[2] = { 'X', 'O' };

    int loop = 0;
    bool playing = true;

    while (playing) {
        system("cls");
        cout << " Tic Tac Toe" << endl << endl;
        cout << " |---|---|---|" << endl;

        // tampilkan papan
        for (int rows = 0; rows < 3; rows++) {
            for (int cols = 0; cols < 3; cols++) {
                cout << " | " << board[rows][cols];
            }
            cout << " |" << endl;
            cout << " |---|---|---|" << endl;
        }

        int row, col;
        int currentPlayer = loop % 2;

        cout << endl;
        cout << "Player " << players[currentPlayer]
            << " (baris kolom): ";
        cin >> row >> col;

        // validasi input
        if (row < 0 || row > 2 || col < 0 || col > 2 ||
            board[row][col] != ' ') {
            cout << "Input tidak valid!" << endl;
            system("pause");
            continue;
        }

        // isi papan
        board[row][col] = players[currentPlayer];

        // cek pemenang
        if (cekPemenang(board, players[currentPlayer])) {
            system("cls");
            cout << "Player " << players[currentPlayer]
                << " MENANG!" << endl;
            playing = false;
        }
        // cek seri
        else if (loop == 8) {
            system("cls");
            cout << "Permainan SERI!" << endl;
            playing = false;
        }

        loop++;
    }

    system("pause");
    return 0;
}
