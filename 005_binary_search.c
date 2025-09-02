#include <stdio.h>

void binarySearch(int* arrptr, int low, int high, int key){
    int mid = (low + high)/2;
    if (low <= high)
    {
        if (arrptr[mid] == key)
        {
            printf("Element found at index %d\n", mid);
        }
        else if (arrptr[mid]>key)
        {
            binarySearch(arrptr, low, mid-1, key);
        }
        else if (arrptr[mid]<key)
        {
            binarySearch(arrptr, mid+1, high, key);
        }               
    }
    else if (low>high)
    {
        printf("Unsuccessful Search\n");
    }
}

int main(){
    int a[5] = {12, 14, 18, 22, 39}, 
    low = 0, 
    high = sizeof(a)/sizeof(a[0]) - 1,
    val = 22;
    binarySearch(a, low, high, val);

    return 0;
}