#include<bits/stdc++.h>
using namespace std;

/*
Problem : In an array find the element that appears more than n/2 times
Example : arr = [2,2,1,1,1,2,2]
Output  : 2 
----------------------------------------
# Brute Force Approach
1)Traverse every element
2)Count its frequency using another loop
3)If freq > n/2
4)Return that element

TC : O(n^2)
SC :O(1)

---------------------------------------
# Better Approach : Hash map
1)Create hashmap that stores (number, frequency)
2)Traverse teh array
3)Increase frequency
4)Traverse hashmap
5)If frq > n/2 return key

TC :O(n)
SC : O(n)

--------------------------------------------
# Optimal Approach : Moore's Voting algo
1)Initialize count , candidate
2)Traverse array
3)If count = 0 -> choose new candidate
4)If current element = candidate -> inc count
5)Else dec count
6)Candidate is answer

TC : O(n)
SC : O(1)

*/
int majorityElement(vector<int> &arr){
    int count = 0;
    int candidate = -1;

    for(int i=0; i<arr.size(); i++){
        if(count == 0){
            candidate = arr[i];
        }
        if(arr[i] == candidate){
            count++;
        }
        else{
            count--;
        }
    }
    return candidate;
}

int main(){
    vector<int> arr = {2,2,1,1,1,2,2};
    cout<<majorityElement(arr);
    return 0;
}