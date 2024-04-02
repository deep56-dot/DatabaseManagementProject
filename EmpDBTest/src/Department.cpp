#include "../Fixtures/DepartmentFixture.h"
#include "gtest/gtest.h"

TEST_F(DepartmentFixture, InsertTest) {
	ASSERT_FALSE(d1.insertDepartment()); // Fail because With given department id there is already some other department 
	ASSERT_FALSE(d2.insertDepartment());  // Fail because enterd manager is not in manager table  
	ASSERT_TRUE(d3.insertDepartment()); // Success  
	ASSERT_TRUE(d4.insertDepartment()); // Success 
}

TEST_F(DepartmentFixture, UpdateTest) {
	ASSERT_FALSE(d2.updateDepartment());  // Fail because manager id is not in database  
	ASSERT_FALSE(d5.updateDepartment());  // Fali beacuse department is not in table      
	ASSERT_TRUE(d3.updateDepartment());   // Success    
}

TEST_F(DepartmentFixture, DeleteTest) {
	ASSERT_FALSE(d1.deleteDepartment()); // Fail because there is employee which are working in this department 
	ASSERT_FALSE(d5.deleteDepartment()); // Fail beacuse there is no department like this id 
	ASSERT_TRUE(d3.deleteDepartment());  // Success id
	ASSERT_TRUE(d4.deleteDepartment());  // Success id
}