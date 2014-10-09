#include<iostream>
using namespace std;
#define SIZE 100
class Empty{};
struct Dog{
public:
  char breed[SIZE];
  virtual void bark(){
    cout << "Woooow, wooow!\n";
  }
};

struct Puppy: Dog{
  virtual void bark(){
    cout << "I'm a little cutie!\n";
  }
};

int main()
{
  Empty *p1 = new Empty();
  cout << sizeof(p1)<<endl;
  Dog *p2 = new Dog();
  Puppy *p3 = new Puppy();
  p2->bark();
  p3->bark();
  return 0;

}
