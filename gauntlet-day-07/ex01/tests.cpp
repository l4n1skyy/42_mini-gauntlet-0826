#include "Inventory.hpp"
#include "catch_amalgamated.hpp"
#include <iostream>

struct InventoryFixture
{
	Inventory inv;
	InventoryFixture()
	{
		inv.add("potion");
		inv.add("sword");
	}
};

TEST_CASE_METHOD(InventoryFixture, "adding an item raises the count")
{
	inv.add("elixir");
	std::cout << inv.count() << "\n";
	inv.printall();
	std::cout << "\n";
	CHECK(inv.count() == 3);
}

TEST_CASE_METHOD(InventoryFixture,
				 "has finds an added item and rejects a missing one")
{
	inv.printall();
	std::cout << "\n";
	CHECK(inv.has("potion"));
	CHECK_FALSE(inv.has("elixir"));
}

TEST_CASE_METHOD(InventoryFixture,
				 "removing an item drops the count and has stops finding it")
{
	inv.printall();
	std::cout << "\n";
	inv.remove("sword");
	CHECK(inv.count() == 1);
	CHECK_FALSE(inv.has("sword"));
}

TEST_CASE_METHOD(InventoryFixture, "removing a missing item is a no-op")
{
	inv.printall();
	std::cout << "\n";
	inv.remove("elixir");
	CHECK(inv.count() == 2);
	CHECK(inv.has("potion"));
}
