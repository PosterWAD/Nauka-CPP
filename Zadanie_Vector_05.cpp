// ============================================
// Faza 2 — Vector, Zadanie 05
// ============================================
// ZADANIE:
// Wczytuj liczby od użytkownika dopóki nie wpisze 0.
// Potem USUŃ z vectora wszystkie liczby parzyste.
// Wypisz co zostało.
//
// WSKAZÓWKA — usuwanie z vectora w pętli jest ZDRADLIWE!
//
// ❌ ZŁY sposób (pomija elementy):
//   for (int i = 0; i < v.size(); i++)
//       if (v[i] % 2 == 0) v.erase(v.begin() + i);
//   // Po usunięciu indeksy się przesuwają! Pomijasz element!
//
// ✅ DOBRY sposób 1 — od końca:
//   for (int i = v.size() - 1; i >= 0; i--)
//       if (v[i] % 2 == 0) v.erase(v.begin() + i);
//
// ✅ DOBRY sposób 2 — erase-remove idiom (zaawansowane):
//   v.erase(remove_if(v.begin(), v.end(),
//       [](int x) { return x % 2 == 0; }), v.end());
//   // Nie musisz tego jeszcze rozumieć — wrócimy do tego!
//
// Użyj sposobu 1 (od końca) — to jest oczywiste i bezpieczne.
// ============================================

#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int> liczby;
  int x;

  cout << "Podawaj liczby (0 = koniec):" << endl;
  do {
    cin >> x;
    liczby.push_back(x);
  } while (x != 0);

  cout << "Przed usunieciem: ";
  for (int liczba : liczby) {
    cout << liczba << " ";
  }
  cout << endl;

  cout << "Po usunieciu parzystych: ";
  for (int i = liczby.size() - 1; i >= 0; i--) {
    if (liczby[i] % 2 == 0) {
      liczby.erase(liczby.begin() + i);
    }
  }

  for (int liczba : liczby) {
    cout << liczba << " ";
  }
  cout << endl;
  return 0;
}
