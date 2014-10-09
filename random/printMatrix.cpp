#include<iostream>
using namespace std;

int main()
{
  double num1, num2;
  cout << "Please input two numbers to generate a matrix:\n";
  cin >> num1;
  cin >> num2;
  int i, j, counter = 0;
  for(i = 1; i < num1; i++)
    for(j = 1; j < num2; j++){
      cout << i*j << "\t";
      counter++;
      if(counter%(int)num2 == 0)
	cout << "\n";
    }
  cout << "\n";

  return 0;
}
