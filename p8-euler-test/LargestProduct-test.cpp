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

	ASSERT_EQ(largestproduct.get_largest_product("81435", 2), 15LL);
}

TEST_F(LargestProductTester, LargestMultipleOfwith3Digits) {

	ASSERT_EQ(largestproduct.get_largest_product("81435", 3), 60LL);
}

TEST_F(LargestProductTester, LargestMultipleOfwith4Digits) {

	ASSERT_EQ(largestproduct.get_largest_product("82435", 4), 192LL);
}

TEST_F(LargestProductTester, NumberOfDigitsAndStringLengthAreTheSameLeadsToMultipleOfAllTheNumbers) {

	ASSERT_EQ(largestproduct.get_largest_product("82435", 5), 960LL);
}


TEST_F(LargestProductTester, ReturnsZeroOnToSmallString) {

	ASSERT_EQ(largestproduct.get_largest_product("82435", 10), 0LL);
}

TEST_F(LargestProductTester, ReturnsZeroOnNonNumberString) {

	ASSERT_EQ(largestproduct.get_largest_product("ABC", 2), 0LL);
}

