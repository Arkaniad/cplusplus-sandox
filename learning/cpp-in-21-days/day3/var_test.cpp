// Demonstration of the use of variables in C++

#include <iostream>

int main()
{
	using std::cout;
	using std::endl;
	
	unsigned short int Width = 5, Length = 10; // Defines and assigns two variables at once, a devious trick
	
	// Now the area of the imaginary rectangle will be calculated!

	unsigned short int Area = (Width * Length);
	cout << "   Area Calculation   " << endl;
	cout << "======================" << endl;	
	cout << "Width: \t\t" << Width << endl;
	cout << "Length: \t" << Length << endl;
	cout << "Area: \t\t" << Area << endl;
	return 0; // No error, be nice :P
}
