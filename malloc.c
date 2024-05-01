#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int x;
    printf("%ld\n", sizeof(x));
    ptr = malloc(10 * sizeof(*ptr));
    printf("%ld\t", sizeof(ptr));

    if(ptr !=NULL){
        *(ptr + 2) = 50;
    }

    printf("The third element equals to %d", *(ptr + 2));
    free (ptr);
    return 0;
}