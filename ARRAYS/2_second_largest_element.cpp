#include<bits/stdc++.h>
using namespace std;

int find_second_largest(vector<int> arr){

    int largest = arr[0];
    int second_largest = INT_MIN;

    for(int i=1; i<arr.size(); i++){
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > second_largest){
            second_largest = arr[i];
        }
    }
    return second_largest;
}
int main(){
    vector<int> arr = {7,4,6,9,3,2};
    //cout<<"Array : "<<arr;  --> since arr is a vector to dispaly that array we need a for loop to access all elements
    cout<<"Second Largest : "<<find_second_largest(arr);
    return 0;

}

