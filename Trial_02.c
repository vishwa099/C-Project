//------------------------Working with structures-----------------------//

// #include<stdio.h>
// struct student{
//     char name[40];
//     int roll;
//     float cgpa;
// };
// int main(){
//     struct student s1={"vishwambhar",222,9.8};        //--------------one way of initializing structures------------//
//     printf("%s",s1.name);
//     return 0;

// }



//----------------------Converting a number_string to int datatype-----------------------//
#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char digit_str[40];
    printf("Enter ur digit string:-");
    fgets(digit_str,40,stdin);
    printf("%s",digit_str);
    int len=strlen(digit_str);
    for(int i=0;i<len;i++){
        
    }
    return 0;
}