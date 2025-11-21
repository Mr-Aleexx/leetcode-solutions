#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    long long* accounts;
    int n_accounts;
} Bank;


void printBank(Bank* bank) {
    printf("Bank : \n");
    for (int i = 0 ; i < bank->n_accounts ; i++) {
        printf("\tAccount %d, Money : %lld\n", i+1, bank->accounts[i]);
    }

}

Bank* bankCreate(long long* balance, int balanceSize) {
    Bank* bank       = malloc(sizeof(Bank));
    bank->n_accounts = balanceSize;
       
    if (bank) {

        bank->accounts   = malloc(balanceSize * sizeof(long long));
        if (bank->accounts) {
            memcpy(bank->accounts, balance, balanceSize * sizeof(long long));
        }
        else{
            free(bank);
            return NULL;
        }
    }
    else {
        return NULL;
    }
    return bank;
}

bool bankTransfer(Bank* obj, int account1, int account2, long long money) {


    if(account1 - 1 < 0 || account1 - 1 >= obj->n_accounts){
        printf("Invalid account number\n"); 
        return false;
    }
    if(account2 - 1 <  0 || account2 - 1 >= obj->n_accounts) {
        printf("Invalid account number\n"); 
        return false;
    }

    if(obj->accounts[account1] < money) {
        printf("The amount of money in the account %d is too low (%lld)\n", account1, obj->accounts[account1]);
        return false;
    }

    obj->accounts[account1 - 1] -= money;
    obj->accounts[account2 - 1] += money;

    printf("%lld$ has been succefully transfered from account %d to account %d\n",money, account1, account2);

    return true;
}

bool bankDeposit(Bank* obj, int account, long long money) {

    if (account - 1 < 0 || account - 1 >= obj->n_accounts) {
        printf("Invalid account number\n");
        return false;
    }
    obj->accounts[account - 1] += money;
    printf("%lld$ have been succesfully deposited in the account %d\n", money, account);

    return true;
}

bool bankWithdraw(Bank* obj, int account, long long money) {

    if (account - 1 < 0 || account - 1 >= obj->n_accounts) {
        printf("Invalid account number\n");
        return false;
    }

    if (obj->accounts[account - 1] < money) {
        printf("The ammount of money in the account %d is too low to withdraw money\n", account);
        return false;
    }

    obj->accounts[account - 1] -= money;
    printf("%lld$ have been succesfully withdrawed in the account %d\n", money, account);


    return true;
}

void bankFree(Bank* obj) {
    free(obj->accounts);
    free(obj);
}

void handle_transactions(){
    while (true) {
        printf("Welcome to the bank manager\n");
        printf("First generate your first bank\n");
        
    }
}

int main () {
    int n = 4;
    long long balance[] = {10, 20, 30, 40};
    Bank* bank1 = bankCreate(balance, n);
    printf("Before Transfer :\n");
    printBank(bank1);
    //bankTransfer(bank1, 1, 2, 10);
    bankDeposit(bank1, 1, 10);
    printf("After Deposit : \n");
    printBank(bank1);
    bankFree(bank1);
    return 0;
}
