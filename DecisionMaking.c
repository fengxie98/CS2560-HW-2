#include <stdio.h> //this is where printf() has been defined

//First Program

int main(){
	printf("Hi thanks for eating at our expensive restaurant, your bill is $88.67\n");

//declarations
double meal = 88.67;
double tax = 6.75/100*meal;
double total_with_tax = tax + meal;
double tip = 0.20*total_with_tax;
double total_bill = meal + tax + tip ;

//charges displayed
printf("Meal charge = %.2lf\n", meal);
printf("Tax charge = %.2lf\n", tax);
printf("Total with tax charge = %.2lf\n", total_with_tax);
printf("Tip charge = %.2lf\n", tip);
printf("Total bill charge = %.2lf\n", total_bill);


}
