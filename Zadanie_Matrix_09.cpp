// ============================================
// Zadanie Matrix 09: Szachownica
// ============================================
// ZADANIE:
// Stwórz planszę szachową 8×8 jako vector<vector<char>>.
//
// CZĘŚĆ 1: Wypisz szachownicę z naprzemiennymi polami
//   Białe pole = '.' (kropka)
//   Czarne pole = '#' (hash)
//   Reguła: jeśli (wiersz + kolumna) jest parzyste → '.', nieparzyste → '#'
//
//   Wynik:
//   . # . # . # . #
//   # . # . # . # .
//   . # . # . # . #
//   ...
//
// CZĘŚĆ 2: Umieszczanie hetmanów (queens)
//   Hetman ('Q') atakuje: cały wiersz, całą kolumnę, obie przekątne.
//   Napisz funkcję:
//     bool czyBezpieczne(const vector<vector<char>>& plansza, int r, int c)
//   Która sprawdza czy na pozycji [r, c] hetman NIE jest atakowany
//   przez żadnego innego hetmana na planszy.
//
//   Sprawdź:
//   a) Czy w wierszu r jest już 'Q'?
//   b) Czy w kolumnie c jest już 'Q'?
//   c) Czy na przekątnych jest 'Q'?
//      Przekątne sprawdzasz idąc we wszystkich 4 kierunkach ukośnych:
//      (i-1,j-1), (i-1,j+1), (i+1,j-1), (i+1,j+1)
//
// CZĘŚĆ 3: Pozwól użytkownikowi umieszczać hetmany
//   Pętla: podaj wiersz i kolumnę (0-7), program sprawdza czyBezpieczne(),
//   jeśli tak — stawia 'Q', jeśli nie — wypisuje "Pole atakowane!".
//   Po każdym ruchu wypisz planszę.
//   Koniec gdy user wpisze -1.
// ============================================

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void wypiszPlansze(const vector<vector<char>>& p) {
    cout << "    ";
    for (int j = 0; j < 8; j++) cout << setw(2) << j;
    cout << "\n";
    for (int i = 0; i < 8; i++) {
        cout << setw(3) << i << " ";
        for (int j = 0; j < 8; j++) {
            cout << setw(2) << p[i][j];
        }
        cout << "\n";
    }
}

bool czyBezpieczne(const vector<vector<char>>& plansza, int r, int c) {
    // Sprawdź wiersz:

    // Sprawdź kolumnę:

    // Sprawdź wszystkie 4 kierunki przekątnych:
    // Idź w każdym kierunku aż do krawędzi planszy

    return true; // zmień to
}

int main() {
    // Stwórz planszę 8x8:
    vector<vector<char>> plansza(8, vector<char>(8));

    // CZĘŚĆ 1: Wypełnij szachownicę ('.' i '#'):
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            plansza[i][j] = ((i + j) % 2 == 0) ? '.' : '#';
        }
    }

    cout << "=== SZACHOWNICA Z HETMANAMI ===\n\n";
    wypiszPlansze(plansza);

    // CZĘŚĆ 3: Pętla umieszczania hetmanów
    while (true) {
        int r, c;
        cout << "\nPodaj wiersz i kolumne (0-7) lub -1 aby zakonczyc: ";
        cin >> r;
        if (r == -1) break;
        cin >> c;

        if (r < 0 || r > 7 || c < 0 || c > 7) {
            cout << "Wspolrzedne poza plansza!\n";
            continue;
        }

        if (plansza[r][c] == 'Q') {
            cout << "Tu juz stoi hetman!\n";
            continue;
        }

        if (czyBezpieczne(plansza, r, c)) {
            plansza[r][c] = 'Q';
            cout << "Hetman postawiony na [" << r << "," << c << "]!\n";
        } else {
            cout << "Pole atakowane! Nie mozna tu postawic hetmana.\n";
        }

        wypiszPlansze(plansza);
    }

    return 0;
}
