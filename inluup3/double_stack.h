typedef struct double_stack_struct Double_stack_struct;
typedef Double_stack_struct * double_stack_ptr;
void push(double_stack_ptr *stack, double d);
int  pop(double_stack_ptr *stack, double d);
double is_empty(double_stack_ptr sPtr);
void print_list(double_stack_ptr stack);

