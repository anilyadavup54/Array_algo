#include<iostream>
using namespace std;
int  binary_searchArray(int arr[], int n, int key){
   int low=0;
   int high=n-1;

   while(low<=high)
   {
    int mid=high+(low-high)/2;
    if(arr[mid]==key){
    return mid; 
    }
    else if(arr[mid]<key){
    low=mid+1;
    }
    else if(arr[mid]>key){
    high=mid-1;
    }
   }
   return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int find=binary_searchArray(arr,n,7);
    cout<<find;
 return 0;
}
