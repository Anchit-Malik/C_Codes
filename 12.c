// write a c program for function with argument no return value.
#include<stdio.h>
int argument(int a){
    printf("The final anster is :%d",a);
}
int main(){
    int a;
    printf("Give any value to multiply with 4 :");
    scanf("%d",&a);
    argument (a*4);
}