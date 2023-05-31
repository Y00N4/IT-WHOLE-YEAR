#include <iostream>

// struktury w c++
// struct

using namespace std;
  struct Person {
    string name;
    int age;
    float height;

    };
int main()


{    Person p1;

     p1.name="Jan";
     p1.age=20;
     p1.height=1.80;

     cout << p1.name << p1.height << p1.age << endl;

     Person dziennik[3];

     dziennik[0].name="AAA";
     dziennik[0].age=12;
     dziennik[0].height=1.30;

     dziennik[1].name="BBB";
     dziennik[1].age=12;
     dziennik[1].height=1.45;

     dziennik[2].name="CCC";
     dziennik[2].age=12;
     dziennik[2].height=1.60;

     dziennik[3]= {"DDD", 12, 1.55};

     for (auto element: dziennik){
        cout << element.name << element.age << element.height<< endl;

     }
    return 0;
}
