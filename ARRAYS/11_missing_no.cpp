#include<bits/stdc++.h>
using namespace std;

/*
Problem : Given an array of size N-1 containing distinct numbers from 1 to N, find the missing number.
Example : arr = [1,2,4,5],   N=5
Output  : 3

-------------------------------------------------------------
# Brute Force Approach
Check every no from 1 to N 
If a no is not present in the array then it is the missing no

int missing_no(vector<int> &arr, int N){
    for(int i=1; i<=N; i++){
        bool found = false;
        for(int j=0; j<arr.size(); j++){
            if(arr[j] == i){
                found = true;
                break;
            }
        }
        if(!found) return i;
    }
    return -1;
}

----------------------------------------------------
# Better Approach : Hashing
1)Create a frequency array of size n=1
2)Mark every element present in the array
3)The index whose frequency is zero is the missing no

int missing_no(vector<int> &arr, int N){
    vector<int> hash(N+1, 0);
    for(int i=0; i<arr.size(); i++){
        hash[arr[i]] = 1;
    }
    for(int i=1; i<N; i++){
        if(hash[i] == 0){
            return i;
        }
    }
    return -1;
}

-------------------------------------------------
#Optimal Approach 1: Sum
Expected sum = n *(n+1)/2

int missing_no(vector<int> &arr, int N){
    int expected_sum = N*(N+1)/2;
    int actual_sum = 0;
    for(int i=0; i<arr.size(); i++){
        actual_sum += arr[i];
    }
    return expected_sum - actual_sum;
}

------------------------------------------
# Optimal Approach 2 : XOR
a ^ a = 0
a ^ 0 = a
*/
int missing_no(vector<int> &arr, int N){
    int xor1 = 0;
    int xor2 = 0;

    //XOR from 1 to N
    for(int i=1; i<N; i++){
        xor1 ^= i;
    }

    //XOR of array elements
    for(int i=0; i<arr.size(); i++){
        xor2 ^= arr[i];
    }
    return xor1 ^ xor2;
}

int main(){
     vector<int> arr = {1,2,4,5};
    cout << missing_no(arr, 5);
    return 0;
}
