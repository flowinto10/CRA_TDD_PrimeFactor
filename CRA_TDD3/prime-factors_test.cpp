#include "gmock/gmock.h"
#include "prime-factors.cpp"

class PrimeFixture : public testing::Test {
public:
	PrimeFactors prime_factor;
	vector<int> expected;
};

TEST_F(PrimeFixture, Of1)
{
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1)); // test 테스트
}

TEST_F(PrimeFixture, Of2)
{
	expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2)); // test 테스트
}

TEST_F(PrimeFixture, Of3)
{
	expected = {3};
	EXPECT_EQ(expected, prime_factor.of(3)); // test 테스트
}

TEST_F(PrimeFixture, Of4)
{
	expected = {2,2};
	EXPECT_EQ(expected, prime_factor.of(4)); // test 테스트
} 

TEST_F(PrimeFixture, Of6)
{
	expected = {2,3};
	EXPECT_EQ(expected, prime_factor.of(6)); // test 테스트
}

TEST_F(PrimeFixture, Of9)
{
	expected = {3,3};
	EXPECT_EQ(expected, prime_factor.of(9)); // test 테스트
}
