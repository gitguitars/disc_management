#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>


// function declarations
void printMenu();
void addNewDisc();

// typedef declarations

typedef struct
{
	char   name[20];
	char   type[20];
	char  brand[20];
	uint8_t   speed;
	uint8_t   glide;
	int8_t     turn;
	uint8_t    fade;
	float     price;
} disc_t;

#endif