#include <iostream>
#include "mathlib/math.h"
#include "netlib/net.h"

int main(int argc, char *argv[])
{
	int sum = Math::Add(5, 2);
	bool connected = Network::Connect();

	std::cout << sum << std::endl;
	std::cout << connected << std::endl;
	
	std::cin.get();
	return 0;
}