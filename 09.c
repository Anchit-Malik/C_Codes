// Write a C program using a for loop to generate the multiplication table for a given number.
#include <stdio.h>
int main() {
    int n,i,f;
    printf("Give any integers value for table :");
    scanf("%d",&n);
    for ( i = 1;i<=10;i++)
    {
        f=n*i;
        printf("%d\n",f);
    }
    
    
}