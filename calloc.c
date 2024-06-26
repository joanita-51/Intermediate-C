#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int num;
    char *info;

}record;

int main(){
    record *recs;
    int num_recs = 2;
    int k;
    char str []= "This is information";

    //using calloc to allocate memory for a structure : calloc(num_items, item_size)
    recs = calloc(num_recs, sizeof(record));
    if(recs != NULL){
        for(k = 0; k<num_recs; k++){
            (recs+k)->num = k;

            // using malloc to allocate memory for a string within the structure
            (recs+k)->info = malloc(sizeof(str));
            strcpy((recs+k)->info,str);
        }
    }

    for(k=0; k<num_recs; k++){
        printf("%d\t %s\n", (recs+k)->num, (recs+k)->info);
    }

    return 0;

}