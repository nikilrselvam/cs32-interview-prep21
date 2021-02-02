//Problem 1

//Problem Statement:

//Given an integer, write a function to determine if it is a power of two.

//Input:
//16

//Output:
// true

bool power_of_two(int n) {
    
    // 0 is not a power of two and is an edge case that would cause 
    // an infinite loop in our while loop below, so we handle it here
    if(n <= 0)
        return false;
    
    // While n is divisible by 2, divide n by 2
    while(n % 2 == 0)
        n /= 2;
    
    // If n is a power of 2, at one point the loop above will get to
    // a point where n is 2, and 2 / 2 = 1, and 1 % 2 != 0, so
    // we return true if n == 1 and false if n != 1
    return n == 1;
    }
