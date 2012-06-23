#ifndef MATH_UTILS_H
#define MATH_UTILS_H

#include <limits.h>

#define DIVIDE_BY_ZERO_ERR (INT_MIN)

int MathUtils_Divide(int dividend, int divisor);

int MathUtils_Clamp(int min, int max, int value);

#endif /* MATH_UTILS_H */ 
