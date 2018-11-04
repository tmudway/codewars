//  https://www.codewars.com/kata/56606694ec01347ce800001b

namespace Triangle
{
  bool isTriangle(int a, int b, int c)
  {
    // Negative or zero triangles
    if ( a <= 0 || b <= 0 || c <= 0) return false;
    
    // Invalid triangles
    if (a <= c - b || b <= a - c || a <= b - c) return false;
    
    return true;
  }
};