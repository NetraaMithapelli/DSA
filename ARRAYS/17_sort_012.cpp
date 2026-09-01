#include<bits/stdc++.h>
using namespace std;

/*
Problem : Sort an array of 0s, 1s, 2s
Example : arr = [0,1,1,2,0,2,1,0]
Output  : [0,0,0,1,1,1,2,2]

------------------------------------
# Brute Force Approach
Sort the array

TC : O(nlogn) -> Merge Sort
SC : O(1)

---------------------------------
# Better Approach - Counting
1)Count frequency of each number

TC : O(n)
SC : O(1)

----------------------------------
# Optimal Approach - DNF (Dutch National Flag)
1)Maintain three pointers low , mid, high
2)Rules:
   -> a[mid]==0  > swap([low], [mid]) > mid++, low++ 
   -> a[mid]==1  > mid++
   -> a[mid]==2  > swap([mid], [high]) > high--

TC : O(n)
SC : O(1)

*/

void sort_array(vector<int> &arr){
    int low = 0;
    int mid = 0;
    int high = arr.size()-1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main(){
    vector<int> arr = {0,2,1,2,1,0,1,0,1,2};
    sort_array(arr);
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}