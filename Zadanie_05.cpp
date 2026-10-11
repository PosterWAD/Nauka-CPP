// ============================================
// Faza 1 — Referencje, Zadanie 05
// ============================================
// ZADANIE:
// Przepisz swój kalkulator używając:
// - "auto" do przechowywania wyniku działań
// - Funkcji z referencjami do wczytywania liczb
//
// Stwórz funkcję:
//   void wczytajDwieLiczby(double& a, double& b)
//   — pyta użytkownika o dwie liczby i zapisuje je przez referencję
//
// Użyj "auto" np.:
//   auto wynik = a + b;   // kompilator sam wie że to double
//
// WSKAZÓWKA:
// Dzięki funkcji wczytajDwieLiczby() nie musisz powtarzać
// cout/cin w każdym case — DRY (Don't Repeat Yourself)!
// ============================================

#include <iostream>
using namespace std;

// Tu napisz funkcję wczytajDwieLiczby():


int main() {

    int dzialanie;

    while (true) {
        cout << "\n=== KALKULATOR ===" << endl;
        cout << "1. Dodawanie" << endl;
        cout << "2. Odejmowanie" << endl;
        cout << "3. Mnozenie" << endl;
        cout << "4. Dzielenie" << endl;
        cout << "5. Wyjscie" << endl;
        cout << "Wybierz: ";
        cin >> dzialanie;

        if (dzialanie == 5) break;

        double a, b;
        // Tu wywołaj wczytajDwieLiczby(a, b):


        switch (dzialanie) {
        case 1: {
            auto wynik = a + b;    // auto!
            cout << "Wynik: " << wynik << endl;
            break;
        }
        // Dokończ resztę case'ów...

        default:
            cout << "Nieprawidlowe dzialanie!" << endl;
        }
    }

    return 0;
}
