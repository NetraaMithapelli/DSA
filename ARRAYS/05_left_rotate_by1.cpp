#include<bits/stdc++.h>
using namespace std;

/*
Problem : Left rotate the array by 1 place
1)Store the first element in the temp variable
2)Traverse the array from the second element
3)Store the [i-1] element as arr[i]
4)Finally copy back the first element at last
*/

void left_rotate(vector<int> &arr){
    int n = arr.size();
    int temp = arr[0];
    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    left_rotate(arr);
    cout<<"Rotated array : ";
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}
