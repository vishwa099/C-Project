#include<stdio.h>

void printCount(int x){
    if(x==0){
        return;
    }
    else{
        printf("%d",x);
        return printCount(x-1);
    }
    

    
}
int main(){
    int n;
    printf("Enter the number upto which u wnat couting---> ");
    scanf("%d",n);
    printCount(n);
    return 0;
}