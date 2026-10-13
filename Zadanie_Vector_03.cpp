// ============================================
// Faza 2 — Vector, Zadanie 03
// ============================================
// ZADANIE:
// Wczytaj N liczb do vectora, oblicz SUMĘ i ŚREDNIĄ.
// To odpowiednik Twojego "Array6 suma srednia.c"!
//
// PODPOWIEDŹ:
// Sposób 1: Pętlą range-for:  for (auto x : v) suma += x;
// Sposób 2: Użyj accumulate z <numeric>:
//           #include <numeric>
//           auto suma = accumulate(v.begin(), v.end(), 0);
//
// Średnia = suma / v.size()
// UWAGA: Jeśli suma to int, wynik dzielenia będzie int!
//        Użyj: static_cast<double>(suma) / v.size()
//        Albo: accumulate(v.begin(), v.end(), 0.0)  ← 0.0 zamiast 0!
// ============================================

#include <iostream>
#include <vector>
#include <numeric>  // accumulate
using namespace std;

int main() {

    int n;
    cout << "Ile liczb? ";
    cin >> n;

    vector<int> liczby;

    // Wczytaj N liczb:


    // Oblicz sumę:


    // Oblicz średnią:


    // Wypisz wyniki:


    return 0;
}
