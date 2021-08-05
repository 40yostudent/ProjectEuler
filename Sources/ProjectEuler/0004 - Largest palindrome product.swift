// A palindromic number reads the same both ways.
// The largest palindrome made from the product of two 2-digit numbers
// is 9009 = 91 × 99.
//
// Find the largest palindrome made from the product of two 3-digit numbers.

import Foundation

public func largest_palindrome_product() {
    
    func isLargestPalindrome(_ n: Int) -> Bool {
        
        var found = false
        var i = 999
        
        while ((n/i < 1000)) {
            if (n%i == 0) { found = true; print(i) }
            i -= 1
        }
        
        return found
    }
    
    var number = 999_999
    var i = 0
    var j = 0
        
    while !isLargestPalindrome(number) && number > 900_000 {
        
        i += 1
        
        if i<10 {
            number -= 001100
        } else {
            number -= 000110
            j += 1
            i = 0
        }

    }
    
    print(number)
    
}
