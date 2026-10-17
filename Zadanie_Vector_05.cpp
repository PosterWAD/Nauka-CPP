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
