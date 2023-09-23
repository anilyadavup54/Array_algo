#include<iostream>
using namespace std;  
int insertSorted(int array[], int n, int key, int capacity)  
{  
    if (n >= capacity)  
        return n;  
  
    array[n] = key;  
  
    return (n + 1);  
}
void display_array(int arr[],int n){
   for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
   }
}
int main(){
   int arr[15]={2,6,3,5,1,8,9,7,4,10}; 
   int capacity=sizeof(arr)/sizeof(arr[0]);
   int n=10;
   int key=12;
   insertSorted(arr, n,12,capacity); 
    n = insertSorted(arr, n, key, capacity);  
   display_array(arr,n); //printing array on screen
 return 0;
}
