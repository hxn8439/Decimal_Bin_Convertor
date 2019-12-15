# include<stdio.h>

void PrintBinary(int array[8]);
void ConvertDecimalToBinary(int decimal, int array[8]);

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

/* Convert decimal to binary function */
void ConvertDecimalToBinary(int decimal, int array[8])
{
	/* using integer input, decimal, then bit-shifting the integer to seven iterations 
	using a for-loop method*/
	
	int i;
	array[0] = decimal;
	
	for (i = 1; i < 8; i++)
	{
		array[i] = array[i-1] >> 1;
	}
	
	/* In a for-loop method, if and else-if conditions to sort even 
	and odd numbers, then convert each integers to binary and simultanously
	using bitmask, &1 and &0, to check if its even or odd integer. */
	
	for (i = 0; i < 8; i++)
	{
		if (array[i] % 2 == 0)
		{
			array[i] = array[i] & 0;
		}
	
		if (array[i] % 2 != 0)
		{
			array[i] = array[i] & 1;	
		}
	
	}	
	
	return;
}

/* print Binary function */
void PrintBinary(int array[8])
{
	printf("%d%d%d%d%d%d%d%d", array[7],array[6],array[5],array[4],array[3],array[2],array[1],array[0]);
	
	return;
}

