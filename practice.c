#include<stdio.h>
int main()
{
    int x=0,y=1,z,len,i;
    printf("enter length of series :");
    scanf("%d",&len);
    printf("\n%d\n%d",x,y);
    for(i=1;i<=len;i++)
    {
        z=x+y;
        printf("\n%d",z);
        x=y;
        y=z;
        
    }
}