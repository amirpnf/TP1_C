#include <stdio.h>
#include <stdlib.h>


int combinations_v1(int r, int n) {

    if(r == 0 || r == n)
        return 1;

    if(n > 0 && r > 0 && r < n) 
        return combinations(r, n - 1) + combinations(r - 1, n - 1);   

    return -1;     

}

int combinations_v2(int r, int n) {
    int* array = (int*)malloc((n + 1) * sizeof(int));

    if(array == NULL) {
        fprintf(stderr, "memory allocation failed\n");
        exit(0);
    }

    
}

int main(int argc, char* argv[]) {
    printf("%d\n", combinations(2, 5));
    return 0;
}

