
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Sawyer LH Cowley
 * ID:201958891
 */

 int main( void ) {

    // define and initialise variables for the problem data 

    // calculate the deductions and final take-home salary

    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
    //printf("NI contribution £...",var_name);
    //printf("Tax contribution £...",var_name);
    //printf("Take home salary £...",var_name);

    //setting variables 
    int salary = 36250;
    float national_insurance = 0.08;
    float tax_rate = 0.15;
    float take_home = 0;
    
    //calculating NI contribution
    float ni_contribution = salary * national_insurance;
    take_home = salary - ni_contribution;
    //deducting minimum take home
    float pre_tax = take_home - 12500;
    //cacluating tax contribution 
    float tax_contribution = pre_tax * tax_rate;
    //deducting contribution from take home
    take_home = take_home - tax_contribution;

   //printing data
    printf("Salary £%.2f\n",salary);
    printf("NI contribution £%.2f\n",ni_contribution);
    printf("Tax contribution £%.2f\n",tax_contribution);
    printf("Take home salary £%.2f\n",take_home);

    return 0;
 }