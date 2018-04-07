// Copyright 2018 Matyasov Mixail

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Matyasov_Mixail_ComplexNumberTest, can_copy_complex_number)
{
    // Arrange
    double re = 1.0;
    double im = 2.0;

    // Act
    ComplexNumber z(re, im);
    ComplexNumber z1(re, im);

    // Assert
    EXPECT_TRUE(z == z1);
}