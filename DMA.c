
//---------------Learning aboout Dynamic Memory Allocation-----------------//
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr=(int *)malloc(5*sizeof(int));         //-----------IN this we forcefully allocated a 20 byte memory for storing our data--------//
    ptr[0]=26;
    ptr[1]=15;                                //------if we does not assign some thing to ptr of malloc it does not guarrantee that
    ptr[2]=78;                                         //--it intialises with 0 (it can be a garbage value) but calloc() guarrantees that
    ptr[3]=89;                                 //---it initialises ptr with zeroes values-----//
    ptr[4]=36;
    for (int i=0; i<5; i++){
        printf("%d\n",ptr[i]);

    }
    return 0;
}