

//----------------------------------------------Passing Structures to Functions------------------------------//

#include<stdio.h>

typedef struct student{
    char name[40];
    int roll;
    float cgpa;

}stu;               //------------Here i also uses the alias name for my structure stu using typedef keyword----------------//
void printInfo(stu k);
int main(){
    stu s1={"vishwa",234,9.8};
    printInfo(s1);          //--------------------------Passed a structure variable into a function---------------------//
}
void printInfo(stu k){
    printf("The name of the passed student is=%s\n",k.name);
    printf("The roll number of the passed student is=%d\n",k.roll);
    printf("the cgpa of passed student is=%f\n",k.cgpa);

}