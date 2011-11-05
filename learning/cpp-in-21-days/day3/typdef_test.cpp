#include <iostream>

// Demonstrates typdef calls.

typedef unsigned short int USHORT;

int main (){
	using std::cout;
	using std::endl;

	USHORT Width = 5, Length = 10, Area = (Width * Length);
	cout << "   Area Calculation (USHORT)   " << endl;
	cout << "===============================" << endl;
	cout << "Width: \t\t" << Width << endl;
	cout << "Length: \t" << Length << endl;
	cout << "Area: \t\t" << Area << endl;
	return 0;
}

