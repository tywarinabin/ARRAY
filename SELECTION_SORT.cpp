#include<bits/stdc++.h>
using namespace std;
void Selection_Sort(int *arr, int n){
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Displaying the sorted arrays: "<<endl;
    for(int i = 0; i<n;i++){
        cout<<"  "<<arr[i];
    }
}
int main(){
  int n; 
  cout<<"Enter the size of the arrays: "<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of the arrays: "<<endl;
  for(int i = 0;i<n;i++){
    cin>>arr[i];
  }
  Selection_Sort(arr,n);
return 0;
}