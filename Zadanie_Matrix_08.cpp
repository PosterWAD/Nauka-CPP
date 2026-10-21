// ============================================
// Zadanie Matrix 08: Magiczny Kwadrat
// ============================================
// ZADANIE:
// Magiczny kwadrat to macierz N×N, w której:
// - suma KAŻDEGO wiersza jest taka sama
// - suma KAŻDEJ kolumny jest taka sama
// - suma GŁÓWNEJ przekątnej jest taka sama
// - suma DRUGIEJ przekątnej jest taka sama
// Ta wspólna wartość nazywa się "stałą magiczną".
//
// Przykład magicznego kwadratu 3×3:
//   2  7  6       sumy wierszy:  15, 15, 15
//   9  5  1       sumy kolumn:   15, 15, 15
//   4  3  8       obie przekątne: 15, 15
//                 Stała magiczna = 15
//
// 1. Napisz funkcję:
//    bool czyMagiczny(const vector<vector<int>>& m)
//    która sprawdza czy macierz jest magicznym kwadratem.
//
// 2. ALGORYTM:
//    a) Oblicz sumę pierwszego wiersza — to jest Twoja "stała magiczna"
//    b) Sprawdź czy KAŻDY wiersz ma tę samą sumę
//    c) Sprawdź czy KAŻDA kolumna ma tę samą sumę
//    d) Sprawdź czy główna przekątna ma tę samą sumę
//    e) Sprawdź czy druga przekątna ma tę samą sumę
//    Jeśli cokolwiek się nie zgadza — return false!
//
// BONUS: Sprawdź też czy macierz jest kwadratowa (wiersze == kolumny)!
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

bool czyMagiczny(const vector<vector<int>>& m) {
    // Twoja implementacja...
    return false;
}

int main() {
    // Test 1: Magiczny kwadrat 3x3
    vector<vector<int>> magiczny = {
        {2, 7, 6},
        {9, 5, 1},
        {4, 3, 8}
    };

    cout << "Macierz 1:\n";
    wypiszMacierz(magiczny);
    cout << (czyMagiczny(magiczny) ? "TAK, to magiczny kwadrat!" : "NIE, to nie jest magiczny kwadrat.") << "\n\n";

    // Test 2: NIE magiczny
    vector<vector<int>> zwykly = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Macierz 2:\n";
    wypiszMacierz(zwykly);
    cout << (czyMagiczny(zwykly) ? "TAK, to magiczny kwadrat!" : "NIE, to nie jest magiczny kwadrat.") << "\n\n";

    // Test 3: Magiczny kwadrat 4x4
    vector<vector<int>> magiczny4 = {
        {16,  3,  2, 13},
        { 5, 10, 11,  8},
        { 9,  6,  7, 12},
        { 4, 15, 14,  1}
    };

    cout << "Macierz 3 (4x4):\n";
    wypiszMacierz(magiczny4);
    cout << (czyMagiczny(magiczny4) ? "TAK, to magiczny kwadrat!" : "NIE, to nie jest magiczny kwadrat.") << "\n";

    return 0;
}
