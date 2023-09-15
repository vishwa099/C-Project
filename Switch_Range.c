#include<stdio.h>
void main(){
    int a=24;          //---Tried range functionality at switch statements---------//
    switch(a){
        case 10 ...20: printf("U enterd between ten and twenty.");
                       break;
        case 21 ...25: printf("Another trial");
                       break;
        default: printf("hello");
                       break;
    }
}