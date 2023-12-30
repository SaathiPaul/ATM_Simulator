//This program is a part of TechnoHacks Virtual Internship.

//Task 7 :- ATM Simulator

#include <stdio.h>

struct Account 
{
    int accountNumber;
    float balance;
};

void checkBalance(struct Account *account) 
{
    printf("Account Balance: Rs.%.2f\n", account->balance);
}

void deposit(struct Account *account, float amount) 
{
    account->balance += amount;
    printf("Deposit Successful. New balance: Rs.%.2f\n", account->balance);
}

void withdraw(struct Account *account, float amount) 
{
    if (amount <= account->balance) 
    {
        account->balance -= amount;
        printf("Withdrawal Successful. New balance: Rs.%.2f\n", account->balance);
    } 
    else 
    {
        printf("Insufficient Funds. Withdrawal Failed.\n");
    }
}

int main() 
{   
    struct Account userAccount;
    userAccount.accountNumber = 12345; 
    userAccount.balance = 1000.00;
    int choice;
    float amount;
    do 
    {        
        printf("\n---ATM Menu---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                checkBalance(&userAccount);
                break;
            case 2:
                printf("Enter the Amount to Deposit: Rs.");
                scanf("%f", &amount);
                deposit(&userAccount, amount);
                break;
            case 3:
                printf("Enter the Amount to Withdraw: Rs.");
                scanf("%f", &amount);
                withdraw(&userAccount, amount);
                break;
            case 4:
                printf("Exiting ATM. Thank You!\n");
                break;
            default:
                printf("Invalid Choice. Please Try Again.\n");
        }
    } 
    while (choice!=4);
    return 0;
}
