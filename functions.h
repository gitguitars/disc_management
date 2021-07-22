#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>

// typedef declarations

typedef struct
{
	char   name[30];
	char   type[20];
	char  brand[30];
	int   speed;
	int   glide;
	int    turn;
	int    fade;
	float price;
} disc_t;

// function declarations
void printMenu();
void addNewDisc(disc_t *pDiscs);

#endif