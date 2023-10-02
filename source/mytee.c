#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 512

int main(int argc, char* argv[]) {

    char c;

     /* FILE* read_file = fopen(argv[1], "r");

    if(read_file == NULL) {
        fprintf(stderr, "File pointer is null ! \n");
        return 1;
    }*/


    FILE* write_file = fopen("doc.log", "w");
    
    if(write_file == NULL) {
        fprintf(stderr, "File pointer is null ! \n");
        return 1;
    }

    for(; (c = fgetc(stdin)) != EOF ;) {
        fputc(c, write_file);
        printf("%c", c);
    }

    return 0;
}
