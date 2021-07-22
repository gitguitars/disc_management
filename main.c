#include "functions.h"

disc_t discs[50];

int main(){
	printf("\n#########################################\n");
	printf("#                                       #\n");
	printf("#   Welcome to disc management program  #\n");
	printf("#                                       #\n");
	printf("#########################################\n");

	uint8_t menuSelection;

	while(1){
		printMenu();
		scanf("%hhu", &menuSelection);

		switch(menuSelection){

			case 1:
				addNewDisc(disc_t *pDiscs);
				break;

			case 2:
				//searchDisc();
				break;

			case 3:
				//deleteDisc();
				break;

			case 4:
				//listDiscs();
				break;

			case 5:
				printf("Exiting program...\n");
				sleep(1.0);
				return 0;
		}

	}

	return 0;
}