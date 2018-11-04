// https://www.codewars.com/kata/555eded1ad94b00403000071

#include <math.h>

std::string seriesSum(int n)
{

    double result = 0.0;
    
    if (n == 0) return "0.00";
    
    for (int i = 0; i < n; i++)
    {
        result += 1.0 / (1 + (3 * i));
    }
    
    result = floor(result * 100 + 0.5) / 100;
    
    return std::to_string(result).substr(0, 4);
}