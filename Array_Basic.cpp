#include<bits/stdc++.h>
using namespace std;
// Array : Array is a data structure which is used to store similar type of data type in a contignous memory location.
// Suppose we have to store roll number of whole class in one data structue we simply use array Data sturcture here.
// The decleration of Array in C plus plus programming is:
// data-type   array-Name [ SIZE ];
// The size of array should be fixed  before using the array.
// Time Complexity  -- Required amount of time to do perform any operation by the algorithm
// INSERTION === O(n);
// DELETION == O(n);
// ACCESSING == O(1);
// TRAVERSING == O(n);
int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    //    We can access data of array by using the index
    //    The Index of array start from 0 and moves to length-1;
  int arr[n];   // Declaring Array of size n
  cout<<"Enter the elements of the Array: "<<endl;
  for(int i =0;i<n;i++){
   cin>>arr[i]; // Accepting integers from the users
  }
  cout<<endl<<"The elements of arrays are : "<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";  // Outputing the data of the array 
  }
return 0;
}