#include <iostream>

int main(){
	using std::cout;
	using std::endl;
	cout << "The size of an int is:\t\t"
		<< sizeof(int)	<< " bytes." << endl;
	
	cout << "The size of a short is:\t\t"
		<< sizeof(short)	<< " bytes." << endl;

	cout << "The size of a long is:\t\t"
		<< sizeof(long)	<< " bytes." << endl;

	cout << "The size of a char is:\t\t"
		<< sizeof(char)	<< " bytes." << endl;
	
	cout << "The size of a float is:\t\t"
		<< sizeof(float)	<< " bytes." << endl;
	
	cout << "The size of a double is:\t"
		<< sizeof(double)	<< " bytes." << endl;

	cout << "The size of a bool is:\t\t"
		<< sizeof(bool)	<< " bytes." << endl;
}
		
