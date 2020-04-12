//!gcc {0} -IC -I../include/ -o test5; ./test5

#include <exotic/cester.h>

CESTER_TEST(assert_not, test_instance,
    cester_assert_false(1 == 2);
    cester_assert_false(2 == 1);
)

CESTER_TEST(assert, test_instance,
    cester_assert_true(1 == 1);
    cester_assert_true(2 == 2);
)

CESTER_OPTIONS(
    CESTER_NOCOLOR();
    CESTER_VERBOSE();
    CESTER_MINIMAL();
)