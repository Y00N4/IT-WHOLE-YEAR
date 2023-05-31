#include <iostream>
// klasa prostokat niech wyliczy sie obw, pole.

using namespace std;
class Trojkat {
  private:
  int pole;
  int obwod;
  public:
  int bokA;
  int bokB;
  int bokC;
  int H;

  int wyliczaniepolatrojkata(){
  return ((this->bokA *this->H)/2);
  }
  int wyliczaniebwodutrojakta(){
      cout << bokA<<endl;
      cout << bokB<<endl;
      cout << bokC<<endl;
      cout << H<< endl;
  return this->bokA+this->bokB+this->bokC;
  }

  void wyswietlanieinftrojkat(){
  cout << "pole trojkata jest rowne: " << this->pole << endl;
  cout << "obwod trojkata jest rowny: " << this->obwod <<endl;
  }
  Trojkat(int bokA, int bokB,int bokC, int H){
      this->bokA= bokA;
      this->bokB=bokB;
      this->bokC=bokC;
      this->H=H;
      this->obwod = wyliczaniebwodutrojakta();
      this->pole = wyliczaniepolatrojkata();
  }

 };
