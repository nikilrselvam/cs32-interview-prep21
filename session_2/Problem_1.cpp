// You are given an array prices where prices[i] 
// is the price of a given stock on the ith day.  
// You want to maximize your profit by choosing a 
// single day to buy one stock and choosing a different 
// day in the future to sell that stock.  
// Return the maximum profit you can achieve from this transaction. 
// If you cannot achieve any profit, return 0. 

//Input:
//prices = [7,1,5,3,6,4]

//Output: 
//5

//Input: 
//prices = [7,6,4,3,1]

//Output:
//0

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int maxProfit(vector<int>& prices) {
    int min_value = prices[0];
    int profit = 0;

    for(int i = 1; i < prices.size(); i++) { //were gonna start at the 2nd index because min_value is initialized to the first index
        min_value = min(min_value, prices[i]); //update what the lowest stock price is in order to sell later.
        profit = max(profit, prices[i] - min_value); //update max profit
    }
    return profit;
}

//here's a function to test maxProfit()

void testStonks() {
    vector<int> test1 {7,1,5,3,6,4};

    cout << maxProfit(test1) << endl;
}