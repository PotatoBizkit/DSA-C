#include<stdio.h>
#define MAX 10

int list[MAX] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44 };

int interpolationSearch(int val){
    int l = 0,
    h = MAX - 1,
    probe = -1,
    comparisons = 1,
    index = -1;
    while (l <= h && val >= list[l] && val <= list[h] && list[h] != list[l])
    {
        printf("Comparison %d\n", comparisons);
        printf("low = %d, low[%d] = %d\n", l, l, list[l]);
        printf("high = %d, high[%d] = %d\n", h, h, list[h]);
        comparisons++;

        probe = l + ((h - l) * ((float)(val - list[l])/(list[h] - list[l])));
        printf("mid = %d\n", probe);

        if (list[probe] == val)
        {
            index = probe;
            break;
        }
        else{
            if (list[probe]<val)
            {
                l = probe+1;
            }
            else{
                h = probe-1;
            }
        }
    }
    printf("Total comparisons made: %d\n", --comparisons);
    return index;
}

int main(){
    int val = interpolationSearch(33);
    if(val != -1)
      printf("\nElement found at location: %d\n" ,(val+1));
   else
      printf("Element not found.\n");
   return 0;
}