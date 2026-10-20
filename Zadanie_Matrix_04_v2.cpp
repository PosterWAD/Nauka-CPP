#include <algorithm>
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


void obroc90(vector<vector<int>> &m) {
    int n = m.size();

    // Krok 1: Transpozycja macierzy
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(m[i][j], m[j][i]); 
        }
    }

    // Krok 2: Odwrócenie każdego wiersza 
    for (int i = 0; i < n; i++) {
        reverse(m[i].begin(), m[i].end());
    }
}
int main() {
  vector<vector<int>> macierz = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  cout << "Przed obrotem:\n";
  wypiszMacierz(macierz);

  obroc90(macierz);

  cout << "\nPo obrocie o 90 stopni:\n";
  wypiszMacierz(macierz);
  return 0;
}
