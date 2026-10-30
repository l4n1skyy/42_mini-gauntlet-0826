#include "Compressor.hpp"
#include <iostream>
#include <string>

std::string Compressor::compress(const std::string &text) const
{
	size_t first = text.find("=");
	size_t sep = text.find(";");
	size_t second = text.find("=", sep);

	std::string cstr =
		text.substr(first + 1, sep - first - 1) + ";" + text.substr(second + 1);
	size_t beforeSize = text.size();
	size_t afterSize = cstr.size();
	std::string sstr = "(" + std::to_string(beforeSize) + " -> " +
					   std::to_string(afterSize) + " bytes)";
	std::cout << "compress -> " << cstr << " " << sstr << "\n";
	return cstr;
}
