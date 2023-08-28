
//--------Summation of elements in the list-----------//
#include<stdio.h>
int main(){
    int list[]={1,2,3,4,5,6,7,8,9};
    int sum=0;;
    for(int i=0; i<=9; i++){
        sum+=list[i];
    }
    printf("The sum is %d",sum);
    return 0;

}