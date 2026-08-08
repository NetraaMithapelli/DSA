#include<bits/stdc++.h>
using namespace std;

/*
Problem : Move the zeroes to the end of the array
Example : [1,0,2,3,0,3,0,0,4]
Output  : [1,2,3,3,4,0,0,0,0]

Brute Force Approach:
1)Create temp variable
2)Traverse the array
3)Store all the non-zero elements in the temp variable
4)Copy temp into the original array
5)Fill the remaining positions with 0

Optimal Appproach : Two pointer
1)Traverse the array
2)Find the first zero
3)Let j point to this zero
4)Traverse the remaining array(i.e. from j+1) using i
5)Whenever a non-zero element is found -> swap it with arr[j]
6)Increment j

*/
void move_zeroes(vector<int> &arr){
    int n = arr.size();
    int j = -1;

    //Find first zero
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    //No zeroes found
    if(j == -1) return;

    //Move non-zero elements forward
    for(int i=j+1; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}
int main(){
    vector<int> arr = {1,0,2,0,2,0,0,3,0,4};
    move_zeroes(arr);
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}