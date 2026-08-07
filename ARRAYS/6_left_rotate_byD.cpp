#include<bits/stdc++.h>
using namespace std;

/*
<>Problem : Left rotate an array by D places
<>Example : [1,2,3,4,5,6,7]  d=3
  output  : [4,5,6,7,1,2,3]

      [1,2,3,4,5,6,7]   n=7
  
1)Compute d = d % n                     --> d = 3 % 7
2)Reverse the array from 0 to d-1       --> [3,2,1,4,5,6,7]
3)Reverse the array from d to n-1       --> [3,2,1,7,6,5,4]
4)Reverse complete array                --> [4,5,6,7,1,2,3]
*/

void left_rotate(vector<int> &arr, int d){
    int n = arr.size();
    d = d % n;
    reverse(arr.begin() , arr.begin()+d);
    reverse(arr.begin()+d, arr.end());
    reverse(arr.begin(), arr.end());
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int d = 3;
    left_rotate(arr, d);
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}