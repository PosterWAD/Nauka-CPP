// ============================================
// Zadanie Matrix 12: Game of Life (Conway)
// ============================================
// ZADANIE:
// "Game of Life" to klasyczna symulacja automatów komórkowych wymyślona
// przez matematyka Johna Conwaya w 1970 roku.
//
// Masz macierz NxM (planszę), gdzie:
//   0 = martwa komórka
//   1 = żywa komórka
//
// W każdej "generacji" (turze) KAŻDA komórka jednocześnie sprawdza
// ile ma ŻYWYCH sąsiadów (8 kierunków: góra, dół, lewo, prawo + 4 ukośne).
//
// ZASADY:
// 1. Żywa komórka z < 2 żywymi sąsiadami → UMIERA (samotność)
// 2. Żywa komórka z 2 lub 3 żywymi sąsiadami → PRZEŻYWA
// 3. Żywa komórka z > 3 żywymi sąsiadami → UMIERA (przeludnienie)
// 4. Martwa komórka z DOKŁADNIE 3 żywymi sąsiadami → OŻYWA (reprodukcja)
//
// WAŻNE: Wszystkie zmiany muszą być jednoczesne!
//        NIE modyfikuj planszy w trakcie liczenia sąsiadów!
//        Stwórz KOPIĘ planszy i pracuj na niej.
//
// ALGORYTM:
// 1. Napisz funkcję: int policzSasiadow(macierz, r, c)
//    Sprawdź 8 sąsiednich pól. UWAŻAJ na krawędzie macierzy!
//    Sprawdzaj: if (nr >= 0 && nr < wiersze && nc >= 0 && nc < kolumny)
//
// 2. Napisz funkcję: vector<vector<int>> nastepnaGeneracja(macierz)
//    Stwórz nową macierz, przejdź po każdej komórce,
//    policz sąsiadów i zastosuj 4 zasady.
//
// 3. W main(): pętla z liczbą generacji (np. 20).
//    Po każdej generacji wypisz planszę i czekaj na Enter.
//
// BONUS: Użyj '#' dla żywych i ' ' dla martwych — wygląda ładniej!
// ============================================

#include <iostream>
#include <vector>
using namespace std;

void wypiszPlansze(const vector<vector<int>>& m) {
    for (const auto& wiersz : m) {
        for (int x : wiersz) {
            cout << (x == 1 ? '#' : ' ') << " ";
        }
        cout << "\n";
    }
}

int policzSasiadow(const vector<vector<int>>& m, int r, int c) {
    int liczba = 0;
    int wiersze = m.size();
    int kolumny = m[0].size();

    // Sprawdź 8 kierunków:
    // Możesz użyć dwóch pętli: di od -1 do 1, dj od -1 do 1
    // Pomiń (0,0) — to jest sama komórka, nie sąsiad!
    for (int di = -1; di <= 1; di++) {
        for (int dj = -1; dj <= 1; dj++) {
            if (di == 0 && dj == 0) continue; // pomijam siebie
            m[0].size()
            int nr = r + di;
            int nc = c + dj;

            // Sprawdź czy (nr, nc) mieści się w granicach:

            // Jeśli tak i komórka jest żywa — zwiększ licznik:

        }
    }

    return liczba;
}

vector<vector<int>> nastepnaGeneracja(const vector<vector<int>>& m) {
    int wiersze = m.size();
    int kolumny = m[0].size();
    vector<vector<int>> nowa(wiersze, vector<int>(kolumny, 0));

    // Przejdź po KAŻDEJ komórce, policz sąsiadów, zastosuj zasady:


    return nowa;
}

int main() {
    // "Glider" — klasyczny wzorzec który się porusza!
    // Plansza 15x20
    vector<vector<int>> plansza(15, vector<int>(20, 0));

    // Umieść "Glider" (szybowiec):
    plansza[1][2] = 1;
    plansza[2][3] = 1;
    plansza[3][1] = 1;
    plansza[3][2] = 1;
    plansza[3][3] = 1;

    int generacje = 30;

    for (int gen = 0; gen < generacje; gen++) {
        cout << "=== Generacja " << gen << " ===\n";
        wypiszPlansze(plansza);

        cout << "\n[Enter] = nastepna generacja, 'q' = koniec: ";
        string input;
        getline(cin, input);
        if (input == "q") break;

        plansza = nastepnaGeneracja(plansza);
    }

    return 0;
}
