#include <iostream>
#include <vector>
using namespace std;

int main() {

  // Stwórz macierz 3x3:
  vector<vector<int>> matrix(3, vector<int>(3));
  int x = 1;
  int suma = 0;
  int suma2 = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrix[i][j] = x++;
    }
  }

  // Wypisz macierz jako tabelę:
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  // Oblicz sumę głównej przekątnej:
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i == j) {
        suma += matrix[i][j];
      }
    }
  }
  cout << "Suma przekatnej: " << suma << endl;

  // BONUS: Oblicz sumę drugiej przekątnej:
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i + j == 2) {
        suma2 += matrix[i][j];
      }
    }
  }
  cout << "Suma drugiej przekatnej: " << suma2 << endl;

  return 0;
}
