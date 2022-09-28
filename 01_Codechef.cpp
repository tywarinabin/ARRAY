#include<bits/stdc++.h>
using namespace std;
// Program to find no. of repeated times of element in an array.
int counter(int arr[], int n){
     int temp = 0;
     int count =0; 
    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(temp<count){
                temp = count;
                count = 0;
            }
            else{
                count = 0;
            }
    }
    return temp;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
  cin>>n;
  int arr[n];
  for(int i = 0;i<n;i++){
    cin>>arr[i];
  }
  int x = counter(arr,n);
  cout<<x<<endl;
  }
return 0;
}