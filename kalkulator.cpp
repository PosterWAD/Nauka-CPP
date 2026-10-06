#include <iostream>

    using namespace std;

int main(){
    
    int dzialanie;
    double a, b;

    while(true){
        
        cout << "1. Dodawanie\n";
        cout << "2. Odejmowanie\n";
        cout << "3. Mnożenie\n";
        cout << "4. Dzielenie\n";
        cout << "5. Wyjście\n";
        cout << "Wybierz działanie: ";
        cin >> dzialanie;
        
        switch (dzialanie) {
        case 1:`
            cout << "\nPodaj pierwsza liczbe: ";
            cin >> a;
            cout << "\nPodaj druga liczbe: ";
            cin >> b;
            cout << "\nWynik: " << a + b << endl;
            break;
        case 2:
            cout << "\nPodaj pierwsza liczbe: ";
            cin >> a;
            cout << "\nPodaj druga liczbe: ";
            cin >> b;
            cout << "\nWynik: " << a - b << endl;
            break;
        case 3:
            cout << "\nPodaj pierwsza liczbe: ";
            cin >> a;
            cout << "\nPodaj druga liczbe: ";
            cin >> b;
            cout << "\nWynik: " << a * b << endl;
            break;
        case 4:
            cout << "\nPodaj pierwsza liczbe: ";
            cin >> a;
            cout << "\nPodaj druga liczbe: ";
            cin >> b;
            if (b == 0) {
                cout << "\nNie mozna dzielic przez zero\n";
            } else {
                cout << "\nWynik: " << a / b << endl;
            }
            break;
        case 5:
            break;
        default:
            cout << "\nNieprawidlowe dzialanie\n";
            break;
        }
    }

    return 0;
}
