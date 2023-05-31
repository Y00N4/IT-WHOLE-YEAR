#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string napis = "W roku Panskim 1345, wladca Henryk 12, na rzecz swoich 143209 poddanych uchwalil dekret o 20 procentowej znizce podatkow";
    map<int, int> liczby;

    int suma = 0;
    string aktualna_liczba = "";

    for (char znak : napis) {
        if (znak >= '0' && znak <= '9') {
            aktualna_liczba += znak;
        }
        else if (!aktualna_liczba.empty()) {
            int liczba = stoi(aktualna_liczba);
            suma += liczba;
            liczby[liczba]++;
            aktualna_liczba = "";
        }
    }
    if (!aktualna_liczba.empty()) {
        int liczba = stoi(aktualna_liczba);
        suma += liczba;
        liczby[liczba]++;
    }

    cout << "Suma liczb: " << suma << endl;
    cout << "Ilosc wystapien poszczegolnych liczb:" << endl;
    for (auto para : liczby) {
        cout << para.first << ": " << para.second << endl;
    }



    return 0;
}
