#include<bits/stdc++.h>
using namespace std;

int remove_duplicates(vector<int> arr){         //Two-pointer approach
    int i=0;                                   //i pointer initially set to 0 for comparison
    for(int j= 1; j<arr.size(); j++){         //j pointer is used to traverse
        if(arr[i] != arr[j]){                //if the 1st element = the j pointer then it is duplicate
            arr[i+1] = arr[j];              //if not equal then store the j pointer element in the 2nd position of i
            i++;                           //increment 
        }    
    }
    return i+1;                          //returns no of duplicates
}
int main(){
    vector<int> arr = {1,1,2,2,3,3,3,4};
    cout<<remove_duplicates(arr);
    return 0;
}
