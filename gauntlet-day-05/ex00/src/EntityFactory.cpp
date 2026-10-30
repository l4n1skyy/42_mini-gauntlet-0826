#include "EntityFactory.hpp"
#include "Bat.hpp"
#include "Boss.hpp"
#include "Entity.hpp"
#include "Orc.hpp"
#include <memory>

std::unique_ptr<Entity> EntityFactory::make(const std::string &kind)
{
	if (kind == "bat")
		return std::make_unique<Bat>();
	if (kind == "boss")
		return std::make_unique<Boss>();
	if (kind == "orc")
		return std::make_unique<Orc>();
	return nullptr;
}
