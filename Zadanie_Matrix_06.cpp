// ============================================
// Faza 2 (Macierze) — Zadanie M06: Mini-Gra "Kółko i Krzyżyk"
// ============================================
// ZADANIE PODSUMOWUJĄCE:
// Wykorzystaj macierz 2D vector<vector<char>> do stworzenia
// gry w Kółko i Krzyżyk dla 2 graczy ('X' oraz 'O').
//
// Macierz 3x3 reprezentuje planszę:
//   vector<vector<char>> plansza(3, vector<char>(3, ' '));
//
// PROGRAM POWINIEN:
// 1. Wyświetlać aktualny stan planszy w estetycznej formie:
//      0   1   2
//    0   |   |  
//       ---+---+---
//    1   | X |  
//       ---+---+---
//    2 O |   |  
// 2. Pytać na zmianę gracza 'X' i gracza 'O' o współrzędne ruchu (wiersz i kolumna od 0 do 2).
// 3. Walidować ruch: czy pole mieści się w zakresie [0..2] i czy nie jest już zajęte!
// 4. Sprawdzać warunek wygranej:
//    - 3 takie same znaki w którymkolwiek wierszu
//    - 3 takie same znaki w którejkolwiek kolumnie
//    - 3 takie same znaki na którejś z dwóch przekątnych!
// 5. Sprawdzać remis (brak wolnych pól ' ').
// ============================================

#include <iostream>
#include <vector>
using namespace std;

void wypiszPlansze(const vector<vector<char>>& p) {
    cout << "\n    0   1   2\n";
    for (int i = 0; i < 3; i++) {
        cout << "  " << i << " ";
        for (int j = 0; j < 3; j++) {
            cout << p[i][j];
            if (j < 2) cout << " | ";
        }
        cout << "\n";
        if (i < 2) cout << "    ---+---+---\n";
    }
    cout << "\n";
}

bool sprawdzWygrana(const vector<vector<char>>& p, char gracz) {
    // 1. Sprawdź wiersze:
    for (int i = 0; i < 3; i++) {
        if (p[i][0] == gracz && p[i][1] == gracz && p[i][2] == gracz)
            return true;
    }

    // 2. Sprawdź kolumny:
    for (int j = 0; j < 3; j++) {
        if (p[0][j] == gracz && p[1][j] == gracz && p[2][j] == gracz)
            return true;
    }

    // 3. Sprawdź główną przekątną:
    if (p[0][0] == gracz && p[1][1] == gracz && p[2][2] == gracz)
        return true;

    // 4. Sprawdź drugą przekątną:
    if (p[0][2] == gracz && p[1][1] == gracz && p[2][0] == gracz)
        return true;

    return false;
}

bool czyPelna(const vector<vector<char>>& p) {
    // Zwróć false jeśli znajdziesz choć jedno wolne pole ' '
    for (const auto& wiersz : p) {
        for (char c : wiersz) {
            if (c == ' ') return false;
        }
    }
    return true;
}

int main() {
    vector<vector<char>> plansza(3, vector<char>(3, ' '));
    char aktualnyGracz = 'X';

    cout << "=== GRA W KÓŁKO I KRZYŻYK ===\n";

    while (true) {
        wypiszPlansze(plansza);

        int r, c;
        cout << "Gracz " << aktualnyGracz << " -> podaj wiersz i kolumne (np. 1 1): ";
        cin >> r >> c;

        // Walidacja poprawności ruchu:
        if (r < 0 || r > 2 || c < 0 || c > 2) {
            cout << "Niepoprawne wspolrzedne! Musza byc od 0 do 2.\n";
            continue;
        }
        if (plansza[r][c] != ' ') {
            cout << "To pole jest juz zajete!\n";
            continue;
        }

        // Wykonaj ruch:
        plansza[r][c] = aktualnyGracz;

        // Sprawdź wygraną:
        if (sprawdzWygrana(plansza, aktualnyGracz)) {
            wypiszPlansze(plansza);
            cout << "Brawo! Gracz " << aktualnyGracz << " WYGRYWA!\n";
            break;
        }

        // Sprawdź remis:
        if (czyPelna(plansza)) {
            wypiszPlansze(plansza);
            cout << "REMIS! Wszystkie pola zajete.\n";
            break;
        }

        // Zmiana gracza:
        aktualnyGracz = (aktualnyGracz == 'X') ? 'O' : 'X';
    }

    return 0;
}
