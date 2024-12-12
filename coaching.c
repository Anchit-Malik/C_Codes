#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("enter principle, Rate & time: ");
    scanf("%f%f%f",&p,&r,&t);
    si=p*r*t/100;
    printf("interest =%.2f",si);

}