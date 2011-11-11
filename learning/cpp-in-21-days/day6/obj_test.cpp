#define DEBUG
#include <iostream>
#include "object.h"

using namespace std;

int main(void){
  Object object(1);
  cout << "Size of Object: " << sizeof(Object) << " bytes" << endl;
	return 0;
}
