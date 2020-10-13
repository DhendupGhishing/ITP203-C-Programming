#include <stdio.h>
int main(){
    printf("Enter the amount  you want to deposit");
    int amount;
    scanf("%d",&amount);
    if (amount>1000){
        printf("  Amount successfully Deposited:  %d",amount);
    printf(" choose your options\n");
    printf(" 1 for credit\n 2 for debit \n 3 balance and enquiry \n");
    int option;
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        printf("Enter the amount you want to credit ");
        int credit;
        scanf("%d",&credit);
        amount=amount+credit;
        printf(" Now your balance is: %d",amount);
        break;
    case 2:
        printf("Enter the amount you want to debit\n");
        int debit;
        scanf("%d",&debit);
        amount=amount-debit;
        printf(" You have debited Nu %d", debit);
        printf(" Now your left balance is Nu %d",amount);
        break;
    case 3:
        printf("You have choosen to check your balance and enquiry\n");
        printf(" Your balance is your account is Nu %d",amount);

    
    default:
        printf("We dont have %d option \n",option);
        break;
    }
    
}
else{
    printf("Your amount should more than  1000");
}

}
    
