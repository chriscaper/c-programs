

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void push(int *stack);
void pop();
void display(int *stack);
int TopElement();
bool isEmpty();
int size();
int top = -1;
int n,x;

int main()
{   int *stack;
    char op;
    
    printf("How many elements would you like to add?\n");
    scanf("%d",&n);
    stack = malloc(n * sizeof(int));  

    int choice;
    x: printf("\n\nChoose: \n1.Push\n2.Pop\n3.Display\n4.Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: {
                 push(stack);
                 goto x;

         }
        case 2: {   pop();
                    goto x;

        }
        case 3: {  display(stack);
                   goto x;

        }
        case 4: {  exit(0);          
        }
        default: { printf("The case does not exist");
                   goto x;
        }
    }
         
    

return 0;
    
}

void push(int *stack)
{
    
    if(top == n-1)
    {
        printf("\nStack overflow");
    }
    else{
         printf("\nEnter element %d: ",top+2);
         scanf("%d",&x);
         top=top+1;
         stack[top]=x;
    }


}

void display(int *stack)
{   int i;
    
    if(top!= -1)
    {printf("\nThe %d elements in the stack are: ", top+1);
    
        for(i=0; i<=top; i++)
        {
            printf("\nStack Element %d is: %d \n", i+1, stack[i]);
        }
    }
    else
    {
        printf("\nNothing to display");
                
    }
    

}

void pop()
{
    if(isEmpty())
    {
        printf("\nStack Underflow\n");
        
    }
    else
    {
        top=top-1;
        printf("Element popped");
        
    }
    
}

bool isEmpty()
{
    if(top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int size()
{
    return top+1;
}

int topElement(int *stack)
{
    return stack[top];
}