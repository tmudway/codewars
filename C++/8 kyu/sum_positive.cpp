https://www.codewars.com/kata/5715eaedb436cf5606000381

#include <vector>

int positive_sum (const std::vector<int> arr){
  
  int sum = 0;
  
  // Add the value, its absolute and then divide by 2. Eliminates all negatives
  for (auto&n : arr) sum += (n + std::abs(n)) / 2;
  
  return sum;
}