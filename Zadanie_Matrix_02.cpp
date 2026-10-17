// ============================================
// Faza 2 (Macierze) — Zadanie M02: Min, Max i Współrzędne
// ============================================
// ZADANIE:
// 1. Stwórz macierz o wymiarach 3x4 (3 wiersze, 4 kolumny) z dowolnymi liczbami
//    (np. dodatnimi i ujemnymi, żeby było ciekawie).
// 2. Napisz funkcję:
//    void znajdzEkstrema(const vector<vector<int>>& m)
// 3. Funkcja powinna znaleźć:
//    - wartość najmniejszą (min) oraz jej współrzędne: wiersz i kolumnę [r_min, c_min]
//    - wartość największą (max) oraz jej współrzędne: wiersz i kolumnę [r_max, c_max]
//
// WSKAZÓWKA:
// Ustaw minVal = m[0][0], maxVal = m[0][0] oraz minR = 0, minC = 0 itd.
// Przejdź dwiema pętlami for (int i = 0...) for (int j = 0...).
// Jeśli znajdziesz mniejszy/większy element, zaktualizuj zarówno wartość,
// jak i zapamiętaj indeksy i oraz j!
// ============================================

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void wypiszMacierz(const vector<vector<int>>& m) {
    for (const auto& wiersz : m) {
        for (int x : wiersz) {
            cout << setw(5) << x;
        }
        cout << "\n";
    }
}

// Napisz funkcję znajdzEkstrema:
void znajdzEkstrema(const vector<vector<int>>& m) {
    // Twoja implementacja...
}

int main() {
    // Przykładowa macierz 3x4:
    vector<vector<int>> macierz = {
        { 12,  -5,  44,   3 },
        { 99,   0, -18,   7 },
        { 25,  61,   8, -32 }
    };

    cout << "Macierz testowa:\n";
    wypiszMacierz(macierz);

    cout << "\nWyniki wyszukiwania:\n";
    znajdzEkstrema(macierz);

    return 0;
}
