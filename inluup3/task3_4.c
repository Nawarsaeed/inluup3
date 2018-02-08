
#include <stdlib.h>
#include <stdio.h>
typedef
struct double_stack_struct{
	
	double data;
	struct double_stack_struct * nextptr;
	
	
}Double_stack_struct;

typedef Double_stack_struct * double_stack_ptr;

///vi tänker oss att en NULL_pekare är en tom lista 
double_stack_ptr creat_stack(){
	
	return NULL;
	}



void push(double_stack_ptr *stack, double d)
{
    double_stack_ptr new = malloc(sizeof(Double_stack_struct)); //create node
	
	if(new !=NULL){
	new->data=d;  //Place a value in node 
	new->nextptr=*stack; //node does not link to another
	*stack=new;
} 
}

int pop(double_stack_ptr *stack, double d)
{
	double_stack_ptr temp= *stack;
	(*stack)->data=d;
	*stack=(*stack)->nextptr;
	free(temp);
	return (d);
	
	}
	
	
double is_empty(double_stack_ptr sPtr)
{
	return sPtr==NULL;
	}

void print_list(double_stack_ptr stack)
{
	if (stack==NULL){
	printf("Empty\n");
}
	else {
	while(stack !=NULL)
	{
		printf("%f\n", stack->data);
	      stack=stack->nextptr;
		}
	printf("\n");
}
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

