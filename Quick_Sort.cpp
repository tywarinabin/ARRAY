#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i]= arr[j];
    arr[j] = temp;
}
int partition(int arr[], int low,int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j=low;j<high;j++){
       if(arr[j]<pivot){
       i++;
       swap(arr,i,j);
}
    }
    swap(arr,i+1,high);
    return i+1;
}
void QuickSort(int arr[], int low , int high){
    // Here low represent the starting of Index and right represents the Ending of Index.
    if(low<high){
        int pi = partition(arr,low,high);
        QuickSort(arr,low,pi-1);
        QuickSort(arr,pi+1,high);
    }
}
int main(){
  int arr[5] = {4,5,2,1,3};
  QuickSort(arr,0,4);
  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
return 0;
}