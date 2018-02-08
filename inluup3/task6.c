

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct stack_struct{

	double data;
	struct stack_struct * nextptr;

}Stackstruct;
typedef Stackstruct *stack_ptr;

//prototayp
double push(stack_ptr *stack, double d);
double  pop(stack_ptr *stack);
double is_empty(stack_ptr sPtr);
void print_list(stack_ptr stack);



double push(stack_ptr *stack, double d)
{
    stack_ptr new = malloc(sizeof(Stackstruct)); //create node

	if(new !=NULL){
	new->data=d;  //Place a value in node
	new->nextptr=*stack; //node does not link to another
	*stack=new;
}

}

double pop(stack_ptr *stack)
{
	stack_ptr temp= *stack;
	double popvalue=(*stack)->data;
	*stack=(*stack)->nextptr;
	free(temp);
	return popvalue;

	}


double is_empty(stack_ptr sPtr)
{
	return sPtr==NULL;
	}

void print_list(stack_ptr stack)
{
	if (stack==NULL){
	printf("The stack is Empty\n");
}
	else {
	while(stack !=NULL)
	{
		printf("%g -->", stack->data);
	      stack=stack->nextptr;
		}
	printf("\n");
}

	}
stack_ptr creat_stack(){

	return NULL;
	}



//adds 2 integers
double add(stack_ptr *stack)
{
  if(*stack==NULL || (*stack)->nextptr==NULL){
    printf("The stack is empty or must have tow elments befor"
    " inserting operation\n");
  }
  else{
	double eval=pop(stack);
  double reval=pop(stack);
  push(stack,reval+eval);
}
}

//subtracts 2 integers
double sub(stack_ptr *stack)
{
  if(*stack==NULL || (*stack)->nextptr==NULL){
    printf("The stack is empty or must have tow elments befor"
    " inserting operation\n");
  }
  else{
	double eval=pop(stack);
  double reval=pop(stack);
  push(stack,reval-eval);
}
}

//multiplies 2 integers
double mul(stack_ptr *stack)
{
  if(*stack==NULL || (*stack)->nextptr==NULL){
    printf("The stack is empty or must have tow elments befor"
    " inserting operation\n");
  }
  else{
	double eval=pop(stack);
  double reval=pop(stack);
  push(stack,reval*eval);
}
}

//divides 2 integers
double divide(stack_ptr *stack)
{
  if(*stack==NULL || (*stack)->nextptr==NULL){
    printf("The stack is empty or must have tow elments befor"
    " inserting operation\n");
  }
  else{
	double eval=pop(stack);
  double reval=pop(stack);
	if(reval==0){
		printf("Can not divide by 0");
	}

  push(stack,reval/eval);
}
}

int main (void)
{
	stack_ptr startptr=creat_stack();
    char choice;
		char insert[80];
		double item;



while (1) {

//printf("%s","?");

scanf("%c",&choice );

  if(isdigit(choice) || choice=='-' || choice=='.' || choice==','){
					insert[0]=choice;
					insert[1]='\0';
					item=atof(&choice);
          push(&startptr,item);
          print_list(startptr);
				}

  switch(choice){
    case '+':
    add(&startptr);
    printf("=%g\n", push(&startptr,pop(&startptr)));
          break;
    case '-':
    sub(&startptr);
    printf("=%g\n", push(&startptr,pop(&startptr)));
					break;
    case '*':
    mul(&startptr);
    printf("=%g\n", push(&startptr,pop(&startptr)));
					break;
    case '/':
    divide(&startptr);
    printf("=%g\n", push(&startptr,pop(&startptr)));
					break;

  }

  scanf("%c",&choice);

}
}
