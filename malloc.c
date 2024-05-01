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

    // Adding realloc
    ptr = realloc(ptr, 100*sizeof(*ptr));
    *(ptr + 30) = 75;

    printf("The third element equals to %d and the 31st element is %d , 2nd elment is %d", *(ptr + 2), *(ptr + 30), *(ptr+1));
    free (ptr);
    return 0;
}