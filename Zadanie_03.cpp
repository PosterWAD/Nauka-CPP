#include <iostream>
using namespace std;

void znajdzMinMax(int tab[], int n, int &min, int &max) {
  min = max = tab[0];
  for (int i = 0; i < n; i++) {
    if (tab[i] > max)
      max = tab[i];
    if (tab[i] < min)
      min = tab[i];
  }
}

int main() {

  int tab[] = {5, 2, 8, 1, 9, 3, 7};
  int n = sizeof(tab) / sizeof(tab[0]);

  int minVal, maxVal;

  znajdzMinMax(tab, n, minVal, maxVal);

  cout << "Min: " << minVal << endl;
  cout << "Max: " << maxVal << endl;

  return 0;
}
