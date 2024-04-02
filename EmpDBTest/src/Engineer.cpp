#include "../Fixtures/EngineerFixture.h"
#include "gtest/gtest.h"

TEST_F(EngineerFixture, InsertTest) {
	ASSERT_TRUE(eg1.insertEngineer());    // Success  
	ASSERT_FALSE(eng.insertEngineer());  // Fail because Employee is already exist  
	ASSERT_FALSE(eg2.insertEngineer()); // Fail Beacause Manager is not available  
	ASSERT_FALSE(eg3.insertEngineer()); // Fail Beacause Department is not available  
}



TEST_F(EngineerFixture, UpdateTest) {
	ASSERT_FALSE(eg4.updateEngineer()); //  updated manager id is not available  
	EXPECT_FALSE(eg5.updateEngineer()); // Updated Department id is not avialable      
	EXPECT_FALSE(eg4.updateEngineer()); // Enter Employee is not aviable      
	ASSERT_TRUE(eng.updateEngineer()); // Sucess         
}

TEST_F(EngineerFixture, DeleteTest) {
	ASSERT_FALSE(eg6.deleteEngineer()); // Fail because Employee with given id is not available    

	ASSERT_TRUE(eg1.deleteEngineer());  // Suceess  ID    
}
