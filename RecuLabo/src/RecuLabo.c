#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "Utn.h"
#include "LinkedList.h"
#include "Controller.h"
#include "Parser.h"
#include "Venta.h"

int main(void) {
setbuf(stdout, NULL);

	int auxReturn = -1;
	linkedList* ventas= NULL;
	int mainMenuOption;
	int flagLoadedFile = FALSE;
	int flagSaveFile = TRUE;

	if((ventas = ll_New())!= NULL){
		do{
			MAINMENU:
			mainMenu();
		}while()
	}

			return 0;
}


void mainMenu(void){
	printf("\n---------------------Menu Principal--------------------"
			"\n\n1. cargar archivo"
			"\n2. Imprimir ventas"
			"\n3. Generar archivo de montos"
			"\n4. Informes"
			"\n5. Salir del Programa");
}
