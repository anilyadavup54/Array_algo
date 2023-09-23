#include <iostream>  
using namespace std; 
int reverse_array(int arr[], int n){
   
   for (int i=0;i<=n/2;i++)
   { 
    swap(arr[i],arr[n-i-1]);
   // int temp=arr[i];
   // arr[i]=arr[n-i-1];
   // arr[n-i-1]=temp;
   }
}
void display_array(int arr[], int n){
   for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
   }
}
int main(){
   int arr[]={1,2,3,4,5,6,7,8,9,10}; //unsorted array
   int n=sizeof(arr)/sizeof(arr[0]);
   reverse_array(arr,n); 
   display_array(arr,n); //printing array on screen
 return 0;
}
