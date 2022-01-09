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
 * @file main.c
 * @brief Main entry point to the final assessment
 *
 * This file contains the main code for the final assessment.
 *
 * @author Ahmed Hassan
 * @date December 1, 2021
 * 
 */

#include "../include/common/course1.h"

/**************************************************************
 *                         MAIN FUNCTION                      *
 **************************************************************/

int main(void){

  #ifdef COURSE1
    course1();
  #endif

} /* END OF THE MAIN FUNCTION */
