/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Ebenezer Dadson
 * @date December 11th, 2021
 *
 */



#include <stdio.h>
#include "stats.h"
#include <limits.h>

/* Size of the Data Set */
#define SIZE (40)

void main() {

	unsigned char array[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
        	                      114, 88,   45,  76, 123,  87,  25,  23,
                	              200, 122, 150, 90,   92,  87, 177, 244,
                        	      201,   6,  12,  60,   8,   2,   5,  67,
                                	7,  87, 250, 230,  99,   3, 100,  90};


	/* Other Variable Declarations Go Here */
	float mean, median, maximum, minimum;

	/* Statistics and Printing Functions Go Here */

	mean = find_mean( array, SIZE );

	median = find_median( array, SIZE );
 	
	maximum = find_maximum( array, SIZE );
  	
	minimum = find_minimum( array, SIZE );
	
	print_array( array, SIZE );
	print_statistics(mean, median, maximum, minimum);
}

/* Add other Implementation File Code Here */
void print_statistics( float mean, float median, float maximum, float minimum )
{

}


void print_array( unsigned char * data, int length )
{
		
}


float find_median( unsigned char * data, int length )
{
	
}


float find_mean( unsigned char * data, int length )
{
	
}


unsigned char find_maximum( unsigned char * data, int length )
{

}


unsigned char find_minimum( unsigned char * data, int length )
{

}


void  sort_array( unsigned char * data, int length )
{
	
}

