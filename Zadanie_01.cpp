// ============================================
// Faza 1 — Referencje, Zadanie 01
// ============================================
// ZADANIE:
// Napisz funkcję void podwoj(int& n) która podwaja wartość zmiennej.
// Wywołaj ją w main() i wypisz wynik przed i po wywołaniu.
//
// WSKAZÓWKA:
// W C robiłeś to wskaźnikiem:  void podwoj(int *n) { *n = *n * 2; }
// W C++ użyj referencji:       void podwoj(int& n) { ... }
// ============================================

#include <iostream>
using namespace std;

void podwoj(int &n) { n *= 2; }

int main() {

  int liczba = 21;

  cout << "Przed:  " << liczba << endl;

  podwoj(liczba);

  cout << "Po:    " << liczba << endl;

  return 0;
}
