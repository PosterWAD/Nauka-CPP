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

void wypiszSpiralnie(const vector<vector<int>>& m) {
    int wiersze = m.size();
    int kolumny = m[0].size();
    int top = 0;
    int bottom = wiersze - 1;
    int left = 0;
    int right = kolumny - 1;
    do {
            for (int i = left; i <= right; i++) {
                cout << setw(4) << m[top][i];    
            }
            top++;
            for (int i = top; i <= bottom; i++) {
                cout << setw(4) << m[i][right];
            }
            right--;
            if (top <= bottom){
                for (int i = right; i >= left; i--) {
                    cout << setw(4) << m[bottom][i];
                }
                bottom--;
            }
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    cout << setw(4) << m[i][left];
                }
                left++;
            }
    }while(top <= bottom && left <= right);
}

int main() {
    vector<vector<int>> macierz = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12}
    };

    cout << "Macierz:\n";
    wypiszMacierz(macierz);

    cout << "\nSpiralnie: ";
    wypiszSpiralnie(macierz);
    cout << endl;

    // Test 2: macierz kwadratowa 4x4
    vector<vector<int>> m2 = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "\nMacierz 4x4:\n";
    wypiszMacierz(m2);
    cout << "\nSpiralnie: ";
    wypiszSpiralnie(m2);
    cout << endl;
int x;
cin >> x;
    return 0;
}
