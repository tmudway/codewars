// https://www.codewars.com/kata/541c8630095125aba6000c00

#include <math.h>

int digital_root(int n)
{
    
    int val = n;
    
    while (true){
        // Work out how many decimal places it has and break if the answer is 1
        int size = log10(val) + 1;
        if (size <= 1) break;
        
        int temp = 0;
        
        // Divide by powers of 10 to find the value of the leftmost digit
        // and then use % to find the remainder
        for (int i = size; i >= 0; i--){
            temp += val / pow(10, i);
            val = val % int(pow(10, i));
        }
        // Set val to the calculated value (temp)
        val = temp;
    }
    return val;
}