#include <stdio.h>

int main() {
    int choice;
    int balance = 5000 ;
    for (int i=1;i>0;i++) {
    printf("                   \n\n Welcome!!              ");
    printf("\n \n   Menu\n     1.Withdraw \n     2.Deposit \n     3.Current Balance \n     4.Exit \n");
    printf("\n Enter the Task:");
    scanf("%d",&choice);

        

    if (choice==2) {
        int deposit_amt ;
        printf("\nEnter the amt to be deposited:");
        scanf("%d",&deposit_amt) ;
        if (deposit_amt<=0){
            printf("Error in depositing");
        }
        else {
            balance = balance + deposit_amt ;
            printf("\nThe amt is successfully deposited!!");
            printf("\n the available balance is= %d\n",balance);
        }
    }

    else if (choice == 1) {
        int withdraw_amt ;
        printf("\nEnter the amt to be withdrawl:");
        scanf("%d",&withdraw_amt);
        if (withdraw_amt<=0 || withdraw_amt>balance) {
            printf("\nError in withdrawl");
        }
        
        else {
            balance = balance - withdraw_amt;
            printf("\nThe amt is successfully withdrawl !!");
            printf("\nThe available balance is= %d\n",balance);
        }
    }

    else if (choice == 4) {
        printf("\nTask exit,return 0");
    }
    else if (choice== 3) {
        printf("\nYour current balance is %d",balance);
    }
    }
    return 0;
}
