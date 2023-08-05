#include<stdio.h>
int main(){
    FILE *file_pointer;  //--------------First of all u have to initialize a file pointer which navigates through the vary first letter of ur doc---//
    file_pointer=fopen("Text_01.txt","r");
    char ch;
    fscanf(file_pointer,"%c",&ch);
    printf("%c",ch);
    return 0;
}