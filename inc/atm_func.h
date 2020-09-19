#ifndef __ATM_FUNC_H__
#define __ATM_FUNC_H__

#iclude<stdio.h>
#include<string.h>
//#include<math.h>
#include<stdlib.h>
#include<stdbool.h>

void pin_check();
/*
this function is used to check the PIn entered by the user
and eat the card for more 2 wrong attempts
*/

int bal_check();
/*This function is used to check the balance*/

int withdraw_cash();
/* Function to with draw the balance from account*/

int deposit_cash();
/* Function to deposit to the account*/

int change_pin();
/*this is used to change the pin*/

int quit();
/*Returns 0 and goes to exit*/

#endif // __ATM_FUNC_H__
