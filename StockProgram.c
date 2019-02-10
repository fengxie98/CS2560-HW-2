#include <stdio.h> //this is where printf() has been defined

//First Program

int main(){
	printf("Joe has bought 1000 shares of Acme Software at $45.5 a share\n");

//declarations
double shares1 = 1000*45.5;
double broker1 = (shares1 * (0.02));
double shares2 = (1000 * (56.9));
double broker2 = (shares2 * (0.02));
double profit = (shares2 - (shares1 + broker1 + broker2));

//charges displayed
printf("Joe originally paid $%.2lf\n", shares1);
printf("Joe paid his broker $%.2lf\n", broker1);
printf("\n");
printf("2 weeks later(spongebob voice)\n");
printf("\n");
printf("Joe sold his shares for $%.2lf\n", shares2);
printf("Joe paid his broker $%.2lf\n", broker2);
printf("\n");
printf("In total joe has made a profit of $%.2lf\n", profit);

}
