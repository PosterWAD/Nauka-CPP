// ============================================
// Faza 2 — Vector, Zadanie 06
// ============================================
// ZADANIE:
// Stwórz macierz 3x3 jako vector<vector<int>>.
// Wypełnij ją liczbami od 1 do 9.
// Wypisz macierz w formie tabeli.
// Oblicz i wypisz sumę przekątnej (1 + 5 + 9 = 15).
//
// To odpowiednik Twojego "Matrix5 Summing up diagonal.c"!
//
// PODPOWIEDŹ:
// vector<vector<int>> macierz = {
//     {1, 2, 3},
//     {4, 5, 6},
//     {7, 8, 9}
// };
//
// Przekątna to elementy gdzie wiersz == kolumna:
// macierz[0][0], macierz[1][1], macierz[2][2]
//
// BONUS: Oblicz też sumę drugiej przekątnej (3 + 5 + 7 = 15)
//        Indeksy: macierz[i][n-1-i]
// ============================================

#include <iostream>
#include <vector>
using namespace std;

int main() {

  // Stwórz macierz 3x3:
  vector<vector<int>> matrix(3, vector<int>(3));
  int x = 1;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix[i][j] = x++;
    }
  }

  // Wypisz macierz jako tabelę:
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  // Oblicz sumę głównej przekątnej:

  // BONUS: Oblicz sumę drugiej przekątnej:

  return 0;
}
