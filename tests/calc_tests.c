#include "tests.h"

START_TEST(calc_1) {
  char *input = "56.63+44.2-3242";
  double output = 0;
  double expec = 56.63 + 44.2 - 3242;
  int result = calculate(input, &output);
  ck_assert_int_eq(result, 0);
  ck_assert_double_eq(expec, output);
}
END_TEST

START_TEST(calc_2) {
  char *input = "2/(3+2)*5";
  double output = 0;
  int result = calculate(input, &output);
  ck_assert_int_eq(result, 0);
  ck_assert_double_eq(2, output);
}
END_TEST

START_TEST(calc_3) {
  char *input = "2+(3+4)*5";
  double output = 0;
  int result = calculate(input, &output);
  ck_assert_int_eq(result, 0);
  ck_assert_double_eq(output, 37);
}
END_TEST

START_TEST(calc_4) {
  char *input = "2/(3+sin(1^4))*5";
  double output = 0;
  int result = calculate(input, &output);
  int final_answer = fabs(output - 2.60316947324) < 1e-7;
  ck_assert_int_eq(result, 0);
  ck_assert_int_eq(final_answer, 1);
}
END_TEST

START_TEST(calc_5) {
  char *input = "(5+sin(0)/(2^3*atan(2)))";
  double output = 0;
  int result = calculate(input, &output);
  ck_assert_int_eq(result, 0);
  ck_assert_double_eq(output, 5);
}
END_TEST

START_TEST(calc_6) {
  char *input = "-1*(-3+4)-4+(-5+6)";
  double output = 0;
  int result = calculate(input, &output);
  ck_assert_int_eq(result, 0);
  ck_assert_double_eq(-4, output);
}
END_TEST

START_TEST(calc_7) {
  char *input = "-1*(-3+4)-1-(-3-2)";  // 1um3um4+*1-3um2--   =3
  double output = 0;
  calculate(input, &output);
  int result = calculate(input, &output);
  ck_assert_int_eq(result, 0);
  ck_assert_double_eq(output, 3);
}
END_TEST

START_TEST(calc_8) {
  char *input = "(sin(1)*2+3)/10+0.53171+4.6";
  double output = 0;
  int result = calculate(input, &output);
  int final_answer = fabs(output - 5.60000419696) < 1e-7;
  ck_assert_int_eq(result, 0);
  ck_assert_double_eq(final_answer, 1);
}
END_TEST

START_TEST(calc_9) {
  char *input = "(((3+2)))";  //(((+
  double output = 0;
  int result = calculate(input, &output);
  ck_assert_double_eq(output, 5);
  ck_assert_int_eq(result, 0);
}
END_TEST

START_TEST(calc_10) {
  char *input = "((sin(1)*2+3)/10+0.53171)";
  double output = 0;
  int result = calculate(input, &output);
  int final_answer = fabs(output - 1.00000419696) < 1e-7;
  ck_assert_int_eq(result, 0);
  ck_assert_double_eq(final_answer, 1);
}
END_TEST

START_TEST(calc_11) {
  char *input = "cos(1)-3*2+5";
  double output = 0;
  int result = calculate(input, &output);
  int final_answer = fabs(output - -0.45969769413) < 1e-7;
  ck_assert_int_eq(result, 0);
  ck_assert_double_eq(final_answer, 1);
}
END_TEST

START_TEST(calc_12) {
  char *input = "ln(4)+log(x)+sin(0.5)+cos(1)-3*2+5";
  double output = 0;
  int result = calculate(input, &output);
  int final_answer = fabs(output - 3.40602220559) < 1e-7;
  ck_assert_int_eq(result, 0);
  ck_assert_double_eq(final_answer, 1);
}
END_TEST

START_TEST(calc_13) {
  char *input = "-3+3+66.2";
  double output = 0;
  int result = calculate(input, &output);
  ck_assert_int_eq(result, 0);
  ck_assert_double_eq(output, 66.2);
}
END_TEST

START_TEST(calc_14) {
  char *input = "tan(1)+sqrt(4)+acos(1)+asin(0)mod2";
  double output = 0;
  int result = calculate(input, &output);
  int final_answer = fabs(output - 3.55740772465) < 1e-7;
  ck_assert_int_eq(result, 0);
  ck_assert_double_eq(final_answer, 1);
}
END_TEST

START_TEST(calc_15) {
  char *input = "2+12.3.3";
  double output = 0;
  int result = calculate(input, &output);
  int final_answer = fabs(output - 0) < 1e-7;
  ck_assert_int_eq(result, 5);
  ck_assert_double_eq(final_answer, 1);
}
END_TEST

Suite *calc_tests(void) {
  Suite *s = suite_create("\033[44m-=CALC=-\033[0m");
  TCase *tc = tcase_create("calc_tc");

  tcase_add_test(tc, calc_1);
  tcase_add_test(tc, calc_2);
  tcase_add_test(tc, calc_3);
  tcase_add_test(tc, calc_4);
  tcase_add_test(tc, calc_5);
  tcase_add_test(tc, calc_6);
  tcase_add_test(tc, calc_7);
  tcase_add_test(tc, calc_8);
  tcase_add_test(tc, calc_9);
  tcase_add_test(tc, calc_10);
  tcase_add_test(tc, calc_11);
  tcase_add_test(tc, calc_12);
  tcase_add_test(tc, calc_13);
  tcase_add_test(tc, calc_14);
  tcase_add_test(tc, calc_15);

  suite_add_tcase(s, tc);
  return s;
}