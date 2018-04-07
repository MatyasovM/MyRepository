// Copyright 2018 Matyasov Mixail

//#include <gtest/gtest.h>
//
//#include "include/complex_number.h"
//
//TEST(Matyasov_Mixail_ComplexNumberTest, can_copy_complex_number)
//{
//	ComplexNumber number(2, 1);
//	ComplexNumber copNumber(number);
//
//	EXPECT_EQ(number, copNumber);
//}
//
//TEST(Matyasov_Mixail_ComplexNumberTest, can_plus_negative_number)
//{
//	ComplexNumber number(-2, -1);
//	ComplexNumber copNumber(-3, -1);
//
//	EXPECT_EQ(number + copNumber, *(new ComplexNumber(-5, -2)));
//}
//
//TEST(Matyasov_Mixail_ComplexNumberTest, can_compare_opposite_number)
//{
//	ComplexNumber number(-2, -1);
//	ComplexNumber copNumber(-1, -2);
//
//	EXPECT_NE(number, copNumber);
//}
//
//TEST(Matyasov_Mixail_ComplexNumberTest, base_number_and_copy_is_not_same_object)
//{
//	ComplexNumber number(-2, -1);
//	ComplexNumber copNumber(number);
//	number.setIm(5);
//
//	EXPECT_NE(number.getIm(), copNumber.getIm());
//}
//
//TEST(Matyasov_Mixail_ComplexNumberTest, multyple_do_not_change_base_number)
//{
//	ComplexNumber number(-2, -1);
//	ComplexNumber copNumber(number);
//	ComplexNumber buf(number);
//	ComplexNumber result = number + copNumber;
//
//	EXPECT_EQ(number, buf);
//	EXPECT_EQ(copNumber, buf);
//}
