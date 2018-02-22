#include <stdlib.h>
#include <stdio.h>
// en struct för en lista
typedef
struct node {

	int data; // varje nod innehåller en integer
	struct node * next; // pekare till nästa nod

}int_list;
// prototyper
void push(int_list **head, int d);
void print_list(int_list * list);


///vi tänker oss att en NULL_pekare är en tom lista
int_list * creat_list()
{

	return NULL;
	}
/* Fuktionen push  lägger till ett tall efter ett nannat i listan
* @parm head ser till att den pushade värdet hamnar i början av listan
* @parm d tar imot den nya värdet, för att placera det i noden
*/
void push(int_list **head, int d)
{
	int_list * new = malloc(sizeof(int_list)); // skapa en nod
	new->data=d; // placera värdet i noden
	// här skapas en ny nod i början av listan
	new->next=*head;
	*head=new;
}
/* funkionen print_list printar ut de värden som placeras i listan
 * @param list är en pekare som pekar på slutet av listan
 */
void print_list(int_list * list)
{
	if (list==NULL) // om listan är tom, printas ut en tom plats "\n"
	{
	printf(" \n");
}
// om litan är ej tom, kommer den sista elementen printas ut först osv.
	else
	 {
	printf("%d ", list->data);
	print_list(list->next);
}
	}

int main(int argc, char *argv[])
{
	int_list * lista=creat_list(); // från början finns det inga noder
	char item; // item matas in från användaren

	//en räknare som sköter de värden som använderen matar in
	for(int i=1; i<argc; i++)
	{
	item=atoi(argv[i]); // omvandla char till it
	push(&lista, item); // anropar funktionen push
}

	print_list(lista); // printar ut värden
	return 0;
	}
