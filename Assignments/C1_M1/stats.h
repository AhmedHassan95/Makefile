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
 * @brief Header File that contains declarations and prototypes of stats.c
 *
 * The header file that contains the declarations of the data set
 * All functions prototypes that used to calculate the statistics.
 * 
 * @author Ahmed Hassan
 * @date December 1, 2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

#define SIZE (40)   /* Size of the Data Set */

/******************************************************************************
 *                             FUNCTION DECLARATIONS                          *
 ******************************************************************************/
 
/**
 * @brief Prints values in a set of data 
 *
 * This function takes an array and the size of it, then print it on the screen.
 *
 * @param ptr Pointer to a data set
 * @param count Number of items in data set
 *
 * @return void.
 */
void print_array(unsigned char * ptr, unsigned long count);

/**
 * @brief Finds mean value in a set of data
 *
 * This function takes a set of numbers and performs finds the mean of
 * of the set.
 *
 * @param ptr Pointer to a data set
 * @param count Number of items in data set
 *
 * @return Mean of the numbers provided.
 */
unsigned long find_mean(unsigned char * ptr, unsigned long count);

/**
 * @brief Sorts the value in a set of data form larger to smaller
 *
 * This function takes a set of numbers and sorts the data in it from the 
 * larger to the smaller.
 *
 * @param ptr Pointer to a data set
 * @param count Number of items in data set
 *
 * @return void.
 */
void sort_array(unsigned char * ptr, unsigned long count);

/**
 * @brief Finds the maximum value in a set of data
 *
 * This function takes a set of numbers and finds the maximum number.
 *
 * @param ptr Pointer to a data set
 * @param count Number of items in data set
 *
 * @return Maximum number in the set.
 */
unsigned long find_maximum(unsigned char * ptr, unsigned long count);

/**
 * @brief Finds the minimum value in a set of data
 *
 * This function takes a set of numbers and finds the minimum number.
 *
 * @param ptr Pointer to a data set
 * @param count Number of items in data set
 *
 * @return Minimum number in the set.
 */
unsigned long find_minimum(unsigned char * ptr, unsigned long count);

/**
 * @brief Finds the median value in a set of data
 *
 * This function takes a set of numbers and finds the median number.
 *
 * @param ptr Pointer to a data set
 * @param count Number of items in data set
 *
 * @return Median number in the set.
 */
unsigned long find_median(unsigned char * ptr, unsigned long count);

/**
 * @brief Prints the statistics of a set of data
 *
 * This function takes mean, minimum, maximum, and median then prints these
 * values.
 *
 * @param mean The mean value in the data set
 * @param mini The minimum value in the data set
 * @param max The maxmum value in the data set
 * @param median The median value in the data set
 *
 * @return void.
 */
void print_statistics(unsigned long mean, unsigned long mini, 
                      unsigned long max,  unsigned long median);

#endif /* __STATS_H__ */
