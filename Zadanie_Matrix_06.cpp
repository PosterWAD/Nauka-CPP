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
