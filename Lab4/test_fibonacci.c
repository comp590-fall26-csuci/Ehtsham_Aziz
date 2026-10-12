#include "utest.h"
#include "fibonacci.h"

UTEST(fibonacci, terms_1_to_10) {
    int expected[] = {
        1, 1, 2, 3, 5,
        8, 13, 21, 34, 55
    };

    for (int n = 1; n <= 10; n++) {
        EXPECT_EQ(expected[n - 1], fibonacci(n));
    }
}

UTEST(golden_ratio, terms_1_to_10) {
    double expected = 1.618033988749895;

    for (int n = 1; n <= 10; n++) {
        double actual = golden_ratio_approx(n);
        double diff = actual - expected;

        if (diff < 0) {
            diff = -diff;
        }

        EXPECT_TRUE(diff < 0.000001);
    }
}

UTEST_MAIN()