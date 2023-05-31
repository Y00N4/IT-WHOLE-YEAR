#include <iostream>
#include <string>
// dziennik szkolny. struktura dziennika osoba w dzienniku: imie nazwisko, oceny, srednia. na koniec mozliwosc wproadzeia wiecej uczniow
using namespace std;

struct Uczen {

string imie;
string nazwisko;
int oceny[2];
float srednia;
int numerwDzienniku;

};

int main()
{
    Uczen dziennik[2];
     //dziennik[0].imie=" Piotr";
     //dziennik[0].nazwisko="Nowak";
     //dziennik[0].srednia=3.0;
     //dziennik[0].oceny[0]=3;
     //dziennik[0].oceny[1]=3;


     //dziennik[1].imie= "Julia" ;
     //dziennik[1].nazwisko= "Nowak";
     //dziennik[1].srednia= 5.0;
     //dziennik[1].oceny[0] = 5;
     //dziennik[1].oceny[1] = 5;


     for (int i=0; i<5; i++){
    cout << "Podaj numer w dzienniku: ";
     cin >> dziennik[i].numerwDzienniku;

    if (dziennik[i].numerwDzienniku != 0){
        cout << "Podaj imiê ";
        cin >> dziennik[i].imie;

        cout << "Podaj nazwisko ";
        cin >> dziennik[i].nazwisko;

        cout << "Podaj oceny ";
        cin >> dziennik[i].oceny[0];
        cin >> dziennik[i].oceny[1];

        cout << "Podaj srednia";
        cin >> dziennik[i].srednia;
    }
    else {
        break; }
     }

     for (auto element: dziennik){
        cout << element.imie << " " << element.nazwisko << " " << element.srednia << element.oceny[0] << element.oceny[1] << " " << endl;
     }

    return 0;

}
