#include <iostream>
using namespace std;
void mod(int ptr){
	*ptr = new int;
	*ptr = 1;
}
int main(){
	int * p_heapVar = 0;
	mod(p_heapVar);
	cout << "p_heapVar: " << *p_heapVar << endl;
}

