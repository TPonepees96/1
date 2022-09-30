#include <stdio.h>
int main(){
    int a;
    int x=0;
    int y=1;
    int z=x+y;
    printf("Enter the number of terms:");
    scanf("%d",&a);
    printf("Fibonacci series:%d,%d,",x,y);
    for(int i=3;i<=a;++i){
        printf("%d,",z);
        x=y;
        y=z;
        z=x+y;

    }
    return 0;
}