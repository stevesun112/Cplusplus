#include<iostream>
using namespace std;

int main(){
  int i, j, counter = 0;
  for(i = 1; i < 10; i++)
    for(j = 1; j < 10; j++){
      cout << i*j <<"\t";
      counter++;
	if(counter%9 == 0)
	cout << endl;
    }
return 0;
}
