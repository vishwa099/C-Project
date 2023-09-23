#include<stdio.h>                         //-----refer to Extern_Keyword documentation----------//

extern int a;

void func(){
    ++a;
    printf("%d",a);

}
void main(){

    printf("%d\n",a);
    

}
//a=38;