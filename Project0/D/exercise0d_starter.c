#include <stdio.h>

void printMultTableInt(int n);
void printMultTableFrac(int n);

int main(void){

    // You can change this to test your code
    int size = 4;

    printMultTableInt(size);
    printMultTableFrac(size);

    return 0;

}

// Prints multiplication table of integers from 1 to n
void printMultTableInt(int n){

    // WRITE CODE FOR PART A HERE
    int square;
    int factor=1;
    for(int i=1; i<n+1; i++){
        for(int j=1; j<n+1; j++){
            square = i*j;
            printf("%d ", square);
        }
        printf("\n");
    }
}

// Prints multiplication table for fractions from 1, 1/2, 1/3 to 1/n
void printMultTableFrac(int n){

    // WRITE CODE FOR PART B HERE
    float fraction;
    float frac1 = 1.00;
    float frac2 = 1.00;
    for(int i=1; i<n+1; i++){
        for(int j=1; j<n+1; j++){
            frac1 = 1/(float)i;
            frac2 = 1/(float)j;
            fraction = frac1*frac2;
            printf("%.2lf ", fraction);
        }
        printf("\n");
    }
}

