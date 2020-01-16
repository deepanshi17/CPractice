#include <stdio.h>

int gcd (int x, int y);
int tests[] = {48, 18, 144, 60, 65, 12, 179, 7};

int main() {
    for(int i=0; i<7;) {
        int x = tests[i];
        int y = tests[i+1];
        i += 2;
        //printf("%d %d \n", x, y);
        printf("GCD of %d and %d is: %d\n", x, y, gcd(x,y));
    }
    return 0;
}

int gcd (int x, int y){
    int mod = 1;
    int a = x;
    int b = y;
    while(mod){
        mod = a%b;
        a = b;
        b = mod;
    }
    return (a);
}