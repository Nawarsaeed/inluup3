#include <stdio.h>
#include "double_stack_array.h"
#include <stdlib.h>

	
int main(int argc, char* argv[]){
	
	struct double_stack_struct s;
	double_stack_ptr p = &s;
	double item;
	create_stack(p);
	for(int i=1; i <argc;i++){
	item=atof(argv[i]);
	push(p,item);
}
	pop(p);
	print(p);
	return 0;}
	
