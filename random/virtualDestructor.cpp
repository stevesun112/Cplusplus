#include<iostream>
using namespace std;

#define NAME_SIZE 50

class Person{
public:
  virtual ~Person(){
    cout << "Person deleted.\n";
  }
};

  class Student : public Person{
  public:
    virtual ~Student(){
      cout << "Student deleted.\n";
    }
  };

int main(){
  Person *p1 = new Student();
  delete p1;
  return 0;
}
