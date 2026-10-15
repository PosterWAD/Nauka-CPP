#include <iostream>
#include <vector>
using namespace std;
void szukany_index(vector<int> &tab, int &szukany, int size){
    for (int i = 0; i < size; i++){
        if (tab[i] == szukany) {
            cout << "Element znaleziony na pozycji: " << i << endl;}}}
int main() {
    vector<int> tab = {1,2,3,4,5};
    int size = tab.size();
    int szukany;
    cout << "Podaj szukany: ";
    cin >> szukany;
    szukany_index(tab, szukany, size);
    return 0;
}