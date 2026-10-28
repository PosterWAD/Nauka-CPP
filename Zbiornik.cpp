#pragma once
#include <iostream>
using namespace std;

class Zbiornik{
    private:
        double pojemnosc;
        double ilosc;
    public:
        Zbiornik(double pojemnosc);
        bool wlej(double ilosc);
        bool wylej(double ilosc);
        double ilosc() const;
        double zapelnienie() const;
};

Zbiornik::Zbiornik(double pojemnosc) {
    this->pojemnosc = pojemnosc;
    this->ilosc = 0;
}
bool Zbiornik::wlej(double ile) {
    if (ile < 0 || ile > pojemnosc - ilosc) return false;
    this->ilosc+=ile;
    return true;
}
bool Zbiornik::wylej(double ile) {
    if (ile < 0 || ile > ilosc) return false;
    this->ilosc-=ile;
    return true;
}
double Zbiornik::ilosc() const {
    return this->ilosc;
}
double Zbiornik::zapelnienie() const {
    return ilosc/pojemnosc;
}

int main(){
    Zbiornik z(100);
    z.wlej(10);
    z.wylej(5);
    cout << z.ilosc() << endl;
    cout << z.zapelnienie() << endl;
    return 0;
}