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

void zamienWiersze(vector<vector<int>>& m, int w1, int w2){
    swap(m[w1], m[w2]);
}

void zamienKolumny(vector<vector<int>>& m, int k1, int k2) {
    for (int i = 0; i < m[0].size(); i++) {
        swap(m[k1], m[k2]);
    }
}

void pomnozWiersz(vector<vector<int>>& m, int w, int s) {
    for (int i = 0; i < m[0].size(); i++) {
        m[w][i] *= s;
    }
}

void dodajWiersze(vector<vector<int>>& m, int w1, int w2) {
    for (int i = 0; i < m.size(); i++) {
        m[w1][i] += m[w2][i];
    }
}

void wyzerujPrzekatna(vector<vector<int>>& m) {
    for (int i = 0; i < m.size(); i++) {
        m[i][i] = 0;
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
                int w1, w2;
                cout << "Podaj 1 wiersz do zmiany: " << endl;
                cin >> w1;
                cout << "Podaj 2 wiersz do zmiany: " << endl;
                cin >> w2;
                if (w1 >= 0 && w1 < m.size() && w2 >= 0 && w2 < m.size()) {
                    zamienWiersze(m, w1, w2);
                }
                else{
                    cout << "Nieprawidlowy numer wiersza!" << endl;
                }
                break;
            }
            case 2: {
                int k1, k2;
                cout << "Podaj 1 kolumne do zmiany: " << endl;
                cin >> k1;
                cout << "Podaj 2 kolumne do zmiany: " << endl;
                cin >> k2;
                if (k1 >= 0 && k1 < m[0].size() && k2 >= 0 && k2 < m[0].size()) {
                    zamienKolumny(m, k1, k2);
                }
                else{
                    cout << "Nieprawidlowy numer kolumny!" << endl;
                }
                break;
            }
            case 3: {
                int w, s;
                cout << "Podaj wiersz: " << endl;
                cin >> w;
                cout << "Podaj skalar: " << endl;
                cin >> s;
                if (w >= 0 && w < m.size() && s >= 0 && s < m[0].size()) {
                    pomnozWiersz(m, w, s);
                }
                else{
                    cout << "Nieprawidlowy numer wiersza lub skalara!" << endl;
                }
                break;
            }
            case 4: {
                int w1, w2;
                cout << "Podaj wiersz z ktorego beda pobierane wartosci: " << endl;
                cin >> w1;
                cout << "Podaj wiersz do ktorego beda dodawane wartosci: " << endl;
                cin >> w2;
                if (w1 >= 0 && w1 < m.size() && w2 >= 0 && w2 < m.size()) {
                    dodajWiersze(m, w1, w2);
                }
                else{
                    cout << "Nieprawidlowy numer wiersza!" << endl;
                }
                break;
            }
            case 5: {
                wyzerujPrzekatna(m);
                break;
            }
            case 6: {
                wypiszMacierz(m);
                break;
            }
            case 7: {
                return 0;
            }
            default:
                cout << "Nieprawidlowy wybor!\n";
        }
    }
}
