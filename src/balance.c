#include "atm_func.h"
int bal_check()
{
    volatile extern int amount = 10000; // initial funds in the account
    printf("Available Balance in your account is: ",amount);//displays the balance in the account
}
