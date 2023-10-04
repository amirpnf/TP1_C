#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    if(a < 0 || b < 0) {
        fprintf(stderr, "invalid values for LCM \n");
        exit(0);
    }
    if(b == 0)
        return a;
    return gcd(b, a % b);    
}

int ppcm(int a, int b) {
    if(a < 0 || b < 0) {
        fprintf(stderr, "invalid values for LCM \n");
        exit(0);
    }
    return (a * b) / gcd(a, b);
}

int main(int argc, char* argv[]) {

    if(argc < 2) {
        fprintf(stderr, "Not enough values \n");
        exit(0);
    }
    int lcm = ppcm(atoi(argv[1]), atoi(argv[2]));
    for (size_t i = 3; i < argc; i++)
    {
        lcm = ppcm(lcm, atoi(argv[i]));
    }
    printf("%d \n", lcm); 


    return 0;
}

