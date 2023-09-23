#include<iostream>
using namespace std;
void selection_sort(int arr[], int n)
{
    
    int i, j, min_index;
    for (i = 0; i < n - 1; i++) {
        min_index = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index])
                min_index= j;
        }
        if (min_index != i)
            swap(arr[min_index], arr[i]);
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
   selection_sort(arr, n); //call bubble sorting funtion
   display_array(arr,n); //printing array on screen
 return 0;
}
