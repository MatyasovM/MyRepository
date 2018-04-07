// Copyright 2018 Matyasov Mixail

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Matyasov_Mixail_ComplexNumberTest, can_copy_complex_number)
{
    ComplexNumber num1(1.0, 2.0);
    ComplexNumber num2(1.0, 2.0);

    EXPECT_EQ(num1, num2);
}