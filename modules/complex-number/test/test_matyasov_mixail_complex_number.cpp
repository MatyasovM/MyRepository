// Copyright 2018 Okunev Boris

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Okunev_Boris_ComplexNumberTest, Two_Same_Complex_Are_Equal) {
	// Arrange
	double re = 1.0;
	double im = 2.0;

	// Act
	ComplexNumber z(re, im);
	ComplexNumber z1(re, im);

	// Assert
	EXPECT_TRUE(z == z1);
}