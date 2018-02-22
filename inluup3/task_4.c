

#include <stdlib.h>
#include <stdio.h>
#include "double_stack.h"

///vi tänker oss att en NULL_pekare är en tom lista
double_stack_ptr creat_stack(){

	return NULL;
	}

	int main (int argc, char *argv[])
	{
		double_stack_ptr startptr=creat_stack();// från början finns det inga noder
		double item; // item matas in från användaren

			//en räknare som sköter de värden som använderen matar in
		for(int i=1; i<argc; i++)
		{
		item=atof(argv[i]);  // omvandla char till int
		push(&startptr,item);  // anropar funktionen push
		//pop(&startptr);
		}

		if(!is_empty(startptr)) //kollar om stacken är inte tom
		{
		pop(&startptr,item); // anropa pop funktionen
		}
		print_list(startptr); // annras visar fel medellande

		return 0;
		}
