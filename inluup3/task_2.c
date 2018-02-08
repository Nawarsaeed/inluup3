

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
	int_list startptr=creat_list();
	char item;
	for(int i=1; i<argc; i++){
	item=atoi(argv[i]);
	add_after(&startptr,item);
}
	print_list(startptr);
	
	return 0;
	}

