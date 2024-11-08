#include<stdio.h>

int main(){

    int x = 10, y=20, sum, sub, mul,div;

    int *ptr1, *ptr2;

    ptr1 = &x;
    ptr2 = &y;

    sum= *ptr1 + *ptr2;
    printf("Sum = %d\n",sum);

    sub= *ptr2 - *ptr1;
    printf("Sub = %d\n",sub);

    mul= *ptr1 * *ptr2;
    printf("Mul = %d\n",mul);

    div= *ptr2 / *ptr1;
    printf("Div = %d\n",div);

}


