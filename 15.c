#include<stdio.h>
int main(){
    char str[69];
    printf("Enter a String :");
    fgets(str,sizeof(str),stdin);
    printf("%s",str);
    return 0;
    }