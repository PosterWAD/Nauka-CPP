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

#include <iomanip> // dla setw()
#include <iostream>
#include <vector>
using namespace std;

// Tu napisz funkcję wypiszMacierz:
void wypiszMacierz(const vector<vector<int>> &m) {
  for (int i = 0; i < m.size(); i++) {
    for (int j = 0; j < m[i].size(); j++) {
      cout << "[" << m[i][j] << "] ";
    }
    cout << endl;
  }
}

int main() {
  int N, M;
  cout << "Podaj liczbe wierszy (N): ";
  cin >> N;
  cout << "Podaj liczbe kolumn (M): ";
  cin >> M;

  // 1. Utwórz wektor 2D: vector<vector<int>> macierz(N, vector<int>(M));
  vector<vector<int>> macierz(N, vector<int>(M));

  // 2. Wypełnij macierz:
  cout << "Podaj liczby dla macierzy: ";
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> macierz[i][j];
    }
  }
  cout << "\nOto macierz:\n";
  wypiszMacierz(macierz);

  cout << "\n--- Sumy wierszy ---\n";
  for (int i = 0; i < N; i++) {
    int suma = 0;
    for (int j = 0; j < M; j++) {
      suma += macierz[i][j];
    }
    cout << "Suma wiersza " << i << " :" << suma << endl;
  }

  cout << "\n--- Sumy kolumn ---\n";
  for (int i = 0; i < M; i++) {
    int suma = 0;
    for (int j = 0; j < N; j++) {
      suma += macierz[j][i];
    }
    cout << "Suma kolumny " << i << " :" << suma << endl;
  }

  return 0;
}
