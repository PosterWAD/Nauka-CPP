// ============================================
// Faza 1 — Referencje, Zadanie 02
// ============================================
// ZADANIE:
// Napisz funkcję void swap(int& a, int& b) która zamienia dwie zmienne.
// To samo co Twój "Pointers1 Swapping variables.c" ale BEZ wskaźników!
//
// W C:   void swap(int *a, int *b) { int tmp = *a; *a = *b; *b = tmp; }
// W C++: void swap(int& a, int& b) { ... }
//
// Różnica: przy wywołaniu NIE piszesz &:
//   C:   swap(&x, &y);
//   C++: swap(x, y);     ← czyściej!
// ============================================

#include <iostream>
using namespace std;

void swap(int &a, int &b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}

int main() {

  int a = 10, b = 20;

  cout << "Przed: a = " << a << ", b = " << b << endl;

  swap(a, b);

  cout << "Po:    a = " << a << ", b = " << b << endl;

  return 0;
}
