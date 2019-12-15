#include <stdio.h>
#include "MyLib.h"

/* main function */
int main(void)
{
	/* integers are declared and initialized*/
	int decimal;
	int run = 1;
	int array[8];
	
	printf("\nDecimal to binary convertor\n\n");
	
	/* While loop for generating out of bounds prompt */
	while(run)
	{
		printf("Please enter a decimal number between 0 and 255\t");
		scanf("%d",&decimal);
		printf("\n");
	
		if ( decimal >= 0 && decimal <= 255)
		{
			/* call functions and decimal print statement only*/
			ConvertDecimalToBinary(decimal, array);
			printf("Decimal %d converts to binary ", decimal);
			PrintBinary(array);
			printf("\n\n");
			
			return run = 0;
		}	
	
		else
		{
			printf("You entered a number not between 0 and 255\n\n");
		}
	}
	
	return run;
}

