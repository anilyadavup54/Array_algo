#include<iostream>
using namespace std;
void bubble_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){ // loop passes
        for(int j=0; j<n-1-i; j++){ // element check
            if(arr[j]>arr[j+1]){ //compare
            int temp=arr[j];     //|
            arr[j]=arr[j+1];    // | swapping elements
            arr[j+1]=temp;      // |
            }
        }
    }
}
void display_array(int arr[], int n){
   for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
   }
}
int main(){
   int arr[]={2,6,3,5,1,8,9,7,4,10}; //unsorted array
   int n=sizeof(arr)/sizeof(arr[0]);
   bubble_sort(arr, n); //call bubble sorting funtion
   display_array(arr,n); //printing array on screen
 return 0;
}
