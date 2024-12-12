// Write a C program to check whether a person is eligible to vote based on their age. The voting age is 18 years.
#include<stdio.h>
int main(){
    int a;
    printf("Enter your age in no. :");
    scanf("%d",&a);
    if (a>=18)
    {
        printf("You are eligible to vote");

    }
    else
    {
        printf("You are not eligible to vote");

    }
    
    
}