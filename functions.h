#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// function declarations
void printMenu();


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
} discModel_t;

#endif