#include <stdio.h> //this is where printf() has been defined

//First Program

int main(){
	printf("Starting with ocean level at 100mm\n");

//declarations
double o_level = 100;
double o_level5 = (o_level + (5*1.5));
double o_level7 = (o_level + (7*1.5));
double o_level10 = (o_level + (10*1.5));

//charges displayed
printf("Starting out %.2lf\n", o_level);
printf("Ocean level in 5 years will be %.2lf\n", o_level5);
printf("Ocean level in 7 years will be %.2lf\n", o_level7);
printf("Ocean level in 10 years will be %.2lf\n", o_level10);


}
