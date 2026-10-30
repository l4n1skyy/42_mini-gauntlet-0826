#include "Inventory.hpp"
#include "catch_amalgamated.hpp"

TEST_CASE("adding an item raises the count")
{
	Inventory inv;
	inv.add("test");
	CHECK(inv.count() == 1);
}

TEST_CASE("has finds an added item and rejects a missing one")
{
	Inventory inv;
	inv.add("test1");
	CHECK(inv.has("test1"));
	CHECK_FALSE(inv.has("test2"));
}

TEST_CASE("removing an item drops the count and has stops finding it")
{
	Inventory inv;
	inv.add("test");
	inv.remove("test");
	CHECK(inv.count() == 0);
	CHECK_FALSE(inv.has("test"));
}

TEST_CASE("removing a missing item is a no-op")
{
	Inventory inv;
	inv.add("test1");
	inv.remove("test2");
	CHECK(inv.count() == 1);
	CHECK(inv.has("test1"));
}
