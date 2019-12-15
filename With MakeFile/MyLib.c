#include "MyLib.h"
#include <stdio.h>

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

