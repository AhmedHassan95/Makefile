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
 * @brief C programming File that calculates some statistics
 *
 * @author Ahmed Hassan
 * @date December 1, 2021
 * 
 * A simple C-Program that exhibits a handful of basic c-programming
 * features to show how to calculate some statistics on a set of numbers:
 *     -Mean
 *     -Maximum
 *     -Minimum
 *     -Sort from larger to smaller
 *     -Median
 * 
 * Then print these statistics.
 * 
 */

#include "../include/common/stats.h"

/******************************************************************************
 *                                MAIN FUNCTION                               *
 ******************************************************************************/
/*
void main(void) {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  // Other Variable Declarations 
  unsigned long mean;
  unsigned long max;
  unsigned long mini;
  unsigned long median;

  // Statistics and Printing Functions 
  
  PRINTF("\nThe array after sorting: \n");

  sort_array(test, SIZE);

  print_array(test, SIZE);

  mean = find_mean(test, SIZE);

  mini = find_minimum(test, SIZE);

  max = find_maximum(test, SIZE);

  median = find_median(test, SIZE);

  print_statistics(mean, mini, max, median);

}
*/

/* Other Implementation File */

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
void print_array(unsigned char * ptr, unsigned long count){
  /* The array will print only if the user defines "VERBOSE" in the command line */
  #ifdef VERBOSE

  unsigned long i;

  /* Check for input validation */
  if ( ptr == NULL ){
    PRINTF("Please Enter a valid Input\n");
    return;
  }

  if ( count <= 0 ){
    PRINTF("The array is empty...\n");
    return;
  }

  for( i = 0; i < count; i++){
    if(i % 8 == 0){
      PRINTF("\n");
    }
    PRINTF("%d \t", ptr[i]);
  }

  PRINTF("\n");

  #endif
}

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
unsigned long find_mean(unsigned char * ptr, unsigned long count){

  unsigned long i;
  unsigned long sum = 0;

  /* Check for input validation */
  if ( ptr == NULL){
    return 0;
  }
  
  if ( count <= 0 ) {
    count = 1;
  }
  
  for(i = 0; i < count; i++){
    sum = sum + ptr[i];
  }
 
  return (sum / count);
}

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
void sort_array(unsigned char * ptr, unsigned long count){

  unsigned long i;
  unsigned long j;
  unsigned long temp;

  /* Check for input validation */
  if ( ptr == NULL ){
    PRINTF("Please Enter a valid Input\n");
    return;
  }

  if ( count <= 0 ){
    PRINTF("The array is empty...\n");
    return;
  }

  
  for(i = 0; i < count-1; i++){
    for(j = 0; j < count-i-1; j++){
      if( ptr[j+1] > ptr[j] ){
        temp = ptr[j+1];
        ptr[j+1] = ptr[j];
        ptr[j] = temp;

      }
    }
  }
}

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
unsigned long find_maximum(unsigned char * ptr, unsigned long count){

  unsigned long i;
  unsigned long max;

  /* Check for input validation */
  if ( ptr == NULL ){
    PRINTF("Please Enter a valid Input\n");
    return -1;
  }

  if ( count <= 0 ){
    PRINTF("The array is empty...\n");
    return -1;
  }

  max = ptr[0];


  for(i = 0; i < count; i++){
    if( ptr[i] > max ){
      max = ptr[i];
    }
  }

  return max;
}

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
unsigned long find_minimum(unsigned char * ptr, unsigned long count){

  unsigned long i;
  unsigned long mini;

  /* Check for input validation */
  if ( ptr == NULL ){
    PRINTF("Please Enter a valid Input\n");
    return -1;
  }

  if ( count <= 0 ){
    PRINTF("The array is empty...\n");
    return -1;
  }

  mini = ptr[0];

  for(i = 0; i < count; i++){
    if( ptr[i] < mini ){
      mini = ptr[i];
    }
  }

  return mini;
}

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
unsigned long find_median(unsigned char * ptr, unsigned long count){

  /* Check for input validation */
  if ( ptr == NULL ){
    PRINTF("Please Enter a valid Input\n");
    return -1;
  }

  if ( count <= 0 ){
    PRINTF("The array is empty...\n");
    return -1;
  }

  if( (count % 2) == 0 ){
    return (ptr[count/2]);
  }
  else{
    return ( (ptr[count/2] + ptr[count/2]+1) / 2);
  }
}

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
                      unsigned long max,  unsigned long median){

  PRINTF("\nThe mean value is    : %ld\n", mean);
  PRINTF("\nThe minimum value is : %ld\n", mini);
  PRINTF("\nThe maximum value is : %ld\n", max);
  PRINTF("\nThe median value is  : %ld\n", median);
  PRINTF("\n");
}