/* 
 * File:   BrainMain.c
 * Author: brian
 *
 * Created on September 30, 2011, 7:08 PM
 */

#include "BrainMain.h"

#define MEM_SIZE        100
#define WORD_SIZE       4

Brain BrainMachine;

void initializeBrain() {
    BrainMachine.REGISTER = 0;
    BrainMachine.STACK_POINTER = 0;
    BrainMachine.BASE_REGISTER = 0;
    BrainMachine.LIMIT_REGISTER = 100;
    
    BrainMachine.IC = 0;
    BrainMachine.BOOL_SWITCH = 0;
}