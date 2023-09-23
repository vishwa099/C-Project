#include<stdio.h>
double f(int x){
    double a;
    a=x*9.8;
    return a;
}

void main(){
    double x;
    x=f(3);
    printf("%f",x);
}