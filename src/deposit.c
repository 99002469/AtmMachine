#include "atm_func.h"
int deposit_cash()
{
    extern int cash_cr = 0;
    extern int deposit_limit = 10000;
    extern int return_notes = 0;
    printf("Please Enter the cash in multiples of 100\n");
   scanf("%d",&cash_cr);
   if(cash_cr<=deposit_limit)
   {
       /*
       write code to add cash*/
       if(cash_cr%100 != 0)
       {
           printf("Kindly enter the cash in multiples of 100\n");
       }
       else
       {
           funds_avl =+ cash_cr;
           notes_avl =+ funds_avl/100;
           if(notes_avl == 1000)
           {
               printf("No more notes can be added\n");
               return_notes = cash_cr/100;
               printf("%d notes are returned..",return_notes);
           }
           amount =+ cash_cr;
           printf("Adding the Cash Please Wait..\n");
           printf("Available Balance is: ",amount);
       }

   }
}
