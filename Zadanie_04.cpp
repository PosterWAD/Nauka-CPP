// ============================================
// Faza 1 — Referencje, Zadanie 04
// ============================================
// ZADANIE:
// Napisz funkcję:
//   int dlugoscSlowa(const string& s)
//
// Zwraca długość stringa. Użyj "const&" żeby nie kopiować.
//
// DLACZEGO const&?
// - string może być DUŻY (np. cały tekst książki)
// - bez & → kopiowanie całego stringa (wolne!)
// - z &  → tylko referencja (szybko!)
// - const → obietnica że NIE zmodyfikujesz oryginału
//
// BONUS: Napisz drugą funkcję:
//   void zamienNaWielkie(string& s)
//   która zmienia litery na wielkie (BEZ const — bo modyfikuje!)
//   Podpowiedź: użyj toupper() w pętli
// ============================================

#include <iostream>
#include <string>
using namespace std;

int dlugoscSlowa(const string &s) { return s.length(); }

void zamienNaWielkie(string &s) {
  for (int i = 0; i < s.length(); i++) {
    s[i] = toupper(s[i]);
  }
}

int main() {

  string tekst = "Ucze sie C++";

  cout << "Tekst: " << tekst << endl;
  cout << "Dlugosc: " << dlugoscSlowa(tekst) << endl;

  zamienNaWielkie(tekst);
  cout << "Wielkie: " << tekst << endl;

  return 0;
}
