#include <iostream>

void print_number(int number);

int main(){
	
	unsigned short int smallNumber;
	smallNumber = 65535;
	print_number(smallNumber);
	smallNumber++;
	print_number(smallNumber);
	smallNumber++;
	print_number(smallNumber);
	return 0;
	
	
}

void print_number(int number){
	using std::cout;
	using std::endl;
	cout << "Number: " << number << endl;
}
	
