//The prime factors of 13195 are 5, 7, 13 and 29.
//
//What is the largest prime factor of the number 600851475143 ?

import Foundation

public func largest_prime_factor() {
    for number in stride(from: 1, to: Int(ceil(sqrt(600851475143))), by: 2) {
        if 600851475143 % number == 0 {
            print(number)
        }
    }
}
