#include "Serializer.hpp"
#include <iostream>
#include <string>

std::string Serializer::serialize(const GameState &state) const
{
	std::string result = "level=" + std::to_string(state.level) +
						 ";hp=" + std::to_string(state.hp);
	std::cout << "serialize -> " << result << "\n";
	return result;
}
