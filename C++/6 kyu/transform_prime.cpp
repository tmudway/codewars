// https://www.codewars.com/kata/5a946d9fba1bb5135100007c

#include <vector>
#include <numeric>
#include <math.h>

using namespace std; 

bool isZero(int i){ return i == 0; }

int minimumNumber (vector <int> numbers )
{

    // Find the first 100000 primes using sieve of eratosthenes
    
    // Populate the vector
    vector <int> primes;
    for (int i = 0; i < 100000; i++)
        primes.push_back(i);
    
    // remove non-primes
    for (int i = 2; i <= 50000; i++){
        for (int j = 2; j <= 100000 / i; j += 1){
            primes[j * i] = 0;
        }
    }
    
    // extract list of primes
    remove_if(primes.begin(), primes.end(), isZero);
     
    // sum values
    long int total = accumulate(begin(numbers), end(numbers), 0, plus<int>());
    int i = 0;
    
    while (true){
        if (total <= primes[i]){ break; }
        i++;
    }
    
    return primes[i] - total;
}