#include "atm_func.h"
void pin_check()
{
    printf("Please enter Your 4 digit pin to proceed:\n");
    int curr_pin = 2048; // pin that is set by user
    int atm_pin; // pin that user will enter
    int banking_func;
    int attempt = 0;//set the initial attempts to 0
    scanf("%d",&atm_pin);//read user entered pin
    int val = strcmp(curr_pin,atm_pin);
    if(val == 0)
    {
        printf("You have entered right PIN");
        printf("\n***********WELCOME TO ABC ATM*****************\n");
        printf("\n please choose available Banking operations:\n");
        printf("\n 1. Check Available Balance\n 2. Withdraw Cash\n 3. Deposit Cash\n 4. Change PIN\n 5. Quit\n");
        scanf("%d",&banking_func);
        switch (banking_func)
        {
        case 1:
            printf("You have choose to Check available balance:\n");
            goto bal_check();
            break;
        case 2:
             printf("You have choose to Withdraw Cash:\n");
             goto withdraw_cash();
             break;
        case 3:
              printf("You have choose to Deposit Cash:\n");
              goto deposit_cash();
              break;
        case 4:
             printf("You have choose to Change pin:\n");
             goto change_pin();
             break;
        case 5:
             printf("Thank You for using our service:\n");
             break;
        default:
            printf("You have entered INVALID NUMBER..\n");

        }

    }
    else{
            while(attempt<3)
            {
                if(curr_pin!=2048)
                {
                   printf("INVALID PIN\n");
                   attempt++;
                }
            }
            if(attempt==3)
                printf("Your card has been eaten by machine for entering wrong pin for 3 times\n");
    }

}
