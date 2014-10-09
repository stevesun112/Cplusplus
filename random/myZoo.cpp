//I made up this small code by myself, but refreshed something really important: for any parent classes, if they have a virtual member function that is not defined in them, then these parent classes must be subclassed to create an object of its class. Otherwise they cannot create instances of their type.

#include<iostream>

using namespace std;

#define SIZE 100

class Animal {
  char sex[SIZE];
public:
  char name[SIZE];

virtual void speak(){
    cout << "I'm an animal!\n";
  }
  //  virtual void talk() = 0;
};

  class Monkey : public Animal{
    char name[SIZE] = "Monkey";
    virtual void speak(){
      cout << "I'm a Monkey!\n";
    }
  };

  class Snake : public Animal{
    char name[SIZE] = "Snake";
    virtual void speak(){
      cout << "I'm a snake!\n";
    }
  };


int main()
{
  int choice;
  Animal *p1 = new Snake();
  Animal *p2 = new Monkey();
  cout << "Please choose from 1) a snake; 2) a monkey!\n";
  cin >> choice;
  if(choice == 1)
    {    p1->speak();
      //      p1->talk();
}
  else if(choice == 2){
    p2->speak();
    //    p2->talk();
}
  else
    cout << "Please enter either 1 or 0, thanks!\n";
  return 0;

}
