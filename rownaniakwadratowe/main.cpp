//stworz program, ktory rozwiazuje rownania kwadratowe (z wykorzystaniem struktur}
                                                       //zrob strukture figury (ilosci bokow itd)
#include <bits/stdc++.h>

// x^2 +x + lb wolna  a =1 b= liczba kolo x c= wolna delta= b^2 -4ac

using namespace std;

struct FunkcjaKwadratowa{
    float a=0;
    float b=0;
    float c=0;
    float delta=0;
};

float liczeniedelty(float a, float b, float c){
    float result = pow(b,2.0)-(4.0*(a*c));
    return result;
}

int main()
{


    cout << "Podaj rownanie kwadratowe: ";

    FunkcjaKwadratowa dzialanie;
    cout << "podaj A:";
    cin >> dzialanie.a;
    cout << "podaj b;";
    cin >>dzialanie.b;
    cout <<"podaj c: ";
    cin>> dzialanie.c;

    dzialanie.delta=liczeniedelty(dzialanie.a, dzialanie.b, dzialanie.c);

    if (dzialanie.delta==0){ // delta=0 1 rozwiazanie, delta > 0 2roz delta < 0 0 roz
        cout<< dzialanie.delta << endl;
        cout << "x=" << (-dzialanie.b/(2*dzialanie.a));
    }
    else if (dzialanie.delta<0){
        cout << "delta jest ujemna: 0 rozwiazañ";
    }
    else {
        cout << "delta: "<< dzialanie.delta << endl;
        cout << "x1= " << (((-1.0* dzialanie.b)-sqrt(dzialanie.delta))/(2*dzialanie.a)) << endl;
        cout << "x2= "<< (((-1.0 * dzialanie.b)+sqrt(dzialanie.delta))/(2*dzialanie.a)) << endl;
    }

}
