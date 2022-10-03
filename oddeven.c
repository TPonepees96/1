#include<stdio.h>
int main(){
    int x;
    printf("Enter number:");
    scanf("%d",&x);
    (x%2==0)?printf("%d is even",x):printf("%d is odd",x);
}