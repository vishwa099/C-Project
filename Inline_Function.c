#include<stdio.h>


static inline int check(int a , int b){
    int k=a>b?a:b;
    return k;
}
void main(){
    


    int a=20;
    int b=40;
    int max=check(a,b);
    printf("%d",max);

}