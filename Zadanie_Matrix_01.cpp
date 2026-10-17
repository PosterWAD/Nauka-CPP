// ============================================
// Faza 2 (Macierze) — Zadanie M01: Wymiary i Sumy
// ============================================
// ZADANIE:
// 1. Zapytaj użytkownika o wymiary macierzy: N (wiersze) i M (kolumny).
// 2. Utwórz wektor 2D: vector<vector<int>> macierz(N, vector<int>(M));
// 3. Wypełnij macierz:
//    - albo wczytaj liczby z klawiatury
//    - albo wygeneruj kolejne liczby od 1 do N*M (dla szybkiego testowania)
// 4. Napisz funkcję:
//    void wypiszMacierz(const vector<vector<int>>& m)
//    która ładnie wypisuje macierz używając setw(4) z biblioteki <iomanip>.
// 5. Oblicz i wypisz:
//    - sumę dla KAŻDEGO wiersza osobno (Wiersz 0: ..., Wiersz 1: ...)
//    - sumę dla KAŻDEJ kolumny osobno (Kolumna 0: ..., Kolumna 1: ...)
//
// WSKAZÓWKA DO KOLUMN:
// Aby przejść po kolumnach, zamień kolejność pętli:
// pętla zewnętrzna 'j' (kolumny), pętla wewnętrzna 'i' (wiersze).
// m[i][j] wciąż odnosi się do wiersza i, kolumny j!
// ============================================

#include <iostream>
#include <vector>
#include <iomanip> // dla setw()
using namespace std;

// Tu napisz funkcję wypiszMacierz:
void wypiszMacierz(const vector<vector<int>>& m) {
    // Użyj const auto& wiersz : m
}

int main() {
    int n, m;
    cout << "Podaj liczbe wierszy (N): ";
    cin >> n;
    cout << "Podaj liczbe kolumn (M): ";
    cin >> m;

    // 1. Utwórz macierz N x M:


    // 2. Wypełnij macierz:


    cout << "\nOto macierz:\n";
    // wypiszMacierz(macierz);


    cout << "\n--- Sumy wierszy ---\n";
    // Oblicz i wypisz sumę każdego wiersza:


    cout << "\n--- Sumy kolumn ---\n";
    // Oblicz i wypisz sumę każdej kolumny:


    return 0;
}
