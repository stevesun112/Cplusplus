#include <iostream>
using namespace std;

#define NAME_SIZE 50
#define JOB_SIZE 50

class person{
  int age;
  char name[NAME_SIZE];
  
public:
  void speak(){
    cout << "I'm a(n) " << job << ".\n";
  }

  char job[JOB_SIZE];
};

  class person_1 : public person{
  public:
    void speak(){
      cout << "I'm a student!\n";
    }
  };

int main(){
  person_1 *p1 = new person_1();
  p1->speak();
  delete p1;

  person *p2 = new person();
  cout << "Please enter your title here:\n";
  cin >> p2->job;
  p2->speak();
  delete p2;
  return 0;
}
