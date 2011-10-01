/* 
 * interpreter.c
 *
 * 
 * Created on: September 30, 2011
 * Author: Brian L. Jackson
 */

#include "storer.h"
#include "BrainMain.h"

Brain BrainMachine;

/*
 * Method to store the instructions 
 */
void storeInstr( FILE * file ) {
    char start[7], command[4];
    
    // Grab first line from the file
    fgets(start, sizeof(start) + 1, file);
    //printf("%s", start);
    
    // Check if it is a BRAIN10 program
    if( strcmp("BRAIN10", start) == 0) {
        // Loops through storing each line in memory
        while( fgets(command, sizeof(command) + 1, file) != NULL ) {
            //printf("%s", command);
            if(strcmp("\n", command) == 0){
                //don't store the newline
            } else if (strcmp("DATA", command) == 0){
                // remove the newline char
                fgetc(file);
                // break, wait for RD to read data
                break;
            } else {
                strcpy(BrainMachine.MainMemory[BrainMachine.IC], command);
                BrainMachine.IC++;
            }
        }
    } else {
        // the user didn't input a correct BRAIN program
    }
    
}

/*
 * Function to store data
 */
void storeData(int bound, FILE * file ) {
    int i;
    char c;
    
    for( i = 0 ; i < 10 ; i++) {
        c = fgetc(file);
        
        BrainMachine.MainMemory[bound][0] = c;
        printf("%c", c);
    }
}
