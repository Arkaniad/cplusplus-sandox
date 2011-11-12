#include <iostream>
using namespace std;

int main(){
	int x, y;
	int * p_x, * p_y;
	p_x = &x;
	p_y = &y;
	x = 4;
	y = 8;
	cout << "x(" << p_x << "): " << x << ", y(" << p_y << "): " << y << endl; 
	cout << "Now the same, but accessed indirectly. " << endl;
	cout << "x(" << p_x << "): " << *p_x << ", y(" << p_y << "): " << *p_y << endl;
}
