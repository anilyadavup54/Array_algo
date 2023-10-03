#include<iostream>
using namespace std;
void delete_arr(int arr[], int n,int index){
 for(int i=index; i<n; i++){
    arr[i]=arr[i+1];
 }
}
void display_arr(int arr[], int n){
    cout<<"Elements of array are: ";
    for (int i = 0; i < n-1 ; ++i) {
        cout<<arr[i]<<" ,";
    }
}
int main()
{
 int arr[]={10,53,12,45,34,34,46,67};
 int n=sizeof(arr)/sizeof(arr[0]);
 delete_arr(arr,n,2);
 display_arr(arr,n);
  return 0;
}
