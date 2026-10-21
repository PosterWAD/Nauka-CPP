// ============================================
// Zadanie Matrix 07: Spiralne Wypisywanie Macierzy
// ============================================
// ZADANIE:
// Wypisz elementy macierzy w porządku SPIRALNYM (zgodnie z ruchem wskazówek zegara).
//
// Przykład dla macierzy 3x4:
//   1   2   3   4
//   5   6   7   8
//   9  10  11  12
//
// Wynik spiralny: 1 2 3 4 8 12 11 10 9 5 6 7
//
// Kierunki:  →→→→  ↓↓  ←←←←  ↑  →→→
//
// ALGORYTM:
// Utrzymuj 4 granice:
//   top = 0, bottom = wiersze-1, left = 0, right = kolumny-1
//
// Powtarzaj dopóki top <= bottom ORAZ left <= right:
//   1. Idź w PRAWO po wierszu 'top' (od left do right), potem top++
//   2. Idź w DÓŁ po kolumnie 'right' (od top do bottom), potem right--
//   3. Jeśli top <= bottom: Idź w LEWO po wierszu 'bottom' (od right do left), potem bottom--
//   4. Jeśli left <= right: Idź w GÓRĘ po kolumnie 'left' (od bottom do top), potem left++
//
// To jest popularny problem na rozmowach rekrutacyjnych (LeetCode #54)!
// ============================================

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void wypiszMacierz(const vector<vector<int>>& m) {
    for (const auto& wiersz : m) {
        for (int x : wiersz) {
            cout << setw(4) << x;
        }
        cout << "\n";
    }
}

void wypiszSpiralnie(const vector<vector<int>>& m) {
    int wiersze = m.size();
    int kolumny = m[0].size();
    int top = 0;
    int bottom = wiersze - 1;
    int left = 0;
    int right = kolumny - 1;
    do {
            for (int i = left; i <= right; i++) {
                cout << setw(4) << m[top][i];
                cout << "i: " << i << endl;
                cout << "right: " << right << endl;    
            }
            top++;
            for (int i = top; i <= bottom; i++) {
                cout << setw(4) << m[i][right];
                cout << "i: " << i << endl;
                cout << "bottom: " << bottom << endl;
            }
            right--;
            for (int i = right; i >= left; i--) {
                cout << setw(4) << m[bottom][i];
            }
            bottom--;
    }while(top <= bottom && left <= right);
        // Twoja implementacja...
        // Użyj 4 granic: top, bottom, left, right
}

int main() {
    vector<vector<int>> macierz = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12}
    };

    cout << "Macierz:\n";
    wypiszMacierz(macierz);

    cout << "\nSpiralnie: ";
    wypiszSpiralnie(macierz);
    cout << endl;

    // Test 2: macierz kwadratowa 4x4
    vector<vector<int>> m2 = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "\nMacierz 4x4:\n";
    wypiszMacierz(m2);
    cout << "\nSpiralnie: ";
    wypiszSpiralnie(m2);
    cout << endl;

    return 0;
}
