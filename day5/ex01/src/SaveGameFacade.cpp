#include "SaveGameFacade.hpp"
#include <iostream>
#include <string>

void SaveGameFacade::save(const GameState &state, const std::string &path)
{
	std::string text = m_serializer.serialize(state);
	std::string packed = m_compressor.compress(text);
	unsigned sum = m_checksum.of(packed);
	m_writer.write(path, packed, sum);
	std::cout << "save complete\n";
}
