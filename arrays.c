/**
 * @file arrays.h
 * @author Julio Sousa (201902012@estudantes.ips.pt)
 * @brief Provides the functions requered for the arrays (Lab2).
 * 
 * @version 1
 * @date 2022-03-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#include "arrays.h"

void printArray(int arr[], int arrLength) {
    printf("[ ");
    for(int i = 0; i < arrLength; i++) {
        printf("%d%s", arr[i], (i < arrLength - 1 ? ", " : ""));
    }
    printf("]\n");
}