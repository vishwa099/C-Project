#include<stdio.h>
void func(int n){
    if(n<=0){
        return ;
    }
    else{
        func(n-1);
        printf("%d",n);
        func(n-1);
    }
}

int main(){
    int n=4;
    func(4);
}