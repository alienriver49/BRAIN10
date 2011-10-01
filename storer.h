/*
 * interpreter.h
 *
 * Header file for the BRAIN interpreter.
 * Created on: Sep 30, 2011
 * Author: Brian L. Jackson
 */

#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef Interpreter_H_
#define Interpreter_H_

void storeInstr(FILE*);
void storeData(int, FILE*);

#endif /* Interpreter_H_ */