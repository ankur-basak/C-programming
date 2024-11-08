#include<stdio.h>

int main(){

    int x = 5;
    int *ptr;

    ptr = &x;

    printf("%d\n", x); //print value of x
    printf("%d\n", &x); //Print value of address x
    printf("%d\n", ptr); //Print same as line 11
    printf("%d\n", *ptr); //Print same as line 10
    printf("%d\n", &ptr); //pointer Variable address

}
