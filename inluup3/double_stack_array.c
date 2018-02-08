
#include <stdio.h>
#include <stdlib.h>
#include "double_stack_array.h"

		 
void create_stack(double_stack_ptr p){
	int i = 0;
	while (i < 20){
		p->info[i] = 0;
		i++;}
	}
		 
int push(double_stack_ptr p, double f){
	int i = 19;
	
	if (p->info[19] == 0){
	while (i > 0){
	p->info[i] = p->info[i-1];
	i--;}
	p->info[0] = f;
	return 0;}
	else{
		return 1;}
}

	
void pop(double_stack_ptr p){
	int i = 0;
	if(p->info[0] != 0){
		while (i < 19){
			p->info[i] = p->info[i+1];
			i++;}
			p->info[19] = 0;}
	
	}
	
void print(double_stack_ptr p){
	int i = 19;
	int f = 0;
	if (p->info[0] == 0){
		printf("The stack is empty!\nYour pop function will be ignored!\n");
		}
	if (p->info[19] != 0){
		printf("The stack is full!\nYour push function will be ignored!\n");
		}
	while(p->info[i] == 0){
		i--;}
	while (f < (i+1)){
		printf("%f\n",p->info[f]);
		f++;
		
		}
	}
