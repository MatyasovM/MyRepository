// Copyright 2018 Matyasov Mixail

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Matyasov_Mixail_ComplexNumberTest, can_plus_two_number) {
    // Arrange
    double re = 1.0;
    double im = 2.0;
    double resRe = 2.0;
    double resIm = 4.0;

    // Act
    ComplexNumber z(re, im);
    ComplexNumber z1(re, im);
    ComplexNumber result(resRe, resIm);
    z = z + z1;

    // Assert
    EXPECT_TRUE(z == result);
}

TEST(Matyasov_Mixail_ComplexNumberTest, two_opposite_number_are_not_equal) {
    // Arrange
    double re = 1.0;
    double im = 2.0;

    double re1 = 2.0;
    double im1 = 1.0;

    // Act
    ComplexNumber z(re, im);
    ComplexNumber z1(re1, im1);

    // Assert
    EXPECT_TRUE(z != z1);
}

TEST(Matyasov_Mixail_ComplexNumberTest, sum_equal_difference) {
    // Arrange
    double re = 1.0;
    double im = 2.0;

    double re1 = 2.0;
    double im1 = 3.0;

    // Act
    ComplexNumber z(re, im);
    ComplexNumber z1(re1, im1);
    ComplexNumber z2(re1, im1);
    z1 = z1 - z;
    z1 = z1 + z;

    // Assert
    EXPECT_EQ(z1, z2);
}

TEST(Matyasov_Mixail_ComplexNumberTest, negative_and_positive_number_are_not_equal) {
    // Arrange
    double re = 1.0;
    double im = 2.0;

    double re1 = -1.0;
    double im1 = -2.0;

    // Act
    ComplexNumber z(re, im);
    ComplexNumber z1(re1, im1);

    // Assert
    EXPECT_TRUE(z1 != z);
}
