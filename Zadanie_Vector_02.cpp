// ============================================
// Faza 2 — Vector, Zadanie 02
// ============================================
// ZADANIE:
// Wczytaj od użytkownika N liczb (sam pyta ile),
// zapisz je w vectorze, a potem znajdź i wypisz MIN i MAX.
//
// To odpowiednik Twoich "Array4 max.c" i "Array5 min.c" ale z vectorem!
//
// PODPOWIEDŹ — możesz to zrobić na 2 sposoby:
// Sposób 1: Ręcznie pętlą (jak w C)
// Sposób 2: Użyj min_element/max_element z <algorithm>
//           auto min_it = min_element(v.begin(), v.end());
//           cout << *min_it;
//
// BONUS: Zrób oba sposoby i porównaj!
// ============================================

#include <iostream>
#include <vector>
#include <algorithm>  // min_element, max_element
using namespace std;

int main() {

    int n;
    cout << "Ile liczb chcesz podac? ";
    cin >> n;

    vector<int> liczby;

    // Wczytaj N liczb:


    // Znajdź min i max:


    // Wypisz wyniki:


    return 0;
}
