#include<bits/stdc++.h>
using namespace std;

/*
Problem : Given an array of integers and a target element x, 
          return the index of x if it exists in the array. Otherwise, return -1.         
Example : [2,3,5,6,3] , x=5
Output  : 2 (index of 5)     
---------------------------------------
Brute Force Approach
1)Traverse teh array from left tp right
2)Compare each element with x
3)If found -> return its index
4)If not found -> return -1;

*/
int linear_search(vector<int> &arr, int x){
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>arr = {2,3,4,5,1,6};
    int x = 1;
    int index = linear_search(arr, x);
    if(index == -1)
        cout<<"Element not found";
    else
        cout<<"Element found at index " << index;
    return 0;
}
