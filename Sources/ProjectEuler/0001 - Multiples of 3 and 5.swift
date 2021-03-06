//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//
//Find the sum of all the multiples of 3 or 5 below 1000.

import Foundation

public func multiples_of_3_and_5() {
    print((1..<1000).filter{$0 % 3 == 0 || $0 % 5 == 0}.reduce(0,+))
}
