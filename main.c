#include <stdio.h>
#include <math.h>

int main(){

float annual_interest; 
int total_payments;
float cost_of_car;
float down_payment;
    
// intputs 
printf("CALCULATE LOAN PAYMENT\n");

printf("Enter total cost of car: ");
scanf("%f",&cost_of_car);

printf("Enter down Payment: ");
scanf("%f",&down_payment);

printf("Enter annual interest rate: ");
scanf("%f",&annual_interest);

printf("Enter number of payments: ");
scanf("%d",&total_payments);

float monthly_interest = annual_interest / 12;
float principle = cost_of_car - down_payment;
float monthly_payment =  (principle * monthly_interest)/ (1 - pow(1 + monthly_interest,- total_payments));


printf("Your monthly payment is: %f",monthly_payment);


return 0;
}