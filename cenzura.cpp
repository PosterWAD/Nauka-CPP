#include <iostream>
#include <string>

using namespace std;

int main() {

    string zdanie;
    char cenzura = '*';

    cout << "Podaj zdanie: ";
    getline(cin, zdanie);
    
    if (zdanie.empty()) {
        cout << "Nie podano zdania" << endl;
        return 1;
    }








    return 0;
}