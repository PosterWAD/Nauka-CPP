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


    // Wypisz macierz jako tabelę:


    // Oblicz sumę głównej przekątnej:


    // BONUS: Oblicz sumę drugiej przekątnej:


    return 0;
}
