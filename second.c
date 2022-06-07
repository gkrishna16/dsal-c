#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct myArray {
    int used_size;
    int total_size;
    int *ptr;
};

void createArray (struct myArray *a,int uSize,int tSize){
a->used_size = uSize;
a->total_size = tSize;
a->ptr = (int*)malloc(tSize * sizeof(int));
}

void show (struct myArray *a){
    for (int i = 0; i < a->used_size; i++){
        printf("%d \n", (a->ptr)[i]);
    }
}

void setVariable(struct myArray *a){
    int n;
    for (int i = 0; i < a->used_size; i++){
        printf("Enter the number for position %d --- ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

int main(){
    struct myArray marks;
    createArray(&marks, 3, 40);
    setVariable(&marks);
    show(&marks);
    return 0;
};

// Heap
// Stacked 
// Global and Static Variables 
// Code

