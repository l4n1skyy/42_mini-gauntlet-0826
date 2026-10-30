#pragma once

#include <string>

class Writer
{
  public:
	void write(const std::string &path, const std::string &packed,
			   unsigned sum) const;
};
