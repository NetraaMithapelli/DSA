#include<bits/stdc++.h>
using namespace std;

/*
Problem : Union of two sorted arrays
Example : arr1 = [1,1,2,3,4,5]
          arr2 = [2,3,4,4,5,6]
Output  : union = [1,2,3,4,5,6]

Brute Force Approach
1)Create a set<int> st
2)Insert all elements from arr1
3)Insert all elements from arr2
4)Copy the set into a result vector

Optimal Approach - Two pointer
1)Maintain two pointers
    i for arr1
    j for arr2
2)Compare the current elements
  ->if arr1[i] < arr2[j] add arr1[i]
  ->if arr2[j] < arr1[i] add arr2[j]  
3)To avoid duplicates -> add an element only if it is different from the last element already stored
4)Note: Check if the result array is empty or not before checking the last inserted element   

*/
vector<int> findUnion(vector<int> &arr1, vector<int> &arr2){
    int n1 = arr1.size() , n2 = arr2.size();
    int i = 0, j = 0;
    vector<int> ans;

    while(i < n1 && j < n2){
        if(arr1[i] <= arr2[j]){
            if(ans.empty() || ans.back() != arr1[i])
                ans.push_back(arr1[i]);
            i++;
        }
        else{
            if(ans.empty() || ans.back() != arr2[j])
                ans.push_back(arr2[j]);
            j++;
        }
    }
    //For remaining elements of arr1
    while(i < n1){
        if(ans.empty() || ans.back() != arr1[i])
            ans.push_back(arr1[i]);
        i++;
    }

    //For remaining elements of arr2
    while(j < n2){
        if(ans.empty() || ans.back() != arr2[j])
            ans.push_back(arr2[j]);
        j++;
    }
    return ans;
}
int main(){
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {2,3,4,4,5,6};

    vector<int> ans = findUnion(arr1, arr2);

    for(int x : ans){
        cout<<x<<" ";
    }
    return 0;
}