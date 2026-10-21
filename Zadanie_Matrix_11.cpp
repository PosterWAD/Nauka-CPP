// ============================================
// Zadanie Matrix 11: Labirynt — Szukanie Drogi
// ============================================
// ZADANIE:
// Masz labirynt jako macierz NxM:
//   0 = przejście (wolne pole)
//   1 = ściana
//   S = start (tu zaczynasz)
//   E = wyjście (tu chcesz dotrzeć)
//
// Program powinien pozwolić graczowi chodzić po labiryncie!
//
// 1. Wypisz labirynt ładnie:
//    '█' (lub '#') dla ścian, ' ' dla przejść, 'S' start, 'E' koniec, '@' gracz
//
// 2. Gracz porusza się wpisując:
//    'w' = góra, 's' = dół, 'a' = lewo, 'd' = prawo
//
// 3. Sprawdź czy ruch jest legalny:
//    - Czy nowa pozycja mieści się w granicach macierzy?
//    - Czy nowe pole NIE jest ścianą (1)?
//
// 4. Zaznaczaj ślad gracza znakiem '.' (żeby widział gdzie był)
//
// 5. Gdy gracz dotrze do 'E' — wypisz "GRATULACJE! Znalazłeś wyjście!"
//    i ile kroków wykonał.
//
// WSKAZÓWKA: Pozycję gracza trzymaj w dwóch zmiennych: graczR, graczC
// ============================================

#include <iostream>
#include <vector>
using namespace std;

void wypiszLabirynt(const vector<vector<char>>& lab, int graczR, int graczC) {
    for (int i = 0; i < lab.size(); i++) {
        for (int j = 0; j < lab[i].size(); j++) {
            if (i == graczR && j == graczC) {
                cout << "@ ";
            } else {
                char c = lab[i][j];
                if (c == '1') cout << "# ";
                else if (c == '0' || c == '.') cout << (c == '.' ? ". " : "  ");
                else cout << c << " ";
            }
        }
        cout << "\n";
    }
}

int main() {
    // Labirynt 7x10 (możesz go zmienić/rozbudować!)
    // S = start, E = wyjście, 0 = przejście, 1 = ściana
    vector<vector<char>> labirynt = {
        {'S', '0', '1', '1', '1', '1', '1', '1', '1', '1'},
        {'1', '0', '1', '0', '0', '0', '1', '0', '0', '1'},
        {'1', '0', '1', '0', '1', '0', '1', '0', '1', '1'},
        {'1', '0', '0', '0', '1', '0', '0', '0', '0', '1'},
        {'1', '1', '1', '0', '1', '1', '1', '1', '0', '1'},
        {'1', '0', '0', '0', '0', '0', '0', '1', '0', '0'},
        {'1', '1', '1', '1', '1', '1', '1', '1', '1', 'E'}
    };

    int graczR = 0, graczC = 0; // start
    int kroki = 0;

    cout << "=== LABIRYNT ===\n";
    cout << "Sterowanie: w=gora, s=dol, a=lewo, d=prawo, q=wyjscie\n\n";

    // Główna pętla gry:
    while (true) {
        wypiszLabirynt(labirynt, graczR, graczC);

        char ruch;
        cout << "\nTwoj ruch: ";
        cin >> ruch;

        if (ruch == 'q') {
            cout << "Koniec gry.\n";
            break;
        }

        // Oblicz nową pozycję na podstawie ruchu:
        int nowyR = graczR, nowyC = graczC;

        // Tu dodaj obsługę klawiszy w/s/a/d:


        // Sprawdź czy ruch jest legalny:


        // Jeśli legalny — wykonaj ruch:
        // - Zaznacz stare pole '.'
        // - Zaktualizuj graczR, graczC
        // - Zwiększ kroki


        // Sprawdź czy dotarłeś do wyjścia 'E':

    }

    return 0;
}
