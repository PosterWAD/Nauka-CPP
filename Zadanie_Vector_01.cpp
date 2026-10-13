#include <iostream>
#include <vector>

int main() {
  std::vector<int> liczby;
  int x;
  for (int i = 0; i < 5; i++) {
    std::cout << "Podaj liczbe " << i + 1 << ": ";
    std::cin >> x;
    liczby.push_back(x);
  }
  std::cout << "Oto twój wektor: ";
  for (auto liczba : liczby) {
    std::cout << liczba << " ";
  }

  return 0;
}
