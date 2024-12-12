// Write a C program using a while loop to calculate the factorial of a given   number.
#include <stdio.h>
int main() {
    int n,f=1,i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
        i = n;
        while (i > 0) {
            f*=i;
            i--;
        }
        printf("Factorial of %d is %d",n,f);
}
