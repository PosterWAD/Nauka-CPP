#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void wypiszMacierz(const vector<vector<int>> &m) {
  for (const auto &wiersz : m) {
    for (int x : wiersz) {
      cout << setw(4) << x;
    }
    cout << "\n";
  }
}

void obroc90wlewo(vector<vector<int>> &m) {
  int wiersze = m.size();
  int kolumny = m[0].size();

  vector<vector<int>> wynik(kolumny, vector<int>(wiersze));
  for (int i = 0; i < wiersze; i++) {
    for (int j = 0; j < kolumny; j++) {
      wynik[kolumny - 1 - j][i] = m[i][j];
    }
  }
  m = wynik;
}
void obroc90wprawo(vector<vector<int>> &m) {
  int wiersze = m.size();
  int kolumny = m[0].size();

  vector<vector<int>> wynik(kolumny, vector<int>(wiersze));
  for (int i = 0; i < wiersze; i++) {
    for (int j = 0; j < kolumny; j++) {
      wynik[j][wiersze - 1 - i] = m[i][j];
    }
  }
  m = wynik;
}

int main() {
  vector<vector<int>> macierz = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int wiersze = macierz.size();
  int kolumny = macierz[0].size();
  cout << "Wiersze: " << wiersze << endl;
  cout << "Kolumny: " << kolumny << endl;
  
  cout << "Przed obrotem:\n";
  wypiszMacierz(macierz);

  obroc90wlewo(macierz);

  cout << "\nPo obrocie o 90 stopni w lewo:\n";
  wypiszMacierz(macierz);

  cout << "Przed obrotem:\n";
  macierz = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  obroc90wprawo(macierz);

  cout << "\nPo obrocie o 90 stopni w prawo:\n";
  wypiszMacierz(macierz);
  return 0;
}
