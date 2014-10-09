//this is an example template I copied from internet

#include <iostream>
using namespace std;

template<class T>
class mypair {
  T a,b;
public:
  mypair(T first, T second){
    a = first; b = second;}
  T getmax();
};

template<class T>
T mypair<T>::getmax(){
  T retval;
retval = a>b? a : b ;
 return retval;
} 

int main(){
  mypair <int> myexample(2,20);
  cout << myexample.getmax()<<endl;
  return 0;
}
