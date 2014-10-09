#include<iostream>
using namespace std;

#define NAME_SIZE 50 //keep in mind, when defining a macro, NO semicolon is needed in the end!!! Cannot have a semicolon there!!!

class person {
  char name[NAME_SIZE];

public:
  char job[100];
virtual void speak(){
    cout << "I'm a person.\n";
  }

};

class person_1 : public person{
  char sex[10];
public:
virtual void speak(){
    cout << "I'm a student!\n";
  }
};

int main()
{
  person *p1 = new person();
  person_1 *p2 = new person_1();
  p1->speak();
  p2->speak();
  return 0;
}
