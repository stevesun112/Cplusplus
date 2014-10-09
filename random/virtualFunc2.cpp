#include<iostream>
using namespace std;

#define NAME_SIZE 50

class Person{
  void speak(){
    cout << "I'm a Person!\n";
  }
public:
  char name[NAME_SIZE];
  int age;
  virtual void addCourse() = 0; // keep in mind to add '=0' at the end of a VIRTUAL function if you don't want or don't need to define it in the parent class
};

  class Student : public Person{
  public:
    virtual void addCourse(){
      cout << "I'm a student and I want to take this course!\n";
    }
  };

  class Professor : public Person{
  public:
    virtual void addCourse(){
      cout << "I'm a professor and I'll teach this course this year.\n";
    }
  };


  int main(){
    Student *ps = new Student();
    Professor *pp = new Professor();
    ps->addCourse();
    pp->addCourse();
    delete ps;
    delete pp;
    return 0;
  }
