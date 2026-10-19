
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

// Tu napisz funkcję wypiszMacierz:
void wypiszMacierz(const vector<vector<int>> &m) {
  for (int i = 0; i < m.size(); i++) {
    for (int j = 0; j < m[i].size(); j++) {
      cout << setw(4) << m[i][j];
    }
    cout << endl;
  }
}

int main() {
  int N, M;
  cout << "Podaj liczbe wierszy (N): ";
  cin >> N;
  cout << "Podaj liczbe kolumn (M): ";
  cin >> M;

  // 1. Utwórz wektor 2D: vector<vector<int>> macierz(N, vector<int>(M));
  vector<vector<int>> macierz(N, vector<int>(M));

  // 2. Wypełnij macierz:
  cout << "Podaj liczby dla macierzy: ";
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> macierz[i][j];
    }
  }
  cout << "\nOto macierz:\n";
  wypiszMacierz(macierz);

  cout << "\n--- Sumy wierszy ---\n";
  for (int i = 0; i < N; i++) {
    int suma = 0;
    for (int j = 0; j < M; j++) {
      suma += macierz[i][j];
    }
    cout << "Suma wiersza " << i << " :" << suma << endl;
  }

  cout << "\n--- Sumy kolumn ---\n";
  for (int i = 0; i < M; i++) {
    int suma = 0;
    for (int j = 0; j < N; j++) {
      suma += macierz[j][i];
    }
    cout << "Suma kolumny " << i << " :" << suma << endl;
  }

  return 0;
}
