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
 * @file stats.h 
 * @brief All of the function prototypes/declarations for the stats.c file
 *
 * <Add Extended Description Here>
 *
 * @author Ebenezer Dadson
 * @date December 11th, 2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief print_statistics
 *
 * A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param data    unsigned char pointer to an n-element array
 * @param length  unsigned integer as the size of the array
 * 
 * @return min, max, mean, median
 */

void print_statistics( float mean, float median, float maximum, float minimum );


/**
 * @brief print_array
 *
 * A function that prints an array.
 *
 * @param data    unsigned char pointer to an n-element array
 * @param length  unsigned integer as the size of the array
 *
 * @return  unsigned char result of the array printed to console.
 */

void print_array(unsigned char * data, int length);


/**
 * @brief find_mean
 *
 * A function that finds the mean of an arrray.
 *
 * @param data    unsigned char pointer to an n-element array
 * @param length  unsigned integer as the size of the array
 *
 * @return  mean
 */

float find_mean(unsigned char * data, int length);


/**
 * @brief find_median
 *
 * A function that finds the median of an array.
 *
 * @param data    unsigned char pointer to an n-element array
 * @param length  unsigned integer as the size of the array
 * 
 * @return  median
 */

float find_median(unsigned char * data, int length);


/**
 * @brief find_maximum
 *
 * A function that finds the maximum of an array.
 *
 * @param data    unsigned char pointer to an n-element array
 * @param length  unsigned integer as the size of the array
 * 
 * @return maximum
 */

unsigned char find_maximum(unsigned char * data, int length);


/**
 * @brief find_minimum
 *
 * A function that finds the minimum of an array.
 *
 * @param data    unsigned char pointer to an n-element array
 * @param length  unsigned integer as the size of the array
 * 
 * @return minimum
 */

unsigned char find_minimum(unsigned char * data, int length);


/**
 * @brief sort_array
 *
 * A function that sorts an array from largest to smallest value.
 *
 * @param data    unsigned char pointer to an n-element array
 * @param length  unsigned integer as the size of the array
 * 
 * @return array
 */

void sort_array(unsigned char * data, int length);


#endif /* __STATS_H__ */
