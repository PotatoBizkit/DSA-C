#include <stdio.h>

void arrayInsertion(int* arrptr, int len){
    printf("Array before any insertions:\n");
    for (int i = 0; i < len; i++)
    {   
        printf("arr[%d] = %d\n", i, arrptr[i]);
    }
    for (int i = 0; i < len; i++)
    {
        printf("Insert element %d\n", i+1);
        scanf("%d", &arrptr[i]);
        // while (getchar() != '\n');
    }
    printf("Array after insertions:\n");
    for (int i = 0; i < len; i++)
    {
        printf("arr[%d] = %d\n", i, arrptr[i]);
    }
}

void arrayDeletion(int* arrptr, int len){
    printf("Original Array:\n");
    for (int i = 0; i < len; i++)
    {
        printf("arr[%d] = %d\n", i, arrptr[i]);
    }
    for (int i = 1; i < len-1; i++)
    {
        arrptr[i] = arrptr[i+1];
    }
    len = len -1;
    printf("Array after deletion:\n");
    for (int i = 0; i < len; i++)
    {
        printf("arr[%d] = %d\n", i, arrptr[i]);
    }
}

void arrayDisplay(int* arrptr, int len){
    printf("Displaying array:\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arrptr[i]);
    }
}

void arrayTraversal(int* arrptr, int len){
    printf("\nTraversing array...\n");
    for (int i = 0; i < len; i++)
    {
        if (i == len - 1)
        {
            printf("Traversing complete");
        }
    }  
}

void arrayUpdate(int* arrptr){
    int k, n;
    printf("Enter a no. between 1 - 5:\n");
    scanf("%d", &k);
    printf("Enter value to store:\n");
    scanf("%d", &n);
    if (k >= 1 && k <= 5)
    {
        printf("Element no. %d is %d\n", k, arrptr[k-1]);
        arrptr[k-1] = n;
        printf("Element no. %d after updating is %d\n", k, arrptr[k-1]);
    }
    
}

int main(){
    int arr[5]={}, i, len = sizeof(arr)/sizeof(arr[0]);
    // arrayInsertion(arr, len);
    // for (int i = 0; i < len; i++)
    // {
    //     printf("arr[%d] = %d\n", i, arr[i]);
    // }

    int larr[] = {1,2,3,4,5};
    int n = sizeof(larr)/sizeof(larr[0]);
    // arrayDeletion(larr, n);
    // arrayDisplay(larr, n);
    // arrayTraversal(larr, n);
    arrayUpdate(larr);

    return 0;
}