#include <iostream>
#include <vector>
#include <iomanip>
#include <random>
using namespace std;

void wypiszMacierz(const vector<vector<int>>& m) {
    for (const auto& wiersz : m) {
        for (int x : wiersz) {
            cout << setw(5) << x;
        }
        cout << "\n";
    }
}

// Napisz funkcję znajdzEkstrema:
void znajdzEkstrema(const vector<vector<int>>& m, int &minVal, int &maxVal, int &minR, int &maxR, int &minC, int &maxC) {
    for (int i = 0; i < m.size(); i ++) {
        for (int j = 0; j < m[i].size(); j++) {
            if (m[i][j] < minVal) {
                minVal = m[i][j];
                minR = i;
                minC = j;
            } 
            if (m[i][j] > maxVal) {
                maxVal = m[i][j];
                maxR = i;
                maxC = j;
            }
        }
    }
}

int main() {
    // Przykładowa macierz 3x4:
    vector<vector<int>> macierz(3, vector<int>(4));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            macierz[i][j] = (rand() % 10) - 5;
        }
    }

    int minVal = macierz[0][0], maxVal = macierz[0][0];
    int minR = 0, maxR = 0;
    int minC = 0, maxC = 0;

    cout << "Macierz testowa:\n";
    wypiszMacierz(macierz);

    cout << "\nWyniki wyszukiwania:\n";
    znajdzEkstrema(macierz, minVal, maxVal, minR, maxR, minC, maxC);
    cout << "Min: " << minVal << " o wspolrzednych " << minR << ", " << minC << endl;
    cout << "Max: " << maxVal << " o wspolrzednych " << maxR << ", " << maxC << endl;
    return 0;
}
