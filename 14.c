// C Program to Take Array Input from User and Print in Reverse Order:
#include<stdio.h>
int main(){
    int a[10],ch,i,z=0;
    printf("Enter total no. of intiger to enter in array :");
    scanf("%d",&ch);
    printf("enter %d intiger in array :",ch);
    for ( i = 0; i < ch; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Let's print those intiger in revurse order");
    for ( i = ch-1; i >= z; i--)
    {
        printf("\n%d",a[i]);
    }
    
}