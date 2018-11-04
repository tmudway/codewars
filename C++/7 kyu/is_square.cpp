// https://www.codewars.com/kata/54c27a33fb7da0db0100040e

#import <math.h>

bool is_square(int n)
{
  return (sqrt(n) == floor(sqrt(n)));
}