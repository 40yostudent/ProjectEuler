#include "ProjectEulerC.h"

// nth prime number algorithm
void problem_0007() {
    const int PRIMESLENGTH = 10001;
    int* primes = (int*) malloc(PRIMESLENGTH * sizeof(int));
    
    // proven that all primes are in the form '6k +/- 1', this is a switch
    // to advance the candidate of +2 or +4, to be xored with 1 every loop.
    char form_6k_pm1 = 0;

    for (int i = 0; i < PRIMESLENGTH; ++i) {
        primes[i] = 0;
    }

    primes[0] = 2;
    primes[1] = 3;
    primes[2] = 5;
    primes[3] = 7;
    primes[4] = 11;
    primes[5] = 13;

    int candidate = 17;
    int firstEmptyIndex = 6;
    int* lastPrimeInList = primes + PRIMESLENGTH - 1;

    while (*lastPrimeInList == 0) {
        
        int* factor = primes + 1;
        bool isPrime = true;

        while (*factor * *factor <= candidate) {

            if (candidate % *factor == 0) {
                isPrime = false;
                break;
            }
            
            ++factor;
        }
        
        if (isPrime) {
            primes[firstEmptyIndex] = candidate;
            ++firstEmptyIndex;
        }

        candidate += form_6k_pm1 ? 4 : 2;
        form_6k_pm1 ^= 1;
    }

    printf("\nthe %dth prime is: %d\n", PRIMESLENGTH, *lastPrimeInList);
}
