#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int> liczby;
  int x;
  for (int i = 0; i < 5; i++) {
    cout << "Podaj liczbe " << i + 1 << ": ";
    cin >> x;
    liczby.push_back(x);
  }

  for (auto liczba : liczby) {
    cout << liczba + " ";
  }

  return 0;
}
