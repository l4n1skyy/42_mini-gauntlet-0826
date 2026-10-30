#include "Checksum.hpp"
#include <iostream>
#include <string>

unsigned Checksum::of(const std::string &packed) const
{
	unsigned sum = 0;
	for (const auto &c : packed)
		sum += static_cast<unsigned char>(c);
	std::cout << "checksum -> 0x" << std::hex << std::uppercase << sum
			  << std::dec << "\n";
	return sum;
}
