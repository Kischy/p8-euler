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


TEST_F(LargestProductTester, LargestMultipleOfwith2Digits) {
	
	//ASSERT_EQ(largestproduct.get_largest_product("199", 2), 81LL);
	ASSERT_EQ(largestproduct.get_largest_product("81435", 2), 15LL);
}

