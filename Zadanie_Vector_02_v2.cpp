#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

void wczytaj_liczby(vector<int> &liczby, int &ilosc_liczb) {
    for (int i = 0; i < ilosc_liczb; i++) {
        cout << "Podaj liczbe: " << (i+1) << ": ";
        int temp;
        cin >> temp;
        liczby.push_back(temp);
    }
}

void szukaj_min_max(vector<int> &liczby) {
    auto min = min_element(liczby.begin(), liczby.end());
    auto max = max_element(liczby.begin(), liczby.end());
    cout << "Min: " << *min << endl;
    cout << "Max: " << *max << endl;
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

    szukaj_min_max(liczby);
    
    return 0;
}
