#include<bits/stdc++.h>
using namespace std;

/*
Problem : Given a binary array (containing only 0s and 1s), find the maximum number of consecutive 1s.
Example : arr = [1,1,0,1,1,1]
Output  : 3
--------------------------------
There is no Brute Force Solution for this problem

# Optimal Approach
1)Traverse the array only once
2)Maintain two variables
  -> count = no. of consecutive ones
  -> maxi = maximum consecutive ones found till now
3)Whenever 1 is found -> increment count and update max
4)Whenever a zero is found -> reset count = 0

TC : O(n)
SC : O(1)

*/
int maxConsecutiveOnes(vector<int> &arr){
    int count = 0;
    int maxi = 0;

    for(int i=0; i<arr.size(); i++){
        if(arr[i] == 1){
            count++;
            maxi = max(maxi, count);
        }
        else{
            count = 0;
        }
    }
    return maxi;
}
int main(){
    vector<int> arr = {1,1,0,0,1,1,1,0};
    cout<<maxConsecutiveOnes(arr);
    return 0;
}