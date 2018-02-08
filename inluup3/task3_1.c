#include <stdlib.h>
#include <stdio.h>

typedef
struct node {
	
	int data;
	struct node * next;
	
}int_list;


///vi tänker oss att en NULL_pekare är en tom lista 

int_list * creat_list()
{
	
	
	return NULL;
	}
	
	
int_list *push(int_list * head, int d);





void push2(int_list **head, int d)
{
	int_list * new = malloc(sizeof(int_list));
	new->data=d;
	new->next=*head;
	*head=new;
}

void print_list(int_list * list)
{
	if (list==NULL){
	printf(" \n");
}
	else {
	printf("%d ", list->data);
	print_list(list->next);
}
	}

int main(int argc, char *argv[])
{
	int_list * lista=creat_list();
	char item;
	for(int i=1; i<argc; i++){
	item=atoi(argv[i]);
	push2(&lista, item);
}

	print_list(lista);
	return 0;
	}

