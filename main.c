#include <stdio.h>

int main(int argc, char *argv[]){
    int a,b;
    printf("enter an integer : ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("+ result is %d\n",a+b);
    printf("- result is %d\n",a-b);
    printf("* result is %d\n",a*b);
    printf("/ result is %d\n",a/b);
    printf("%% result is %d\n",a%b);
}