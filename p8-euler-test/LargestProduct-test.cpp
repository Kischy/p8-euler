#include "pch.h"

#include "../p8-euler/LargestProduct.h"


class LargestProductTester : public testing::Test
{
public:
	LargestProduct largestproduct;
};

TEST(LargestProductClass, Exists) {
	LargestProduct largestproduct;
}


TEST_F(LargestProductTester, LargestMultipleOf3digitString) {
	
	ASSERT_EQ(largestproduct.get_largest_product("991"), 81LL);
}

