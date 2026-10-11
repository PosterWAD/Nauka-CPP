// ============================================
// Faza 1 — Referencje, Zadanie 03
// ============================================
// ZADANIE:
// Napisz funkcję:
//   void znajdzMinMax(int tab[], int n, int& min, int& max)
//
// Funkcja przeszukuje tablicę i zapisuje min/max przez referencje.
// To odpowiednik Twoich "Array4 max.c" i "Array5 min.c" w jednej funkcji!
//
// WSKAZÓWKA:
// - Zacznij od min = max = tab[0]
// - Przejdź pętlą po tablicy i porównuj
// - min i max to referencje — zmiany będą widoczne w main()!
// ============================================

#include <iostream>
using namespace std;

// Tu napisz funkcję znajdzMinMax():


int main() {

    int tab[] = {5, 2, 8, 1, 9, 3, 7};
    int n = 7;

    int minVal, maxVal;

    // Tu wywołaj znajdzMinMax():


    cout << "Min: " << minVal << endl;
    cout << "Max: " << maxVal << endl;

    return 0;
}
