	// char   name[20];
	// char   type[20];
	// char  brand[20];
	// uint8_t   speed;
	// uint8_t   glide;
	// int8_t     turn;
	// uint8_t    fade;
	// float     price;
#include "functions.h"

void addNewDisc(){
	
	// Find the first empty instance in discs array
	char name[20] = "not empty";
	int i = 0;
	while(name){
		name[20] = discs[i].name;
		i++;
	}
	i--;

	// Disc name
	printf("Enter disc name: ");
	scanf("%[\n]s", &discs[i].name);

	// Disc type
	while(!discs[i].type){

	printf("Enter disc type\n");
	printf("----------------------\n");
	printf("Distance driver ---> 1\n");
	printf("Fairway driver  ---> 2\n");
	printf("Midrange        ---> 3\n");
	printf("Approach        ---> 4\n");
	printf("Putter          ---> 5\n\n");
	printf("Type: ");
	int selection;
	scanf("%d", &selection);

	switch(selection){
		case 1:
			discs[i].type = "Distance driver";
			break;
		case 2:
			discs[i].type = "Fairway driver";
			break;
		case 3:
			discs[i].type = "Midrange";
			break;
		case 4:
			discs[i].type = "Approach";
			break;
		case 5:
			discs[i].type = "Putter";
			break;
		default:
			printf("Invalid input.\n");
			break;
		}
	}

	// Disc brand

	while(!discs[i].brand){

	printf("Enter disc brand\n");
	printf("----------------------\n");
	printf("Innova         ---> 1\n");
	printf("Discmania      ---> 2\n");
	printf("Discraft       ---> 3\n");
	printf("Prodigy        ---> 4\n");
	printf("Westside       ---> 5\n");
	printf("Other, which?  ---> 6\n\n");
	printf("Brand: ");
	int selection;
	scanf("%d", &selection);

	switch(selection){
		case 1:
			discs[i].brand = "Innova";
			break;
		case 2:
			discs[i].brand = "Discmania";
			break;
		case 3:
			discs[i].brand = "Discraft";
			break;
		case 4:
			discs[i].brand = "Prodigy";
			break;
		case 5:
			discs[i].brand = "Westside";
			break;
		case 6:
			scanf("%s", &discs[i].brand);
			break;
		default:
			printf("Invalid input.\n");
			break;
		}
	}

	// Speed
	printf("Enter disc speed (1 to 14): ");
	scanf("%d", &discs[i].speed);

	// Glide
	printf("\n\nEnter disc glide (1 to 7): ");
	scanf("%d", &discs[i].glide);

	// Turn
	printf("\n\nEnter disc turn (-5 to 1): ");
	scanf("%d", &discs[i].turn);

	// Fade
	printf("\n\nEnter disc fade (0 to 5): ");
	scanf("%d", &discs[i].fade);

	// Fade
	printf("\n\nEnter disc price (e): ");
	scanf("%f", &discs[i].price);

}
