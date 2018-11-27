/*
 *     SocialLedge.com - Copyright (C) 2013
 *
 *     This file is part of free software framework for embedded processors.
 *     You can use it and/or distribute it as long as this copyright header
 *     remains unmodified.  The code is free for personal use and requires
 *     permission to use in a commercial product.
 *
 *      THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 *      OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 *      MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 *      I SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR
 *      CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 *     You can reach the author of this software at :
 *          p r e e t . w i k i @ g m a i l . c o m
 */

/**
 * @file
 * @brief This is the application entry point.
 *          FreeRTOS and stdio printf is pre-configured to use uart0_min.h before main() enters.
 *          @see L0_LowLevel/lpc_sys.h if you wish to override printf/scanf functions.
 *
 */

// C Libraries
#include <stdio.h>
#include <fstream>

// Preet's Functions
#include "tasks.hpp"
#include "examples.hpp"
#include "periodic_callback.h"
#include "uart2.hpp"
#include "uart3.hpp"
#include "utilities.h"



int main(void)
{
   int byte 
   FILE *fd = fopen("1:Louis Armstrong - What A Wonderful World (Lyrics).mp3", "r");

    if(fd){
        printf("File successfully opened.\n\n");
        char x = getc(fd);
        printf("x : %c\n", x);
        int i=0;
        while((x!=EOF) && (i<=100)){
        x = getc(fd);
        printf("x : %c", x);
        printf("\n");
        i++;
        }
        fclose(fd);
    }
    else{
        printf("File failed to open\n");
    }
   return 0; 
} 