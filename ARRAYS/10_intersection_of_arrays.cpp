#include<bits/stdc++.h>
using namespace std;

/*
Problem : Intersection o ftwo sorted arrays
Example : arr1 = [1,2,2,3,4,5]
          arr2 = [2,2,3,5,6]
Output  : [2,2,3,5]  
---------------------------------------
# Brute Force Approach
1)Create a visited array initialized as false
2)Traverse arr1
3)For each element search arr2
4)If found not visited 
     ->Add it to ans
     ->Mark it a visited
5)Return the ans

TC : O(n * m)
SC : O(m)
------------------------------------------------
# Optimal Approach - Two pointer
1)Maintain two pointers
   i for arr1
   j for arr2
2)Compare
   -> if(arr1[i] < arr2[j]) , increment i 
   -> if(arr1[i] > arr2[j]) , increment j
   -> if equal 
        add the element to answer
        increment i and j

TC : O(n+m)
SC : O(min(n, m))

*/
vector<int> find_Intersection(vector<int> &arr1, vector<int> &arr2){
    int n1 = arr1.size(), n2 = arr2.size();
    int i = 0,  j = 0;
    vector<int> ans;

    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main(){
    vector<int> arr1 = {1,2,2,3,4,5};
    vector<int> arr2 = {2,2,3,5,6};

    vector<int> ans = find_Intersection(arr1, arr2);

    for(int x : ans){
        cout << x << " ";
    }
    return 0;    
}
        
