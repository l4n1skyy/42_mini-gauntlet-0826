#include "Writer.hpp"
#include <fstream>
#include <iostream>
#include <string>

void Writer::write(const std::string &path, const std::string &packed,
				   unsigned sum) const
{
	std::ofstream file(path);
	file << packed;
	(void)sum;
	std::cout << "write -> " << path << " (" << packed.size() << " bytes)\n";
}
