#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,e;
    int f=1;
    
    
    for(int x=0;x<10000;x++){
    printf("\nEnter choice");
    printf("\n1.Algebraic Operation");
    printf("\n2.Power");
    printf("\n3.Factorial");
    printf("\n4.Check for odd/even");
    printf("\n5.Square root");
    printf("\n:");
    scanf("%d",&c);
   
    switch(c){
    case 1:
        printf("Enter two numbers:");
        scanf("%d%d",&a,&b);
        printf("\n1.Addition");
        printf("\n2.Subtraction");
        printf("\n3.Multiplication");
        printf("\n4.Division");
        printf("\n:");
        scanf("%d",&d);
        switch(d){
        case 1:
               printf("%d",a+b);
               break;
        case 2:
               printf("%d",a-b);
               break;
        case 3:
               printf("%d",a*b);
               break;
        case 4:
               printf("%d",a/b);
        default:
               printf("Invalid input");
               break;
            


    }
    break;
    case 2:
        printf("Enter number:");
        scanf("%d",&a);
        printf("Enter power:");
        scanf("%d",&b);
        printf( "%lf",pow( a, b));
    break;
    case 3:
        printf("Enter number:");
        scanf("%d",&e);
        for(int i=1;i<=e;i++){
            f*=i;
            

        }
        printf("%d\n",f);
    break;
    case 4:
        printf("Enter a number:");
        scanf("%d",&a);
        if(a%2==0){
            printf("%d is even",a);

    }   else{
        printf("%d is odd",a);
    } 
    break;
    case 5:
        printf("Enter a number: ");
        double g, h;
        scanf("%lf",&g);
        h=sqrt(g);
        printf("%.2lf",h);
    break;
    default:
        printf("Invalid input");
    break;



        
        


    
    
}
    
}
return 0;
}