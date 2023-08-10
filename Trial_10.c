#include<stdio.h>
int main(){
    int num[5];
    for (int i=0; i<=5; i++){
        printf("Enter the %d th element of ur num array.",i+1);
        scanf("%d",num[i]);
    }
}