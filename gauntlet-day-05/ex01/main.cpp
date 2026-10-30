#include "SaveGameFacade.hpp"

int main()
{
	SaveGameFacade save;
	save.save(GameState{3, 27}, "save.dat");
}
