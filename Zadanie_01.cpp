#include <iostream>
using namespace std;

void podwoj(int &n) { n *= 2; }

int main() {

  int liczba = 21;

  cout << "Przed:  " << liczba << endl;

  podwoj(liczba);

  cout << "Po:    " << liczba << endl;

  return 0;
}
