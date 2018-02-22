
#include <stdlib.h>
#include <stdio.h>
typedef
struct double_stack_struct{

	double data; // identifera data som integer
	struct double_stack_struct * nextptr; // stack pekare


}Double_stack_struct;

typedef Double_stack_struct * double_stack_ptr; //synonym- global veriabel

///vi tänker oss att en NULL_pekare är en tom lista
double_stack_ptr creat_stack(){

	return NULL;
	}

/* push funktionen tar alltså en dubbel pekare till en stack
* @param d,som input, och returnerar en pekare till toppen på stacken
* efter att talet d har lagts till
*/

void push(double_stack_ptr *stack, double d)
{
    double_stack_ptr new = malloc(sizeof(Double_stack_struct)); //skapar noden
	// finns det plats fÖr att ett nod ska läggas till?
	if(new !=NULL){
	new->data=d;   // placera noden till toppen av stacken
	new->nextptr=*stack;
	*stack=new;
}
else{
	printf("%d not inserted. No memomry available\n", d );
}
}
/* funktionen pop har två parametrar.Den används till att tar bort det översta
*elementet i stacken och lägger det där d pekar
*@ param d tar imot den elmeneten som tas bort fr[n stacken
*@
*/
int pop(double_stack_ptr *stack, double d)
{
	double_stack_ptr temp= *stack;// fria det onödiga minnet
	(*stack)->data=d; //spara värdet i toppen till noden
	*stack=(*stack)->nextptr; // *stack kommer ha adressen till den noden
	free(temp); // fria minnet
	return (d);

	}

// returnera 1 om listan är tom, 0 annars
double is_empty(double_stack_ptr sPtr)
{
	return sPtr==NULL;
	}
/* funktionen används för att printa ut värden i stacken
 * @param list är en pekare som pekar på slutet av stacken
 */
void print_list(double_stack_ptr stack)
{
	//om stack är tom, print ut Empty
	if (stack==NULL){
	printf("Empty\n");
}
// annaras printa ut värden  så länge stack är inte tom
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
