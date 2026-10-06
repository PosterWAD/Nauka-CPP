#include <iostream>

    using namespace std;

int main(){
    
    int dzialanie;
    int a, b;

    while(true){
        
        cout << "1. Dodawanie\n";
        cout << "2. Odejmowanie\n";
        cout << "3. Mnożenie\n";
        cout << "4. Dzielenie\n";
        cout << "5. Wyjście\n";
        cout << "Wybierz działanie: ";
        cin >> dzialanie;
        
        if (dzialanie == 1){
            cout << "\nPodaj pierwsza liczbe: ";
            cin >> a;
            cout << "\nPodaj druga liczbe: ";
            cin >> b;
            cout <<"\nWynik: " << a + b << endl;
        }
        if (dzialanie == 2) {
            cout << "\nPodaj pierwsza liczbe: ";
            cin >> a;
            cout << "\nPodaj druga liczbe: ";
            cin >> b;
            cout <<"\nWynik: " << a - b << endl;
        }
        if (dzialanie == 3) {
            cout << "\nPodaj pierwsza liczbe: ";
            cin >> a;
            cout << "\nPodaj druga liczbe: ";
            cin >> b;
            cout <<"\nWynik: " << a * b << endl;
        }
        if (dzialanie == 4) {
            cout << "\nPodaj pierwsza liczbe: ";
            cin >> a;
            cout << "\nPodaj druga liczbe: ";
            cin >> b;
            if (b == 0) {
                cout << "\nNie mozna dzielic przez zero\n";
            } else {
                cout <<"\nWynik: " << a / b << endl;
            }
        }
        if (dzialanie == 5) {
            break;
        }
    }

    return 0;
}
