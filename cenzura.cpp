#include <iostream>
#include <string>

using namespace std;

int main() {

    string zdanie;

    cout << "Podaj zdanie: ";
    getline(cin, zdanie);
    int pozycja = 0;
    if (zdanie.empty()) {
        cout << "Nie podano zdania" << endl;
        return 1;
    }

    else if (zdanie.find("kurwa") != string::npos) {
        pozycja = zdanie.find("kurwa");
        zdanie.replace(pozycja, 5, "*****");
        cout << "Twoje zdanie: " << zdanie << endl;
    }

    return 0;
}