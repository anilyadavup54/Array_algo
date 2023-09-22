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
