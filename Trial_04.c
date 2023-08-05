


//--------------------------------usage of typedef Keyword--------------------------//
// It used to create alias name for structure datatype.
 

 #include<stdio.h>
 int main(){
    FILE *fptr; //-------------Declaration of a file pointer------------//
    fptr=fopen("Text_01.txt","w");
    //fprintf(fptr,"%s","\nEaten by Vishwa_099");
    //printf("%c",fgetc(fptr));               method of printing from file using fgetc and simple printf

    fputc('M',fptr);
    fputc('a',fptr);
    fputc('n',fptr);
    fputc('g',fptr);
    fputc('o',fptr);               //----------After this mango has been written to Text_01.txt file which was opened in write mode-------//



    fclose(fptr);
    return 0;
 }