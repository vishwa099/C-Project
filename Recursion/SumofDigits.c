#include<stdio.h>
int summoned(int x){
    if (x>=1 && x<10){
        return x;
    }
    else{
        return (x%10)+summoned(x/10);
    }
}
int main(){
    int n;
    printf("Enter ur number of which digits sum u want---> ");
    scanf("%d",&n);
    int ans=summoned(n);
    printf("the summation of digits is %d",ans);
}