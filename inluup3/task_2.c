

#include <stdlib.h>
#include <stdio.h>
#include "list.h"

///vi tänker oss att en NULL_pekare är en tom lista
int_list creat_list()
{

	return NULL;
	}



	int main (int argc, char *argv[])
	{
		int_list startptr=creat_list();// från början finns det inga noder
		char item;// item matas in från användaren

		//en räknare som sköter de värden som använderen matar in
		for(int i=1; i<argc; i++){
		item=atoi(argv[i]);  // omvandla char till it
		add_after(&startptr,item);  // anropar funktionen push
	}
		print_list(startptr); // printar ut värden

		return 0;
		}
