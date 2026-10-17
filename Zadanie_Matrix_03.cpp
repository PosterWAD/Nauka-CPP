// ============================================
// Faza 2 (Macierze) — Zadanie M03: Transpozycja Macierzy
// ============================================
// ZADANIE:
// Transpozycja macierzy M (oznaczana M^T) polega na zamianie wierszy z kolumnami.
// Jeśli macierz wejściowa ma wymiary N x M (np. 2 wiersze, 3 kolumny):
//   1  2  3
//   4  5  6
// To macierz transponowana ma wymiary M x N (3 wiersze, 2 kolumny):
//   1  4
//   2  5
//   3  6
//
// Reguła: transponowana[j][i] = oryginalna[i][j]
//
// 1. Napisz funkcję:
//    vector<vector<int>> transponuj(const vector<vector<int>>& m)
// 2. Wewnątrz funkcji:
//    - sprawdź wymiary 'm': wiersze = m.size(), kolumny = m[0].size()
//    - utwórz macierz wynikową o odwróconych wymiarach (kolumny x wiersze)
//    - przepisz elementy zgodnie z regułą
// 3. Wypisz macierz przed i po transpozycji.
// ============================================

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void wypiszMacierz(const vector<vector<int>>& m) {
    for (const auto& wiersz : m) {
        for (int x : wiersz) {
            cout << setw(4) << x;
        }
        cout << "\n";
    }
}

// Napisz funkcję transponuj:
vector<vector<int>> transponuj(const vector<vector<int>>& m) {
    // 1. Pobierz wiersze i kolumny macierzy m:
    // 2. Utwórz wynik o wymiarach kolumny x wiersze:
    // 3. Wypełnij w podwójnej pętli:
    
    return {}; // zmień to
}

int main() {
    // Macierz 2x4:
    vector<vector<int>> A = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };

    cout << "Macierz pierwotna (2x4):\n";
    wypiszMacierz(A);

    vector<vector<int>> AT = transponuj(A);

    cout << "\nMacierz po transpozycji (4x2):\n";
    wypiszMacierz(AT);

    return 0;
}
