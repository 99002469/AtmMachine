#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <atm_func.h>
#define PROJECT_NAME    "AtmMachine"

/* Prototypes for the test functions */
int bal_check();
/*This function is used to check the balance*/
int withdraw_cash();
/* Function to with draw the balance from account*/
int deposit_cash();
/* Function to deposit to the account*/
int change_pin();
/*this is used to change the pin*/
int quit();

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "check_balance", test_bal_check);
  CU_add_test(suite, "withdraw_cash", test_withdraw_cash);
  CU_add_test(suite, "deposit_cash", test_deposit_cash);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_bal_check(void) {
  CU_ASSERT(10000 == bal_check(10000));
  
}

void test_withdraw_cash(void) {
  CU_ASSERT(4000 == withdraw_cash(4000));
  
 
}

void test_deposit_cash(void) {
  CU_ASSERT(false == deposit_cash(1120));
  
}
