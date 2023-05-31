class Prostokat {
public:
    float bokA;
    float bokB;

  float liczeniePola() {
  return this->pole=this->bokA*this->bokB;

  }

  float liczenieObwodu(){
  return this->obwod=(this->bokA*2)+(this->bokB*2);

  }
  void wyswietlanie(){
  cout << "Pole prostokata jest rowne " << this->pole;
  cout << "obwod prostokata jest rowne" << this->obwod;
  }
private:
    float pole;
    float obwod;


};
