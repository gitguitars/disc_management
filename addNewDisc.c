	// char   name[20];
	// char   type[20];
	// char  brand[20];
	// uint8_t   speed;
	// uint8_t   glide;
	// int8_t     turn;
	// uint8_t    fade;
	// float     price;
#include "functions.h"

void addNewDisc(disc_t *pDiscs){
	
	// Find the first empty instance inpDiscs array

	int i = 0;
	while(pDiscs[i].name){
		i++;
	}
	i--;

	// Disc name
	printf("Enter disc name: ");
	scanf("%[\n]s", pDiscs[i].name);

	// Disc type
	while(pDiscs[i].type){

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
		strcpy(&pDiscs[i].type, "Distance driver");
			break;
		case 2:
		strcpy(&pDiscs[i].type, "Fairway driver");
			break;
		case 3:
		strcpy(&pDiscs[i].type, "Midrange");
			break;
		case 4:
		strcpy(&pDiscs[i].type, "Approach");
			break;
		case 5:
		strcpy(&pDiscs[i].type, "Putter");
			break;
		default:
			printf("Invalid input.\n");
			break;
		}
	}

	// Disc brand

	while(pDiscs[i].brand){

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
		strcpy(&pDiscs[i].brand, "Innova");
			break;
		case 2:
		strcpy(&pDiscs[i].brand, "Discmania");
			break;
		case 3:
		strcpy(&pDiscs[i].brand, "Discraft");
			break;
		case 4:
		strcpy(&pDiscs[i].brand, "Prodigy");
			break;
		case 5:
		strcpy(&pDiscs[i].brand, "Westside");
			break;
		case 6:
			scanf("%s", &pDiscs[i].brand);
			break;
		default:
			printf("Invalid input.\n");
			break;
		}
	}

	// Speed
	printf("Enter disc speed (1 to 14): ");
	scanf("%d", &pDiscs[i].speed);

	// Glide
	printf("\n\nEnter disc glide (1 to 7): ");
	scanf("%d", &pDiscs[i].glide);

	// Turn
	printf("\n\nEnter disc turn (-5 to 1): ");
	scanf("%d", &pDiscs[i].turn);

	// Fade
	printf("\n\nEnter disc fade (0 to 5): ");
	scanf("%d", &pDiscs[i].fade);

	// Fade
	printf("\n\nEnter disc price (e): ");
	scanf("%f", &pDiscs[i].price);

}
