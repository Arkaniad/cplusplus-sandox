#include <iostream>

int main(){
  using namespace std;
  unsigned short shortVar=      5;
  unsigned long  longVar =  65536;
  long           sVar    = -65536;

  cout << "shortVar:\t" << shortVar;
  cout << "\tAddress of shortVar:\t";
  cout << &shortVar << endl;
  
  cout << "longVar:\t" << longVar;
  cout << "\tAddress of longVar:\t";
  cout << &longVar << endl;
  
  cout << "sVar:\t\t" << sVar;
  cout << "\tAddress of sVar:\t";
  cout << &sVar << endl;

  return 0;
}
  
