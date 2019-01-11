#include <iostream>

int main(int argc, char *argv[])
{
	unsigned u1=10, u2=42;
	std::cout << u1 - u2 << std::endl;
	std::cout << u2 - u1 << std::endl;

	int i1=10, i2=42;
	std::cout << i1 - i2 << std::endl;
	std::cout << i2-i1 << std::endl;

	std::cout << i1-u2 << std::endl;
	std::cout << i2-u1 << std::endl;

	std::cout << -1u << std::endl;
	std::cout << -1l << std::endl;
	std::cout << -5.0f << std::endl;

	std::cout << 5e5 << std::endl;

	return 0;
}
