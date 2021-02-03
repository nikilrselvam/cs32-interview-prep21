// Given an array of integers that is already sorted in ascending order,
//  find two numbers such that they add up to a specific target number.
// The function twoSum should return indices of the two numbers such 
// that they add up to the target, where index1 must be less than index2.


//Input:
//numbers = [2,7,11,15], target = 9

//Output: 
//[1,2]

//Input: 
//numbers = [2,3,4], target = 6
//Output: 
//[1,3]


#include <bits/stdc++.h>
#include <iostream>


//this is the classic two pointer from opposite end trick. Check out our session_2 recording
//to get a in depth understanding from Arjun
vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> res = {0};
    int small, big;
    
    small = 0;
    big = numbers.size() - 1;

    //what about sum != target?
    while(small < big) {
        sum = numbers[small] + numbers[big];
        if (sum == target) {
            //we're done
            res.push_back(small+1); //+1 because the sample output indices start from 1 instead of 0
            res.push_back(big+1); //push_back is a vector specific function which allows us to append something at the end of a vector
            return res;
        }
        else if (sum < target) {
            small++; //if sum < target, we have to increase our sum, therefore we move our index to the next larger number
        }
        else {
            big--; //if sum > target, we have to decrease our sum, therefore we move our index to the next smaller number
        }
    }
    return res;
}