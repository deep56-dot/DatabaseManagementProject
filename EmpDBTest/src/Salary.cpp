#include "../Fixtures/SalaryFixture.h"
#include "gtest/gtest.h"

TEST_F(SalaryFixture, IncrementTest) {
	double d1 = s1.getBaseSalary();
	s1.increment(25, s1.getId());

	double d2 = d1 + (d1 * 0.25);
	ASSERT_DOUBLE_EQ(s1.getBaseSalary(), d2);
	ASSERT_DOUBLE_EQ(s1.getAmount(), s1.getBaseSalary() + s1.getBonus());
}


TEST_F(SalaryFixture, UpdateTest) {
	ASSERT_FALSE(s3.updateSalary()); // Fail beacuse Sid is not in table
	s2.updateSalary();
	ASSERT_DOUBLE_EQ(s2.getAmount(), s2.getBaseSalary() + s2.getBonus()); // Success base_salary  
	s4.updateSalary();
	ASSERT_DOUBLE_EQ(s4.getAmount(), s4.getBaseSalary() + s4.getBonus()); // Success bonus 
}
