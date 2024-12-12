#include<stdio.h>
int main(){
    int x =2 ;
    int y =3 ;
    int z =3 ;
    int k =1 ;
    printf("First we have\nx=%d\ny=%d\nz=%d\nk=%d\n", x,y,z,k);
    printf("our equation is 3x/y-z+k and the answer of this eqiation is %d\n", 3*x/y-z+k);
    printf("The reason of this answer is because first it will do 3*%d which is %d\n",x, 3*x);
    printf("then it will devide 3*%d with %d which is %d\n",x,y, 3*x/y);
    printf("Now it will minus 3*%d/%d with %d which is %d\n",x,y,z, 3*x/y-z);
    printf("And finally it will add %d in it which will be %d\n",k, 3*x/y-z+k);
    printf("so that how we got 3*%d/%d-%d+%d is equals to %d",x,y,z,k, 3*x/y-z+k);
    return 0;
}