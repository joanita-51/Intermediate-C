#include <stdio.h>

union val{
    int num;
    float fl;
    char str;
};

int main(){

    union val arr[3];
    arr[0].num = 42;
    arr[1].fl = 3.14;
    arr[2].str = 'x';
    printf("1st element is %d, 2nd element is %f, and the 3rd is %c\n", arr[0].num, arr[1].fl, arr[2].str);

    union val nums[10];
    int k;

    // create an array of integers
    for(k=0; k<10; k++){
        nums[k].num = k;
    }

    //display array values
    for(k=0; k<10; k++){
        printf("%d ", nums[k].num);
    }
}