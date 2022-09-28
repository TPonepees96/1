#include<stdio.h>

int main(){

    float x,y,bmi;
    printf("Enter weight in kg:");
    scanf("%f",&x);
    printf("Enter height in m:");
    scanf("%f",&y);
    bmi=x/(y*y);
    printf("bmi=%f",bmi);
    return 0;
}