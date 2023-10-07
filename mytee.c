#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {

    char c;

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
