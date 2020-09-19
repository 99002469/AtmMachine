#include "atm_func.h"
int withdraw_cash()
{
    extern int cash_deb;
    extern int withdraw_limit = 5000;/*This is for one time with drawl*/
    volatile extern int funds_avl = 100000; /*Considered an hypothetical case that there are only 100 rupee notes in the ATM*/
    volatile extern int notes_avl = 1000;
   printf("Please Enter the amount in multiples of 100\n");
   scanf("%d",&cash_deb);
   if(cash_deb<=withdraw_limit&&amount&&funds_avl)
   {
       /*
       write code to dispense cash*/
       if(cash_deb%100 != 0)
       {
           printf("Kindly enter the amount in multiples of 100\n");
       }
       else
       {
           funds_avl =- cash_deb;
           notes_avl =- funds_avl/100;
           amount =- cash_deb;
           printf("Dispensing the Cash Please Wait..\n");
           printf("Please Collect the cash and remove your card..\n");
           printf("Available Balance is: ",amount);
       }

   }
   else if (cash_deb>withdraw_limit)
   {
       printf("You are withdrawing more than daily limit of: ",withdraw_limit);
   }
   else if (cash_deb>amount)
   {
       printf("Insufficient funds in your account\n");
   }
   else if (cash_deb>funds_avl)
   {
       printf("Insufficient Funds in ATM to dispense\n");
   }
   else
   {
       printf("**NO CASH IN ATM**\n");
   }
}
