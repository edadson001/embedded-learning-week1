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
 * @file stats.c 
 * @brief A program file using the c-programming language that performs and prints statistical analysis.
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
	
	// Perform statistical analysis
	mean = find_mean( array, SIZE );

	median = find_median( array, SIZE );
 	
	maximum = find_maximum( array, SIZE );
  	
	minimum = find_minimum( array, SIZE );
	
	// Print array and it's statistical analytics
	print_array( array, SIZE );
	print_statistics(mean, median, maximum, minimum);
}

/* Add other Implementation File Code Here */
void print_statistics( float mean, float median, float maximum, float minimum ){
	printf("\n\nThe mean of the array is equal to %.3f\n", mean);
  
	printf("\nThe median of the array is equal to %.1f\n", median);

	printf("\nThe maximum of the array is equal to %.1f\n", maximum);

	printf("\nThe minimum of the array is equal to %.1f\n", minimum);
}


void print_array( unsigned char * data, int length ){
		
	sort_array( data, length);

	printf("\nPrinting in Descending order:\n ");

	for (int i = 0; i < length; i++) {
		printf(" %hhu ", data[i]);
	}
}


float find_median( unsigned char * data, int length ){
	
	// Sort the array
	sort_array( data, length);

	// check for even case
	if (length % 2 != 0)
		return (float) data[length / 2];

	return (float) (data[(length - 1) / 2] + data[length / 2]) / 2.0;
}


float find_mean( unsigned char * data, int length ){
	
	// Collect integer values in array test of size SIZE
        int sum = 0;
        float mean = 0; 
        
	// Add all the values of array to get sum
        for( int i = 0; i < length; i++ ) {
		sum += data[i];
	}

        return (float)sum / (float)length;
}


unsigned char find_maximum( unsigned char * data, int length ){
	// Loop for comparing other values
	unsigned char maximum = 0;

        for (int i = 0; i < length; i++) {
        	if (data[i] > maximum) {
                	maximum = data[i];
                }
	}
	return maximum;
}


unsigned char find_minimum( unsigned char * data, int length ){
	// Loop for comparing other values
        unsigned char minimum = UCHAR_MAX;

        for (int i = 0; i < length; i++) {
                if (data[i] < minimum) {
                        minimum = data[i];
                }
        }
        return minimum;
}


void  sort_array( unsigned char * data, int length ){
	
	// Loop to sort the array in descending order
	for (int i = 0; i < length; i++) {
		// Loop for comparing other values
		for (int j = 0; j < length; j++) {
			if (data[j] < data[i]) {
				unsigned char temp = data[i];
			  	data[i] = data[j];
				data[j] = temp;
			}
		}
	}

}

