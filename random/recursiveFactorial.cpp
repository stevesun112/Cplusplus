#include<iostream>
using namespace std;

long rec_fac(int n);

long rec_fac(int n){
  if(n <= 1)
    return 1;
  else
    return (n*rec_fac(n-1));
}

int main()
{
  cout << "Please enter an integer here:\n";
  int input;
  cin >> input; 
 cout << "The factorial of " << input << " is " << rec_fac(input) <<".\n";
  return 0;
}
