#include <stdio.h>
#include "unity.h"

void test_TheFirst(void)
{
    int a = 1;
    TEST_ASSERT( a == 1 ); 
}

void app_main(void)
{

}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_TheFirst);
    return UNITY_END();
}