#include <stdio.h>

int main(int argc, char *argv[]){
    int m,s;
    printf("input the second : ");
    scanf("%d",&s);
    m=s/60;
    s=s-m*60;
    printf("the time is %d : %d",m,s);
}