#include<iostream>
using namespace std;
//------------------------------------>>>>>>>>>>>>>>>>>insertion sort>>>>>>>>>>_--------------
void insertion_sort(int arr1[],int n1)
{
     int i,j, key;
     for(i=0; i<n1; i++)
     {
        key=arr1[i];
        j=i-1;
        while(j>=0 && arr1[j]>key)
        {
            arr1[j+1]=arr1[j];
            j=j-1;
        }
        arr1[j+1]=key;
     }
}
display_array(int arr[], int n){
   for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
   }
}
int main(){
   int arr[]={2,6,3,5,1,8,9,7,4,10}; //unsorted array
   int n=sizeof(arr)/sizeof(arr[0]);
   insertion_sort(arr, n); //call insertion funtion
   display_array(arr,n); //printing array on screen
 return 0;
}
