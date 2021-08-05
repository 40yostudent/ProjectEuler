#include "ProjectEulerC.h"

// 10001th prime number
void problem_0007() {
    const int PRIMESLENGTH = 10001;
    int primes[PRIMESLENGTH];

    for (int i = 0; i < PRIMESLENGTH; ++i) {
        primes[i] = 0;
    }

    primes[0] = 2;
    primes[1] = 3;
    primes[2] = 5;
    primes[3] = 7;
    primes[4] = 11;
    primes[5] = 13;

    int candidate = 15;
    int firstEmptyIndex = 6;
    
    // printf("LIST OF FIRST %d PRIMES:\n", PRIMESLENGTH);
    // printf("2, 3, 5, 7, 11, 13, ");

    while (primes[PRIMESLENGTH-1] == 0) {
        
        int factorIndex = 1;
        bool isPrime = true;

        while (primes[factorIndex] * primes[factorIndex] <= candidate) {

            if (candidate % primes[factorIndex] == 0) {
                isPrime = false;
                break;
            }
            
            ++factorIndex;
        }
        
        if (isPrime) {
            // printf("%d, ", candidate);
            primes[firstEmptyIndex] = candidate;
            ++firstEmptyIndex;
        }

        candidate += 2;
    }

    printf("\n");
    printf("the %dth prime is: %d", PRIMESLENGTH, primes[PRIMESLENGTH-1]);
    printf("\n");
}
