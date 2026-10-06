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
        getline(cin >> ws, dzialanie)
        
        if (dzialanie == 1){
            cout << "Podaj pierwsza liczbe: ";
            cin >> a;
            cout << "Podaj druga liczbe: ";
            cin >> b;
            cout << "Wynik: " << a + b << endl;
        }
        
        
    }

    return 0;
}
