#include<iostream>
using namespace std;

int main()
{
  int age;
  cout << "Please enter your age:\n";
  cin >> age;
  cout << "Your age variable " << age << " is stored at address " << &age <<".\n";
  return 0;
}
