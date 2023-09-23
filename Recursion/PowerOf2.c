#include<stdio.h>


int powerOf2(int x, int y){
    //----Here we are goint to write a recursive function

    if(y==0){
        return 1;
    }
    else{
        return x*powerOf2(x,y-1);
    }
}
int main()
{
    
    int a,b;
    printf("enter the value of a and b :--- > ");
    scanf("%d%d",&a,&b);
    int ans=powerOf2(a,b);
    printf("%d",ans);
    
    return 0;
}