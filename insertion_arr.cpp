#include<iostream>
using namespace std;
void insertion_arr(int arr[], int n, int key, int position,int capacity){
    if(n>=capacity){
        cout<<"Overflow"<<endl;
    }
    else{
        for(int i=n-1; i>=position;i--){
            arr[i+1]=arr[i];
        }
        arr[position]=key;
    }
}
void display_arr(int arr[], int n){
    cout<<"Elements of array are: ";
    for (int i = 0; i < n ; ++i) {
        cout<<arr[i]<<" ";
    }
}
int main()
{
 int arr[]={10,53,12,45,34};
 int n=5;
//  delete_arr(arr,n,2);
int key=3; int capacity=6; int position=1;
insertion_arr(arr,n,key,position,capacity);
n=n+1;
 display_arr(arr,n);
  return 0;
}
