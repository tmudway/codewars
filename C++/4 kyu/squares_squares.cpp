// https://www.codewars.com/kata/54eb33e5bc1a25440d000891

#import <math.h>

class Decomp
{
  public:
  static std::vector<long long> decompose(long long n){
    // all values below 2 give invalid solutions
    if (n <= 2) return {};
    
    long long remaining = n * n;
    long long current = n-1;
    std:: vector<long long> results;
    
    while (current > 0){
      remaining -= current * current;
      results.push_back(current);
      current = sqrt(remaining);
    }
    
    // Reverse the array to get it in ascending order
    std::reverse(results.begin(), results.end());
    return results;
  }
};
