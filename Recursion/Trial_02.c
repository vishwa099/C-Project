#include<stdio.h>
void f(){
    static int count=1;
    count ++;
    printf("%d",count);
}

void main(){
    //calling a function

    f();
    f();
    f();
    f();
}