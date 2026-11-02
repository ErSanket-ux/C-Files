#include <stdio.h>

int main() {

    int choice ;
    int a, b ;

    for (int i = 1 ; i > 0 ; i++) {

    printf("\nMenu:\n   1.Addition\n   2.Subtraction\n   3.Multiplication\n   4.Division\n   5.Modulus\n   6.Exit\n");
    printf("  \nEnter the operation : ") ;
    scanf("%d",&choice);

     if (choice==6) {
        printf("\nExiting the program");
        return 0;
    }
    
    char A[]= "first operand";
    char B[]= "second operand";

    printf("\nEnter %s:",A);
    scanf("%d",&a);
    printf("Enter %s:",B);
    scanf("%d",&b);

    if (choice==1) {
        printf("\n%d + %d = %d\n",a,b,a+b);
    }
    else if (choice==2) {
        printf("\n%d - %d = %d\n",a,b,a-b);
    }
    else if ( choice == 3 ){
        printf("\n%d * %d = %d \n" ,a,b, a*b) ;
    }

    else if (choice==4) {
        printf("\n%d / %d=%d\n",a,b, a/b);
    }

    else if (choice==5) {
        printf("\n%d % %d=%d\n",a,b, a%b);
    }

    else {
        printf("\n Wrong Command \n") ;
    }

    }
    return 0;
     
    
}