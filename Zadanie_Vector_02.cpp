// ============================================
// Faza 2 — Vector, Zadanie 02
// ============================================
// ZADANIE:
// Wczytaj od użytkownika N liczb (sam pyta ile),
// zapisz je w vectorze, a potem znajdź i wypisz MIN i MAX.
//
// To odpowiednik Twoich "Array4 max.c" i "Array5 min.c" ale z vectorem!
//
// PODPOWIEDŹ — możesz to zrobić na 2 sposoby:
// Sposób 1: Ręcznie pętlą (jak w C)
// Sposób 2: Użyj min_element/max_element z <algorithm>
//           auto min_it = min_element(v.begin(), v.end());
//           cout << *min_it;
//
// BONUS: Zrób oba sposoby i porównaj!
// ============================================

#include <iostream>
#include <vector>
#include <algorithm>  // min_element, max_element
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
