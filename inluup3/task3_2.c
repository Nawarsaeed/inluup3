

#include <stdlib.h>
#include <stdio.h>

// en struct som presenterar en listnode
typedef
struct listNode{

	int data;
	struct listNode * nextptr;


}ListNode;

typedef ListNode * int_list; //global variabel

///vi tänker oss att en NULL_pekare är en tom lista
int_list creat_list()
{


	return NULL;
	}
	// prototyper
void *add_after(int_list *list, char);
int is_empty(int_list);
void print_list(int_list);
/**
* Lägger till ett tal efter ett annat i en int_list.
*
* @param list
* Pekare på det element där det nya ska läggas in. Det kan vara
* en tom lista.
*
* @param data
* Det nya värdet.
*
* @return
* En pekare på det nya elementet, om det lyckades.
* NULL annars
*/
void *add_after(int_list *list, char value)
{
    int_list new = malloc(sizeof(ListNode)); //sakapr en node
	// finns det plats 
	if(new !=NULL){
	new->data=value;   // placera värdet i noden
	new->nextptr=NULL; //nod knyter inte till någon annan


	int_list prev=NULL; // listans svans (alltså det sista elementet)
	int_list  curr= *list; // listans huvud

	//loop för som ser till om listatns huvud inte tom
	while(curr!=NULL)
	{
		prev=curr; // gå till ...
		curr=curr->nextptr; // nästa noden..
		}
	//sätt en ny nod i början  om listans svans är tom
	if(prev==NULL)
	{
		new->nextptr= *list;
		*list=new;
		}
	//annaras sätt in en ny nod mellan listans huvud och svans
	else
	{
		prev->nextptr=new;
		new->nextptr=curr;
		}
   }


	return 0;
}

// returnera 1 om listan är tom, 0 annars
int is_empty(int_list sPtr)
{
	return sPtr==NULL;
	}
/* funktionen används för att printa ut listan
 * @param list är en pekare som pekar på slutet av listan
 */
void print_list(int_list list)
{
	//om listan är tom, print ut Empty
	if (is_empty(list)){
	printf("Empty\n");
}
// annaras printa ut listan så länge den är inte tom
	else {
	while(list !=NULL)
	{
		printf("%d ", list->data);
		list=list->nextptr;
		}
	printf("\n");
}
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
