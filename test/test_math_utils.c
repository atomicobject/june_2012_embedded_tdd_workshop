#include "unity.h"

#include "math_utils.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_MathUtils_Divide(void)
{
  TEST_ASSERT_EQUAL( 10,                 MathUtils_Divide(100,  10) );
  TEST_ASSERT_EQUAL( DIVIDE_BY_ZERO_ERR, MathUtils_Divide(1000,  0) );
  TEST_ASSERT_EQUAL( 5,                  MathUtils_Divide(-42,  -8) );
}

void test_MathUtils_Clamp(void)
{
  TEST_ASSERT_EQUAL( 15, MathUtils_Clamp(10, 20, 15) );
  TEST_ASSERT_EQUAL( 10, MathUtils_Clamp(10, 20,  5) );
  TEST_ASSERT_EQUAL( 20, MathUtils_Clamp(10, 20, 47) );
  
  TEST_ASSERT_EQUAL( 10, MathUtils_Clamp(10, 20, 10) );
  TEST_ASSERT_EQUAL( 20, MathUtils_Clamp(10, 20, 20) );
}
