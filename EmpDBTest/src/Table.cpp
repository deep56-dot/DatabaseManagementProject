#include "../Fixtures/TableFixture.h"
#include "gtest/gtest.h"

TEST_F(TableFixture, exportValidation) {
	EXPECT_TRUE(t.exportToCsv("Employee","BackUp\\Employee.csv"));
	EXPECT_TRUE(t.exportToCsv("Department", "BackUp\\Department.csv"));
	EXPECT_FALSE(t.exportToCsv("Dept", "BackUp\\Dept.csv"));
}

TEST_F(TableFixture, gettableValidation) {
	EXPECT_NE(t.getTable("Employee"),std::nullopt);
	EXPECT_NE(t.getTable("Department"), std::nullopt);
	EXPECT_EQ(t.getTable("Emp"), std::nullopt);
	EXPECT_EQ(t.getTable("Dept"), std::nullopt);
}

TEST_F(TableFixture, getalltableValidation) {
	auto vec = t.getAllTables();
	EXPECT_GE(vec.size(), 5);
}