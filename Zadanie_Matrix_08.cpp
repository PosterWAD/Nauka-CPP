#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void wypiszMacierz(const vector<vector<int>>& m) {
    for (const auto& wiersz : m) {
        for (int x : wiersz) {
            cout << setw(4) << x;
        }
        cout << "\n";
    }
}

bool czyMagiczny(const vector<vector<int>>& m) {
    int w = m.size();
    int k = m[0].size();
    if (w != k) return false; //sprawdzenie czy macierz jest kwadratowa
    int sum1 = 0, sum2 = 0, diag1 = 0, diag2 = 0;
    for (int i = 0; i < w;) {
        diag1 += m[i][i];
        diag2 += m[i][k - i - 1];
        for (int j = 0; j < k; j++) {
            sum1 += m[i][j];
            sum2 += m[j][i];
        }
        if (sum1 == sum2) {
            i++;
        }
        else return false;
    }
    return ((diag1 == sum2/w) && (diag2 == sum1/w)) ? true : false;
}

int main() {
    // Test 1: Magiczny kwadrat 3x3
    vector<vector<int>> magiczny = {
        {2, 7, 6},
        {9, 5, 1},
        {4, 3, 8}
    };

    cout << "Macierz 1:\n";
    wypiszMacierz(magiczny);
    cout << (czyMagiczny(magiczny) ? "TAK, to magiczny kwadrat!" : "NIE, to nie jest magiczny kwadrat.") << "\n\n";

    // Test 2: NIE magiczny
    vector<vector<int>> zwykly = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Macierz 2:\n";
    wypiszMacierz(zwykly);
    cout << (czyMagiczny(zwykly) ? "TAK, to magiczny kwadrat!" : "NIE, to nie jest magiczny kwadrat.") << "\n\n";

    // Test 3: Magiczny kwadrat 4x4
    vector<vector<int>> magiczny4 = {
        {16,  3,  2, 13},
        { 5, 10, 11,  8},
        { 9,  6,  7, 12},
        { 4, 15, 14,  1}
    };

    cout << "Macierz 3 (4x4):\n";
    wypiszMacierz(magiczny4);
    cout << (czyMagiczny(magiczny4) ? "TAK, to magiczny kwadrat!" : "NIE, to nie jest magiczny kwadrat.") << "\n";

    return 0;
}
