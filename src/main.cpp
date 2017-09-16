#include <iostream>
#include "mathlib/math.h"

int main(int argc, char *argv[])
{
	int sum = Math::Add(5, 2);
	std::cout << sum << std::endl;
	std::cin.get();
	return 0;
}