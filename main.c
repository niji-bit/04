#include <stdio.h>

int main(int argc, char *argv[]){
    int h,m,s;
    printf("input the second : ");
    scanf("%d",&s);
    h=s/3600;
    m=(s-h*3600)/60;
    s=s-h*3600-m*60;
    printf("the time is %d : %d : %d",h,m,s);
}