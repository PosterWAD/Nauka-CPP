#include <iostream>
using namespace std;

void swap(int &a, int &b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}

int main() {

  int a = 10, b = 20;

  cout << "Przed: a = " << a << ", b = " << b << endl;

  swap(a, b);

  cout << "Po:    a = " << a << ", b = " << b << endl;

  return 0;
}
