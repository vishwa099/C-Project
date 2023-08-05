#include<stdio.h>
int main(){
    int n;
    printf("Enter the number upto which u want to store odd number:-");
    scanf("%d",&n);
    FILE *fptr;
    fptr=fopen("Odd_Num.txt","w+");
    for (int i=0; i<=n; i++){
        if (i%2!=0){
            fprintf(fptr,"%d\n",i);
        }
        }
    return 0;
}