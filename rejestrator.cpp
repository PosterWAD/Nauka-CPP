#include <iostream>
#include <string>

using namespace std;

int main() {

    string imie, nazwisko, email;

    cout << "Podaj swoje imie: ";
    cin >> imie;
    cout << "Podaj swoje nazwisko: ";
    cin >> nazwisko;
    cout << "Podaj swoj email: ";
    getline(cin >> ws, email);
    
    cout << "Witaj, " << imie << " " << nazwisko << "!" << "\nTwoj email: " << email;
    cout << "Dlugosc emaila: " << email.length() << "\n";

    auto czy_znak = email.find('@');
    if (czy_znak != string::npos) {
        cout << "Email jest poprawny\n";
    }else {
        cout << "Email jest niepoprawny";
    }


    return 0;
}