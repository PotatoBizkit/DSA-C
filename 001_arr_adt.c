#include <stdio.h>
#include <stdlib.h>

typedef struct myArray{
    int total_size;
    int used_size;
    int* ptr;
}myarr;

void createArray(myarr* a, int tsize, int usize){
    // (*a).total_size = tsize;
    // (*a).used_size = usize;
    // (*a).ptr = (int*)malloc(tsize*sizeof(int));
    a -> total_size = tsize;
    a -> used_size = usize;
    a -> ptr = (int*) malloc(tsize*sizeof(int));
}

void show(myarr* a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}

void setVal(myarr* a){
    for (int i = 0; i < a->used_size; i++)
    {
        int j;
        printf("Enter element %d\n", i+1);
        scanf("%d", &j);
        while (getchar() != '\n');
        (a->ptr)[i] = j;
    }
}

int main(){
    myarr marks;
    createArray(&marks, 10, 2);
    setVal(&marks);
    show(&marks);

    return 0;
}