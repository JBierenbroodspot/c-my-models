#include "unity.h"

#include "perceptron.h"

void setUp(void)
{
    // set stuff up here
}

void tearDown(void)
{
    // clean stuff up here
}

void test_perceptron_succeeds()
{
    TEST_ASSERT_EQUAL(53, test_perceptron());
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_perceptron_succeeds);

    return UNITY_END();
}