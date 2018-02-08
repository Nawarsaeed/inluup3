#include <stdio.h>
#include <stdlib.h>
#define maxop 100
#define NUMBER '0'

 struct player{
	char name[20];
	struct player *inventory;
	int position;
};
typedef struct player Player;
typedef Player *stack_Player;



void *add_after(stack_Player *list, int value);
void print_list(stack_Player list);
void instructions(void);
int is_empty(stack_Player sPtr);
int delete(stack_Player *sPtr, int value);


 int main(void){

stack_Player stackPtr=NULL;
int value;
char s[maxop];

while ((value = getop(s)) != EOF) {

  switch(value){

    case NUMBER:
    add_after(&stackPtr,value);
  
          break;
    case '+':
    add_after(&stackPtr,value)+add_after(&stackPtr,value);

    break;

    case 3:

    break;

    case 4:
    printf("Enter:");
    if (!is_empty(stackPtr)){
    scanf("%d",&value);
		if(delete(&stackPtr,value)){;
			print_list(stackPtr);
			}
			else{
	 
				printf("%d not found",value);
			
				}
			}
	else{
		
		printf("The list is empty");}
    break;
    
    case 5:
    printf("Enter:");
    scanf("%d",&value);
    add_after(&stackPtr,value);
    print_list(stackPtr);

    break;

    case 6:

    break;

    case 7:

    break;

    default:
    puts("Invalid choice.\n");
    return 1;
    
  }
  printf(">");
  scanf("%u", &choice);
  
  

}
printf("End of the game\n");

}
// insert a node at the stack top
/*void push(stack_Player *stack, int info)
{

  stack_Player newptr=malloc(sizeof(Player));
  if(newptr!=NULL){
    newptr->position=info;
    newptr->inventory=*stack;
    *stack=newptr;
  }
  else{
    printf("%d not inserted. No memory available.\n",info);
  }
}
*/

void *add_after(stack_Player *list, int value)
{
    stack_Player new = malloc(sizeof(Player)); //create node
	
	if(new !=NULL){
	new->position=value;  //Place a value in node 
	new->inventory=NULL; //node does not link to another 
	
	
	stack_Player svans=NULL;
	stack_Player  huvud= *list;
	
	//loop to find the correct location in te list
	while(huvud!=NULL && value > huvud->position) //&& value > huvud->data
	{
		svans=huvud;
		huvud=huvud->inventory;
		}
	//insert new node att the beginning 
	if(svans==NULL)
	{
		new->inventory= *list;
		*list=new;
		}
	//insert new node between svans and huvud 
	else
	{
		svans->inventory=new;
		new->inventory=huvud;
		}
   }
	

	
return 0;}

int delete(stack_Player *sPtr, int value)
{ 
	if (value ==(*sPtr)->position){
		stack_Player tempPtr=*sPtr;
		*sPtr=(*sPtr)->inventory;
		free(tempPtr);
		return value;
		}
	else{
		
		stack_Player previosptr=*sPtr;
		stack_Player currentptr=(*sPtr)->inventory;
		
		while(currentptr !=NULL && currentptr->position !=value){
			
			previosptr=currentptr;
			currentptr=currentptr->inventory;
			}
		if (currentptr!=NULL){
			stack_Player temptr=currentptr;
			previosptr->inventory=currentptr->inventory;
			free(temptr);
			return value;
			}
		}
		return '\0';
	}

void print_list(stack_Player list)
{
	if (is_empty(list)){
	printf("The lis is Empty\n");
}
	else {
	while(list !=NULL)
	{
		printf("%d ", list->position);
		list=list->inventory;
		}
	printf("\n");
}
	}

	
int is_empty(stack_Player sPtr)
{
	return sPtr==NULL;
	}

