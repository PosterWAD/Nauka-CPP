#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void wczytaj_liczby(vector<int> &liczby, int &ilosc_liczb) {
  for (int i = 0; i < ilosc_liczb; i++) {
    cout << "Podaj liczbe: " << (i + 1) << ": ";
    int temp;
    cin >> temp;
    liczby.push_back(temp);
  }
}

int suma(vector<int> &liczby) {
  int suma = accumulate(liczby.begin(), liczby.end(), 0);
  /*
    0 to wartość początkowa sumy (akumulator)!
    Pętla w środku robi: wynik = 0; wynik += element;.
    Gdybyś podał tam 10, funkcja policzyłaby 10 + suma elementów.
    Co więcej: typ tej wartości określa typ obliczeń!
    Jeśli podasz 0.0, accumulate liczy zmiennoprzecinkowo
  */
  return suma;
}
auto srednia(vector<int> &liczby) {
  return suma(liczby) / (float)liczby.size();
}

int main() {

  int n;
  cout << "Ile liczb? ";
  cin >> n;

  vector<int> liczby;

  wczytaj_liczby(liczby, n);

  cout << "Suma: " << suma(liczby) << endl;

  cout << "Srednia: " << srednia(liczby) << endl;
  return 0;
}
