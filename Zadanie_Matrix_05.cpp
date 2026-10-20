// ============================================
// Faza 2 (Macierze) — Zadanie M05: Mnożenie Dwóch Macierzy
// ============================================
// ZADANIE:
// Mnożenie macierzy to fundament grafiki komputerowej, fizyki i AI.
//
// ZASADA MATEMATYCZNA:
// Aby pomnożyć macierz A przez macierz B (A * B = C):
// Liczba KOLUMN macierzy A musi być równa liczbie WIERSZY macierzy B!
//
// Jeśli A ma wymiary: [wierszeA x kolumnyA]
//   oraz B ma wymiary: [wierszeB x kolumnyB]
// Gdzie kolumnyA == wierszeB (nazwijmy tę wspólną wartość K):
// Wynikowa macierz C ma wymiary: [wierszeA x kolumnyB]
//
// Wzór na komórkę C[i][j]:
// C[i][j] = suma iloczynów: (A[i][0]*B[0][j] + A[i][1]*B[1][j] + ... + A[i][k]*B[k][j])
//
// W kodzie to klasyczne 3 pętle:
// for i od 0 do wierszeA:
//     for j od 0 do kolumnyB:
//         for k od 0 do K:
//             C[i][j] += A[i][k] * B[k][j];
//
// 1. Zaimplementuj funkcję:
//    vector<vector<int>> pomnoz(const vector<vector<int>>& A, const vector<vector<int>>& B)
// 2. Jeśli wymiary się nie zgadzają (A[0].size() != B.size()), wypisz błąd i zwróć pusty wektor {}.
// 3. Przetestuj na podanych w main() macierzach.
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

vector<vector<int>> pomnoz(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int wierszeA = A.size();
    int kolumnyA = A[0].size();
    int wierszeB = B.size();
    int kolumnyB = B[0].size();

    if (kolumnyA != wierszeB) {
        cout << "BŁĄD: Nie można pomnożyć macierzy! Wymiary się nie zgadzają.\n";
        return {};
    }

    vector<vector<int>> C(wierszeA, vector<int>(kolumnyB));

    for (int i = 0; i < wierszeA; i++) {
        for (int j = 0; j < kolumnyB; j++) {
            for (int k = 0; k < kolumnyA; k++) { //LUB wierszeB
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return C;
}

int main() {
    // Macierz A (2x3)
    vector<vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Macierz B (3x2)
    vector<vector<int>> B = {
        {7,  8},
        {9,  1},
        {2,  3}
    };

    cout << "Macierz A (2x3):\n";
    wypiszMacierz(A);

    cout << "\nMacierz B (3x2):\n";
    wypiszMacierz(B);

    vector<vector<int>> C = pomnoz(A, B);

    cout << "\nWynik mnożenia A * B (2x2):\n";
    // Oczekiwany wynik:
    // [ 1*7 + 2*9 + 3*2 , 1*8 + 2*1 + 3*3 ] = [ 31, 19 ]
    // [ 4*7 + 5*9 + 6*2 , 4*8 + 5*1 + 6*3 ] = [ 85, 55 ]
    wypiszMacierz(C);

    return 0;
}
