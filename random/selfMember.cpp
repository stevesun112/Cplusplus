#include<iostream>

using namespace std;

class Animal{
public: 
 Animal *pa;
  void speak(){
    cout << "Hello world!\n";
  }
};


int main()
{
  Animal * p1 = new Animal();
  p1->pa->speak();
  return 0;
}
