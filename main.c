#include <stdio.h>

int main(int argc, char *argv[]){
    int y;
    printf("input the year : ");
    scanf("%d",&y);
    printf("Is this year %d the leap year? %d",y,(y%4==0&&y%100!=0)||y%400==0);
}