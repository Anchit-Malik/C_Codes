// Write a C program to create a simple calculator using a switch statement. The program should take two numbers and an 
// operator (+, -, *, /) as input and perform the corresponding operation.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Give any two integers values :");
    scanf("%d%d",&a,&b);
    printf("Give any operator as input in which\n+=1\n-=2\n*=3\n/=4:");
    scanf("%d",&c);

    switch (c)
    {
    case 1:
        printf("Sum of two integers values :%d\n",a+b);
        break;
    case 2:
        printf("Difference of two integers values :%d\n",a-b);
        break;
    case 3:
        printf("Product of two integers values :%d\n",a*b);
        break;
    case 4:
         printf("Division of two integers values :%d\n",a/b);
        break;
    default:
        break;
    }

}