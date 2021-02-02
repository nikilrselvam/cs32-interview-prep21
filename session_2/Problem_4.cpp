// Write a function that reverses a string. 
// The input string is given as an array of 
// characters char[].  Do not allocate extra 
// space for another array, you must do this by 
// modifying the input array in-place with O(1) 
// extra memory.  You may assume all the characters 
// consist of printable ascii characters.


//Input: 
//["h","e","l","l","o"]

//Output: 
//["o","l","l","e","h"]

//Input: 
//["H","a","n","n","a","h"]
//Output: 
//["h","a","n","n","a","H"]

#include <bits/stdc++.h>
#include <iostream>

//modifying in place, do not need to return anything as we are pass by referencing
//similar to two pointer 
void reverse_string(vector<char>& s) {
    int size = s.size();
    char temp;
    int begin = 0; //beginning of array
    int end = size - 1; //end of array
    while(begin < end) { //conditonal to prevent us from reversing the string twice
        temp = s[begin]; //create temp variable
        s[begin] = s[end]; //switch places i and end - i
        s[end] = temp;
        begin += 1; 
        end -= 1; 
    }
}

