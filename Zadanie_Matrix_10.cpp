// ============================================
// Zadanie Matrix 10: Operacje na Wierszach i Kolumnach
// ============================================
// ZADANIE:
// Stwórz macierz 4×4 z liczbami od 1 do 16.
// Zaimplementuj MENU z następującymi operacjami:
//
// 1. Zamień dwa wiersze
//    Użytkownik podaje numery dwóch wierszy (np. 0 i 2).
//    Zamieniasz je miejscami.
//    WSKAZÓWKA: swap(m[w1], m[w2]); — to zamienia CAŁE wektory!
//    for (int i = 0; i < m.size(); i++) {
//        for (int j = 0; j < m[0].size(); j++) {
//            int temp = 
//          }
//  }
// 2. Zamień dwie kolumny
//    Użytkownik podaje numery dwóch kolumn (np. 1 i 3).
//    Musisz przejść po KAŻDYM wierszu i zamienić elementy:
//    for (auto& wiersz : m) swap(wiersz[k1], wiersz[k2]);
//
// 3. Pomnóż wiersz przez skalar
//    Użytkownik podaje numer wiersza i liczbę (np. wiersz 1, mnożnik 3).
//    Każdy element w tym wierszu *= mnożnik.
//
// 4. Dodaj wiersz do innego wiersza
//    Użytkownik podaje: wiersz źródłowy i wiersz docelowy.
//    Każdy element docelowego wiersza += odpowiadający element źródłowego.
//    (To jest operacja elementarna macierzy — fundament algebry liniowej!)
//
// 5. Wyzeruj przekątną
//    Ustaw wszystkie elementy na głównej przekątnej na 0.
//
// 6. Wypisz macierz
// 7. Wyjście
//
// Po każdej operacji wypisz macierz, żeby widzieć efekt.
// ============================================

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void wypiszMacierz(const vector<vector<int>>& m) {
    for (const auto& wiersz : m) {
        for (int x : wiersz) {
            cout << setw(5) << x;
        }
        cout << "\n";
    }
}

int main() {
    // Stwórz macierz 4x4 z liczbami 1-16:
    vector<vector<int>> m = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    while (true) {
        cout << "\n=== OPERACJE NA MACIERZY ===\n";
        cout << "1. Zamien dwa wiersze\n";
        cout << "2. Zamien dwie kolumny\n";
        cout << "3. Pomnoz wiersz przez skalar\n";
        cout << "4. Dodaj wiersz do innego\n";
        cout << "5. Wyzeruj przekatna\n";
        cout << "6. Wypisz macierz\n";
        cout << "7. Wyjscie\n";
        cout << "Wybierz: ";

        int wybor;
        cin >> wybor;

        if (wybor == 7) break;

        switch (wybor) {
            case 1: {
                // Zamień dwa wiersze:
                break;
            }
            case 2: {
                // Zamień dwie kolumny:
                break;
            }
            case 3: {
                // Pomnóż wiersz:
                break;
            }
            case 4: {
                // Dodaj wiersz do innego:
                break;
            }
            case 5: {
                // Wyzeruj przekątną:
                break;
            }
            case 6: {
                wypiszMacierz(m);
                break;
            }
            default:
                cout << "Nieprawidlowy wybor!\n";
        }

        cout << "\nAktualna macierz:\n";
        wypiszMacierz(m);
    }

    return 0;
}
