#include<bits/stdc++.h>
using namespace std;

/*
Problem : Find the number that appears only once in the given array
Example : arr = [4,1,2,1,2]
Output  : 4

-----------------------------------------------------------
# Brute Force Approach
1)Traverse the array
2)For each element count its occurrences
3)If the count is 1 -> return that number

TC : O(n^2)
SC : O(1)

---------------------------------------------------------
# Better Approach - Hash map
1)Store the frequency of each element in a hash map
2)The element whose frequency is one is the answer

TC : O(n)
SC : O(n)

---------------------------------------------------------
# Optimal Appraoch : XOR
1)Initialize xor1 = 0;
2)Traverse the array
3)XOR each element with XOR1
4)Return XOR1

TC : O(n)
SC : O(1)

*/

int singleNumber(vector<int> &arr){
    int xr = 0;
    for(int i=0; i<arr.size(); i++){
        xr = xr ^ arr[i];
    }
    return xr;
}
int main(){
    vector<int> arr = {4,1,2,1,2};
    cout<<singleNumber(arr);
    return 0;
}