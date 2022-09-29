#include<stdio.h>
int main(){
    float radius,aoc;
    printf("Enter radius of circle in cm:");
    scanf("%f",&radius);
    aoc=3.14*(radius*radius);
    printf("Area of circle of entered radius:%f cm^2",aoc);

}