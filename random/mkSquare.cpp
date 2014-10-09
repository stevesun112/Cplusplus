#include <iostream>

using namespace std;

int * mkSquare(int n){
  int sq[n];
  for(int i = 1; i <= n; i++)
    sq[i] = i*i;
  return sq;
}

int main()
{
  int num;
  cout << "Please enter a number here:\n";
  cin >> num;

    int * result = mkSquare(num);

  for(int counter = 0; counter < num; counter++){

    cout << result[counter] << endl;
  }
  return 0;
}
