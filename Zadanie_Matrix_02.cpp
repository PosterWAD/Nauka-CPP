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
#include <random>
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
  int minVal = m[0][0], maxVal = m[0][0];
  int minR = 0, maxR = 0;
  int minC = 0, maxC = 0;
    for (int i = 0; i < m.size(); i ++) {
        for (int j = 0; j < m[i].size(); j++) {
            if (m[i][j] < minVal) {
                minVal = m[i][j];
                minR = i;
                minC = j;
            } 
            if (m[i][j] > maxVal) {
                maxVal = m[i][j];
                maxR = i;
                maxC = j;
            }
        }
    }
    cout << "Min: " << minVal << " o wspolrzednych " << minR << ", " << minC << endl;
    cout << "Max: " << maxVal << " o wspolrzednych " << maxR << ", " << maxC << endl;
}

int main() {
    // Przykładowa macierz 3x4:
    vector<vector<int>> macierz(3, vector<int>(4));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            macierz[i][j] = (rand() % 10) - 5;
        }
    }
    cout << "Macierz testowa:\n";
    wypiszMacierz(macierz);

    cout << "\nWyniki wyszukiwania:\n";
    znajdzEkstrema(macierz);
    int x;
    cin >> x;
    return 0;
}
