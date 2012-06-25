#include "math_utils.h"

int MathUtils_Divide(int dividend, int divisor)
{
  if (0 == divisor)
  {
    return DIVIDE_BY_ZERO_ERR;
  }
  else
  {
    return dividend / divisor;
  }
}

int MathUtils_Clamp(int min, int max, int value)
{
  if (value < min) return min;
  if (value > max) return max;
  return value;
}
