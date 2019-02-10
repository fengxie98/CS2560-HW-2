#include <stdio.h> //this is where printf() has been defined

//First Program

 main(){

	printf("This is Pattern A\n");

	char print ='+';
	int row, col;
	int numRows = 10;
	int numCol = 10;

	for(row=1;row<=10;row++){

		for(col=1;col<=row;col++){
			printf("%c", print);
		}
		printf("\n");
	}

	printf("\n");
	printf("This is Pattern B\n");

	for(row=1;row<=numRows;row++){

			for(col=1;col<=numCol;col++){
				printf("%c", print);
			}
			printf("\n");
			numCol--;
		}
}
