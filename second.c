#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct myArray {
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a, int tSize , int uSize){
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int*)malloc(a->used_size * sizeof(int));
};

void show(struct myArray *a){
    for (int i = 0; i < a->used_size; i++){
        printf("%d \n", (a->ptr)[i]);
    }
};

void setValue(struct myArray *a){
    int n;
    for (int i = 0; i < a->used_size; i++){
        printf("Enter the value of %d and see ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
};

int main(){
    struct myArray marks;
    createArray(&marks, 50,3);
    setValue(&marks);
    show(&marks);
    return 0;
};