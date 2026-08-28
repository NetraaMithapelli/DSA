#include<bits/stdc++.h>
using namespace std;

/*
Problem : In an array find two no such that their sum is equal to target
Example : arr = [2,7,11,15]
Output  : [0,1] -> returns indices or YES/NO

----------------------------------------
# Brute Force Approach
1)Start first loop from index 0
2)Start second loop from i+1
3)Calculate sum = arr[i] + arr[j]
4)If sum == target -> return i , j

TC : O(n^2)
SC : O(1)

------------------------------------------
# Better Approach - Hashmap
1)Create unordered map storing [value , index]
2)Traverse array
3)Find remaining = target - arr[i]
4)If remaining exists in map -> return map[remaining, i]
5)Otherwise -> store current element in map

TC : O(n)
SC : O(n)

-------------------------------------------------
# Optimal Approach - Two Pointer

Note : This approach works only when indices are not required

1)Sort the array
2)Take two pointers
3)Calculate sum
4)Compare the target
5)Move pointers accordingly
6)Stop when pointers meet

TC : O(nlogn)
SC : O(1)

*/
vector<int> twoSum(vector<int> &arr, int target){
    unordered_map  <int, int> mp;
    for(int i=0; i<arr.size(); i++){
        int remaining = target - arr[i];
        if(mp.find(remaining) != mp.end()){
            return {mp[remaining], i};
        }
        mp[arr[i]] = i;
    }
    return { };
}
int main() {
    vector<int> arr = {2,7,11,15};
    int target = 9;
    vector<int> ans = twoSum(arr, target);

    if(ans.empty()) {
        cout<<"No Pair Found";
    }
    else {
        cout<<"Indices: ";
        for(int x : ans) {
            cout<<x<<" ";
        }
    }
    return 0;
}    