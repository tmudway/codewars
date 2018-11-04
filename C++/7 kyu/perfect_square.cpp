https://www.codewars.com/kata/56269eb78ad2e4ced1000013

#include <math.h>
#include <stdio.h>

long int findNextSquare(long int sq) {
  // Return the next square if sq if a perfect square, -1 otherwise
  
  long int root = sqrt(sq * 1.0);
  long int result = (root * root == sq) ? ((root + 1) * (root + 1)) : -1;
  
  return result;
}