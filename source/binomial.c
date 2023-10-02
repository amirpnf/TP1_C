#include <stdio.h>
#include <stdlib.h>


int combinations_v1(int r, int n) {

    if(r == 0 || r == n)
        return 1;

    if(n > 0 && r > 0 && r < n) 
        return combinations_v1(r, n - 1) + combinations_v1(r - 1, n - 1);   

    return -1;     

}

int combinations_v2(int r, int n) {
    int** array = (int**)malloc((n + 1) * sizeof(int*));

    if(array == NULL) {
        fprintf(stderr, "Table allocation failed\n");
        exit(0);
    }

    for(int i = 0; i < n + 1; ++i) {
        array[i] = (int*)malloc((i+1) * sizeof(int));

        if(array[i] == NULL) {
            fprintf(stderr, "row allocation failed\n");
            exit(0);
        }
    }

    for(int i = 0; i < n + 1; ++i) {
        array[i][0] = 1;
        array[i][i] = 1;
        for(int j = 1; j < i + 1; ++j) 
            array[i][j] = array[i - 1][j] + array[i - 1][j - 1];
    }

    int res = array[n][r];
    for(int i = 0; i < n + 1; ++i) {
        free(array[i]);
    }
    free(array);
    return res;
}



int main(int argc, char* argv[]) {
    printf("%d\n", combinations_v2(3, 10));
    return 0;
}

