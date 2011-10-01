/* 
 * interpreter.c
 *
 * 
 * Created on: September 30, 2011
 * Author: Brian L. Jackson
 */

#include "interpreter.h"
#include "BrainMain.h"
#include "storer.h"

Brain BrainMachine;

/*
 * Interpreter function
 */
void interpret(int place, FILE * brain) {
    char operator[3];
    int a,x1,x2;
    operator[0] = BrainMachine.MainMemory[place][0];
    operator[1] = BrainMachine.MainMemory[place][1];
    operator[2] = '\0';
    
    
    // get x1, x2, and then calculate a
    x1 = (int)BrainMachine.MainMemory[place][2];
    x2 = (int)BrainMachine.MainMemory[place][3];
    a = (10 * x1) + x2;
    
    printf("%s\n", operator);
    
    // start comparing and interpreting
    if( strcmp("LR", operator) == 0) {

    } else if( strcmp("LL", operator) == 0) {
        
    } else if( strcmp("LH", operator) == 0) {
        
    } else if( strcmp("SR", operator) == 0) {
        
    } else if( strcmp("SP", operator) == 0) {
    
    } else if( strcmp("PS", operator) == 0) {
        
    } else if( strcmp("PH", operator) == 0) {
        
    } else if( strcmp("PP", operator) == 0) {
    
    } else if( strcmp("CE", operator) == 0) {
        
    } else if( strcmp("CL", operator) == 0) {
        
    } else if( strcmp("BT", operator) == 0) {
        
    } else if( strcmp("BU", operator) == 0) {
        
    } else if( strcmp("GD", operator) == 0) {
        storeData(a, brain);
    } else if( strcmp("PD", operator) == 0) {
        
    } else if( strcmp("AD", operator) == 0) {
        
    } else {
        printf("Invalid Operator");
    }
}

