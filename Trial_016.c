#include<stdio.h>
void main(){
    int a=10;
    ++a;
    printf("%d",a);
    {
        int b=27;
        b++;
        printf("%d\t",b);
        printf("%d",a);
    }

    //---Now trying to print the value of b outside it's block
    //fputs(b,stdout);
}