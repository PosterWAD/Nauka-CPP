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

// Napisz funkcję transponuj:
vector<vector<int>> transponuj(const vector<vector<int>> &m) {
  int wiersze = m.size();
  int kolumny = m[0].size();
  vector<vector<int>> wynik(kolumny, vector<int>(wiersze));

  for (int i = 0; i < kolumny; i++) {
    for (int j = 0; j < wiersze; j++)
      wynik[i][j] = m[j][i];
  }
  return wynik;
}

int main() {
  // Macierz 2x4:
  vector<vector<int>> A = {{1, 2, 3, 4}, {5, 6, 7, 8}};

  cout << "Macierz pierwotna (2x4):\n";
  wypiszMacierz(A);

  vector<vector<int>> AT = transponuj(A);

  cout << "\nMacierz po transpozycji (4x2):\n";
  wypiszMacierz(AT);
  int x;
  cin >> x;
  return 0;
}
