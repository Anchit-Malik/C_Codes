// write a c program for function with no argument and  return value.
#include<stdio.h>
int Value(){
    int a;
    printf("Give first no. :");
    scanf("%d",&a);
    return a;
}
int Second_Value(){
    int b;
    printf("Give second no. :");
    scanf("%d",&b);
    return b;
}
int main(){
    int a,b;
    a=Value();
    b=Second_Value();
    printf("The sum of these value is :%d",a+b);
    return 0;
}