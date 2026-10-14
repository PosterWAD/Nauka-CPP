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

void szukaj_min_max(vector<int> &liczby, int &size_of_liczby) {
    int min = liczby[0];
    int max = liczby[0];
    for (int i = 1; i < size_of_liczby; i++) { //Od i=1 bo pierwszy element jest już zapamiętany
        if (liczby[i] < min) {
            min = liczby[i];
        }
        if (liczby[i] > max) {
            max = liczby[i];
        }
    }
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
}

int main() {

    int n;
    cout << "Ile liczb chcesz podac? ";
    cin >> n;

    vector<int> liczby;

    wczytaj_liczby(liczby, n);
    cout << "Oto twój wektor: ";

    for (int i = 0; i < liczby.size(); i++) {
        cout << liczby[i] << " ";
    }
    cout << endl;

    int size_of_liczby = liczby.size();

    szukaj_min_max(liczby, size_of_liczby);
    
    return 0;
}
