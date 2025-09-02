#include <stdio.h>

void linearSearch(int* array, int length, int value){
    int found = 0;
    for (int i = 0; i < length; i++) {
        if (array[i] == value) {
            printf("Value %d found at index %d\n", value, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Value %d not found in the array.\n", value);
    }

}

int main(){
    int arr[5] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int val;
    printf("Enter the value to search:\n");
    scanf("%d", &val);
    linearSearch(arr, len, val);
    return 0;
}