typedef struct double_stack_struct
{
	int indx;
	double info[20];
	int top;
}Double_stack_struct;
typedef Double_stack_struct * double_stack_ptr;

void create_stack(double_stack_ptr p);
int push(double_stack_ptr p, double f);
void pop(double_stack_ptr p);
void print(double_stack_ptr p);


