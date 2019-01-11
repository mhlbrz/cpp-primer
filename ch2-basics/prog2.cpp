#include <iostream>

int main(int argc, char *argv[])
{
	int input_value;
	std::cin >> input_value;
	std::cout << "input value\t" << input_value << std::endl;

	//int i = { 3.14 }; error narrowing conversion / new standart / list initialization
	int i = 3.14; // just ok, drop fractional part silently 
	int ii = (3.14); // same
	std::cout << "i=" << i << "\tii=" << ii << std::endl;

	//double salary = wage = 9999.9; // initialization is not assignment
	double salary = 9999.9, wage = 9999.9;

	std::cout << "salary\t" << salary << "\twage\t" << wage << std::endl;

	return 0;
}
