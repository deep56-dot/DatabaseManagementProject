#include "../Fixtures/EmployeeFixture.h"
#include "gtest/gtest.h"

TEST_F(EmployeeFixture,constructionTest) {
	ASSERT_EQ(emp.getId(), 1);
	ASSERT_EQ(emp.getFirstname(), "Deep");
	ASSERT_EQ(emp.getLastname(), "Dhuvad");
	ASSERT_EQ(emp.getEmail(), "deep@gmail.com");
	ASSERT_EQ(emp.getMobile(), "1234567890");
	ASSERT_EQ(emp.getDob(), "16-08-2003");
	ASSERT_EQ(emp.getDoj(), "01-01-2024");
	ASSERT_EQ(emp.getManagerId(), 1);
	ASSERT_EQ(emp.getDepartmentId(), 1);
	ASSERT_EQ(emp.getGender(), Gender::Male);
}

TEST_F(EmployeeFixture, InsertTest) {
	ASSERT_TRUE(e1.insertEmployee());  // Success
	ASSERT_FALSE(e2.insertEmployee());  // Fail because Employee is already exist  
	ASSERT_FALSE(e3.insertEmployee()); // Fail Beacause Manager is not available  
	ASSERT_FALSE(e4.insertEmployee()); // Fail Beacause Department is not available   
}



TEST_F(EmployeeFixture, UpdateTest) {
	ASSERT_FALSE(e6.updateEmployee()); //  updated manager id is not available 
	EXPECT_FALSE(e7.updateEmployee()); // Updated Department id is not avialable 
	EXPECT_FALSE(e8.updateEmployee()); // Enter Employee is not aviable   
	ASSERT_TRUE(e1.updateEmployee()); // Sucess     
}

TEST_F(EmployeeFixture, DeleteTest) {
	ASSERT_FALSE(e9.deleteEmployee()); // Fail Beacuse  it is a manager of other employeees   
	ASSERT_FALSE(e8.deleteEmployee()); // Fail because Employee with given id is not available   

	ASSERT_TRUE(e1.deleteEmployee());  // Suceess   
}