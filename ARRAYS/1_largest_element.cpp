#include<bits/stdc++.h>
using namespace std;
/*
Problem : Find the largest element from the given array
Example : [2,5,1,3,0]
Output : 5
---------------------------
#Brute Force Approach 
1)Sort the array
2)Return the last element which is also the largest

TC : O(nlogn)
SC : O(n)
--------------------------------
#Optimal Approach
1)Initialize largest = first element
2)Traverse the array
3)Keep updating the max element whenever a larger element is found

TC : O(n)
SC : O(1)
*/
int findLargest(vector<int> &arr){
  int largest = arr[0];
  for(int i=0; i<arr.size(); i++){
      if(largest < arr[i]){
          largest = arr[i];
      }
  }
  return largest;
}
int main(){
  vector<int> arr = {4,2,6,8,9};
  cout<<"Largest element : "<<findLargest(arr);
  return 0;
}
  
