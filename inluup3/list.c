#include <stdlib.h>
#include <stdio.h>
#include "list.h"
typedef
struct listNode{
	
	int data;
	struct listNode * nextptr;
	
	
}ListNode;
typedef ListNode * int_list;

void *add_after(int_list *list, char value)
{
    int_list new = malloc(sizeof(ListNode)); //create node
	
	if(new !=NULL){
	new->data=value;  //Place a value in node 
	new->nextptr=NULL; //node does not link to another 
	
	
	int_list svans=NULL;
	int_list  huvud= *list;
	
	//loop to find the correct location in te list
	while(huvud!=NULL && value > huvud->data) //&& value > huvud->data
	{
		svans=huvud;
		huvud=huvud->nextptr;
		}
	//insert new node att the beginning 
	if(svans==NULL)
	{
		new->nextptr= *list;
		*list=new;
		}
	//insert new node between svans and huvud 
	else
	{
		svans->nextptr=new;
		new->nextptr=huvud;
		}
   }
	

	
return 0;}
	
	
int is_empty(int_list sPtr)
{
	return sPtr==NULL;
	}

void print_list(int_list list)
{
	if (is_empty(list)){
	printf("Empty\n");
}
	else {
	while(list !=NULL)
	{
		printf("%d ", list->data);
		list=list->nextptr;
		}
	printf("\n");
}
	}

