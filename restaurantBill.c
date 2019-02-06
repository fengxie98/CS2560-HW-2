#include <stdio.h> //this is where printf() has been defined

//First Program

int main( int argc, char **arg){
	printf("Hello Feng\n");
	printf("How are you?\n");


//declarations
int x;
char y;
double z;

//Assignments
x = 3;
y = 'B';
z = 3.14;

//Dec and Assignments
int P = 2;

printf("X = %d\n", x);
printf("Y = %c\n", y); //%C print out value y as a character
printf("z = %.2f\n", z);

//X = 3
x++; //post increment
printf("X = %d\n", x);
++x; //pre-increment
printf("X = %d\n:", x);

//X=5
int a =4;
int checkPre = ++x+a;
int checkPost = a+x++;
printf("checkPre = %d\n", checkPre);
printf("checkPost = %d\n", checkPost);


}
