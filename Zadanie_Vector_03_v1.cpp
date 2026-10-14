#include <iostream>
#include <vector>
using namespace std;

void wczytaj_liczby(vector<int> &liczby, int &ilosc_liczb) {
    for (int i = 0; i < ilosc_liczb; i++) {
        cout << "Podaj liczbe: " << (i+1) << ": ";
        int temp;
        cin >> temp;
        liczby.push_back(temp);
    }
}

int suma(vector<int> &liczby) {
    int suma = 0;
    for (int liczba : liczby) {
        suma += liczba;
    }
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
    cin >> n;
    return 0;
}
