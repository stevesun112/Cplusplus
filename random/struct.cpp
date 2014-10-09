#include<iostream>
using namespace std;
#define SIZE 100

int main()
{
  struct Person{
    char name[SIZE];
    void speak(){    
      cout << "I'm a person!" << endl;}
  };

  struct Student : Person{
  };

  Student *ps = new Student();
  ps->speak();

};
