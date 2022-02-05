#include "unity.h"
#include <mpu6050.h>

TEST_CASE("Test i2c address of mpu6050", "[mpu6050]")
{
    TEST_ASSERT(0x68 == findI2CAddress());
}
