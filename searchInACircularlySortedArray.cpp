
//Find an element in a circularly sorted array, if found return the index where it is found else return -1 indicating unsuccessful search
#include <iostream>

using namespace std;


int searchInACircularlySortedArray(int *arr, int n, int element)
{
    int mid;
    int high = n-1; int low = 0;
    
    while(low<=high)
    {
        mid = low+(high-low)/2;
        if(arr[mid]==element) return mid;
        else if(arr[mid]>=arr[low])
        {
            
             if(element<arr[mid] && element>=arr[low])
            {
              high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        else if(arr[mid]<=arr[high])
        {
            if(element>arr[mid] && element<=arr[high])
            {
                low = mid+1;
            }
            else 
            {
                high = mid-1;
            }
        }
       
    }
     return -1;
    
}

int main()
{
    int arr[] = {4,1,2,3};
    cout<<searchInACircularlySortedArray(arr, sizeof(arr)/sizeof(arr[0]), 3);

    return 0;
}
