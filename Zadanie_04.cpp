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

// Tu napisz funkcję dlugoscSlowa():


// BONUS — Tu napisz funkcję zamienNaWielkie():


int main() {

    string tekst = "Ucze sie C++";

    cout << "Tekst: " << tekst << endl;
    cout << "Dlugosc: " << /* wywołaj dlugoscSlowa() */ 0 << endl;

    // BONUS:
    // zamienNaWielkie(tekst);
    // cout << "Wielkie: " << tekst << endl;

    return 0;
}
