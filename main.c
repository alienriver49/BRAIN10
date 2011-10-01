/* 
 * File:   main.c
 * Author: brian
 *
 * Created on September 22, 2011, 7:13 PM
 */

#include "BrainMain.h"
#include "interpreter.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Brain BrainMachine;

int j, k, i = 0;

/*
 * 
 */
int main(int argc, char** argv) {
    
    char filepath[100];
    FILE * BRAIN;
    
    // get the filepath from the user
    fgets (filepath, sizeof(filepath), stdin);
    filepath[strlen(filepath) - 1] = '\0';
    
    BRAIN = fopen(filepath, "r");
    
    // If the BRAIN file exists
    if( BRAIN ) {
        
        storeInstr( BRAIN );
        
        for(i = 0 ; i < BrainMachine.IC ; i++) {
            interpret(i, BRAIN);
        }
        
        fclose( BRAIN );
        
    } else {
        perror(filepath);
    }
        
    return (EXIT_SUCCESS);
}