

#include <stdlib.h>
#include <stdio.h>
#include "double_stack.h"

double_stack_ptr creat_stack(){
	
	return NULL;
	}


int main (int argc, char *argv[])
{
	double_stack_ptr startptr=creat_stack();
	double item;
	for(int i=1; i<argc; i++){
	item=atof(argv[i]);
	push(&startptr,item);
	//pop(&startptr);
	}
	if(!is_empty(startptr))
	{
	pop(&startptr,item);
	}
	print_list(startptr);
	
	return 0;
	}

