#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void wczytaj_liczby(vector<int> &liczby, int &n){
    for (int i = 0; i < n; i++) {
        cout << "Podaj liczbe: " << (i+1) << ": ";
        int temp;
        cin >> temp;
        liczby.push_back(temp);
    }
}
vector<int> posortuj_od_najmniejszej(vector<int> &liczby){
    sort(liczby.begin(), liczby.end());
    return liczby;
}
vector<int> posortuj_od_najwiekszej(vector<int> &liczby){
    sort(liczby.begin(), liczby.end(), greater<>());
    return liczby;
}

int main() {

    int n;
    cout << "Ile liczb? ";
    cin >> n;

    vector<int> liczby;

    wczytaj_liczby(liczby, n);
    int size = liczby.size();
    vector<int> sort_a = posortuj_od_najmniejszej(liczby);
    vector<int> sort_b = posortuj_od_najwiekszej(liczby);  
    cout << "Posortowane rosnaco: ";
    for (int i = 0; i < size; i++) {
        cout << sort_a[i] << " ";
    }
    cout << endl;

    cout << "Posortowane malejaco: ";
    for (int i = 0; i < size; i++) {
        cout << sort_b[i] << " ";
    }
    cout << endl;
    auto srodkowy_element = liczby.size()/2;
    if (liczby.size() % 2 == 0){
        cout << "Mediana: " << float((liczby[srodkowy_element-1] + liczby[srodkowy_element])/2) << endl;
    } else {
        cout << "Mediana: " << liczby[srodkowy_element] << endl;
    }
    cin >> n;
    return 0;
}
