// ============================================
// Faza 2 (Macierze) — Zadanie M04: Obrót Macierzy o 90 Stopni
// ============================================
// ZADANIE:
// Obróć kwadratową macierz N x N o 90 stopni zgodnie z ruchem wskazówek zegara.
// Jest to klasyczny problem w gamedevie (np. obracanie klocków w Tetrisie)
// oraz na rozmowach rekrutacyjnych!
//
// PRZYKŁAD (3x3):
// Przed obrotem:          Po obrocie o 90°:
//   1  2  3                 7  4  1
//   4  5  6       ===>      8  5  2
//   7  8  9                 9  6  3
//
// 💡 GENIALNY TRIK ALKOMETRYCZNY (metoda 2 kroków):
// Krok 1: Wykonaj transpozycję macierzy (zamień wiersze z kolumnami).
//   1  4  7
//   2  5  8
//   3  6  9
// Krok 2: Odwróć kolejność elementów w KAŻDYM wierszu!
//   Możesz użyć std::reverse(wiersz.begin(), wiersz.end()) z <algorithm>!
//   Wiersz 1: 1 4 7  ->  7 4 1
//   Wiersz 2: 2 5 8  ->  8 5 2
//   Wiersz 3: 3 6 9  ->  9 6 3
// I BUM! Macierz jest obrócona o 90 stopni!
//
// 1. Zaimplementuj funkcję:
//    void obroc90(vector<vector<int>>& m)
// 2. Przetestuj ją na macierzy 3x3 lub 4x4.
// ============================================

#include <algorithm> // dla reverse() i swap()
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void wypiszMacierz(const vector<vector<int>> &m) {
  for (const auto &wiersz : m) {
    for (int x : wiersz) {
      cout << setw(4) << x;
    }
    cout << "\n";
  }
}

void obroc90wlewo(vector<vector<int>> &m) {
  int wiersze = m.size();
  int kolumny = m[0].size();

  vector<vector<int>> wynik(kolumny, vector<int>(wiersze));
  for (int i = 0; i < wiersze; i++) {
    for (int j = 0; j < kolumny; j++) {
      wynik[kolumny - 1 - j][i] = m[i][j];
    }
  }
  m = wynik;
}
void obroc90wprawo(vector<vector<int>> &m) {
  int wiersze = m.size();
  int kolumny = m[0].size();

  vector<vector<int>> wynik(kolumny, vector<int>(wiersze));
  for (int i = 0; i < wiersze; i++) {
    for (int j = 0; j < kolumny; j++) {
      wynik[j][wiersze - 1 - i] = m[i][j];
    }
  }
  m = wynik;
}

int main() {
  vector<vector<int>> macierz = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  cout << "Przed obrotem:\n";
  wypiszMacierz(macierz);

  obroc90wlewo(macierz);

  cout << "\nPo obrocie o 90 stopni w lewo:\n";
  wypiszMacierz(macierz);

  cout << "Przed obrotem:\n";
  macierz = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  obroc90wprawo(macierz);

  cout << "\nPo obrocie o 90 stopni w prawo:\n";
  wypiszMacierz(macierz);
  return 0;
}
