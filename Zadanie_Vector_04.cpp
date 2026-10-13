// ============================================
// Faza 2 — Vector, Zadanie 04
// ============================================
// ZADANIE:
// Wczytaj N liczb do vectora.
// Posortuj je rosnąco i wypisz.
// Potem posortuj malejąco i wypisz.
//
// PODPOWIEDŹ:
// #include <algorithm>
// sort(v.begin(), v.end());               // rosnąco
// sort(v.begin(), v.end(), greater<>());   // malejąco
//
// BONUS: Wypisz też medianę (środkowy element po posortowaniu).
//        Jeśli N jest parzyste — średnia dwóch środkowych.
// ============================================

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cout << "Ile liczb? ";
    cin >> n;

    vector<int> liczby;

    // Wczytaj N liczb:


    // Posortuj rosnąco i wypisz:


    // Posortuj malejąco i wypisz:


    // BONUS: Oblicz i wypisz medianę:


    return 0;
}
