/*
 * BrainMain.h
 *
 * Struct to store main memory and the state of the Machine.
 * Created on: Sep 30, 2011
 * Author: Lucas A. Wood
 */

#include <sys/types.h>

#ifndef BrainMain_H_
#define BrainMain_H_

void initializeBrain();

typedef struct Brain {
    u_int32_t REGISTER;	//Register
    u_int32_t STACK_POINTER; //Stack Pointer
    u_int32_t BASE_REGISTER; //Base Register
    u_int32_t LIMIT_REGISTER; //Limit Register
    int IC;				//Instruction Counter
    int BOOL_SWITCH;	
    char MainMemory[100][4]; //Main Memory
    //char P_STORAGE[4000];
} Brain;


#endif /* BrainMain_H_ */