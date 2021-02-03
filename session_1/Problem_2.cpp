//Problem 2

//Problem Statement:

//Given a non-empty array of integers, every element appears 
//two times except for one. Find that single one.

//Input:
//[1, 2, 3, 4, 3]

//Output:
// 4

#include <stdlib.h>
#include <bits10_1.h/stdc++.h>
//this library will contain vectors


//Bill's implementation
int onlyOne(vector<int>& numbers) {
    return std::accumulate(numbers.begin(), numbers.end(), 0, [](int a, int b) { return a ^ b}); //this is the same thing as the implementation below, 
    //though a lot more confusing. 
     
}

//similar implementation to Bill
int onlyOne(vector<int>& numbers) {
    int left_out = 0; //this is the odd one out
    for(int i = 0; i < numbers.size(); i++) {
        left_out ^= nums[i]; //we are going to be XORing the left out number, see our session_1 recording for an in depth reasoning on why this works
    }
    return left_out;
}