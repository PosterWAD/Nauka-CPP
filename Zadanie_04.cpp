#include <iostream>
#include <string>
using namespace std;

int dlugoscSlowa(const string &s) { return s.length(); }

void zamienNaWielkie(string &s) {
  for (int i = 0; i < s.length(); i++) {
    s[i] = toupper(s[i]);
  }
}

int main() {

  string tekst = "Ucze sie C++";

  cout << "Tekst: " << tekst << endl;
  cout << "Dlugosc: " << dlugoscSlowa(tekst) << endl;

  zamienNaWielkie(tekst);
  cout << "Wielkie: " << tekst << endl;

  return 0;
}
