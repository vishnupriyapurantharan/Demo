#include "unity.h"
#include "calculator.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_division(void)
{
    complex_t C1 = {0, 10};
    complex_t C2 = {10, 0};
    complex_t res = {0, 0};
  TEST_ASSERT_EQUAL(DIV_BY_ZERO, division(&C1, &C2, &res));

    complex_t* ptr1 = NULL;

  TEST_ASSERT_EQUAL(NULL_PTR, division(NULL, NULL, NULL));
}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_division);
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}
