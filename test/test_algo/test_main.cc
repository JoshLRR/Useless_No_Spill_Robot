// #include <unity.h>
// #include "test_algo.h"

// void test_multiply_positive() {
//     TEST_ASSERT_EQUAL(6, multiply(2, 3));
// }

// void test_multiply_negative() {
//     TEST_ASSERT_EQUAL(-15, multiply(-5, 3));
// }

// int main() {
//     UNITY_BEGIN();
//     RUN_TEST(test_multiply_positive);
//     RUN_TEST(test_multiply_negative);
//     return UNITY_END();
// }

#if defined(ARDUINO)
#include <Arduino.h>
#else
#include <stdio.h>
#endif

#include <unity.h>
#include "test_algo.h"

void test_mult() {
    TEST_ASSERT_EQUAL(12, multiply(3, 4));
}

#if defined(ARDUINO)
void setup() {
    delay(2000);
    Serial.begin(115200);
    UNITY_BEGIN();
    RUN_TEST(test_mult);
    UNITY_END();
}

void loop() {}
#else
int main() {
    UNITY_BEGIN();
    RUN_TEST(test_mult);
    return UNITY_END();
}
#endif
