#include <iostream>
using namespace std;

void wczytajDwieLiczby(double &a, double &b) {
  cout << "Podaj pierwsza liczba: ";
  cin >> a;
  cout << "Podaj druga liczba: ";
  cin >> b;
}

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

    if (dzialanie == 5) {
      break;
    }

    double a, b;
    wczytajDwieLiczby(a, b);

    switch (dzialanie) {
    case 1: {
      auto wynik = a + b;
      cout << "Wynik: " << wynik << endl;
      break;
    }
    case 2: {
      auto wynik = a - b;
      cout << "Wynik: " << wynik << endl;
      break;
    }
    case 3: {
      auto wynik = a * b;
      cout << "Wynik: " << wynik << endl;
      break;
    }
    case 4: {
      if (b != 0) {
        auto wynik = a / b;
        cout << "Wynik: " << wynik << endl;
      } else {
        cout << "Nie mozna dzielic przez zero!" << endl;
      }
      break;
    }
    default:
      cout << "Nieprawidlowe dzialanie!" << endl;
    }
  }

  return 0;
}
